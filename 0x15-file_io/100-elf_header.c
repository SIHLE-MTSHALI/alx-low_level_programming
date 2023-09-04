#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
/**
* is_elf_file - Checks if the file is an ELF file
* @e_ident: The identification bytes of the ELF header
* Return: 1 if it is an ELF file, 0 otherwise
*/
int is_elf_file(unsigned char *e_ident)
{
return (e_ident[EI_MAG0] == ELFMAG0 &&
e_ident[EI_MAG1] == ELFMAG1 &&
e_ident[EI_MAG2] == ELFMAG2 &&
e_ident[EI_MAG3] == ELFMAG3);
}
/**
* print_elf_header - Prints the ELF header information
* @elf_header: Pointer to struct containing ELF header
*/
void print_elf_header(Elf64_Ehdr *elf_header)
{
int i;
printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", elf_header->e_ident[i]);
printf("\n");
printf("  Class:                             ");
printf("%s\n",
elf_header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
printf("  Data:                              ");
printf("%s\n",
elf_header->e_ident[EI_DATA] == ELFDATA2LSB ?
"2's complement, little endian" : "2's complement, big endian");
printf("  Version:                           %d ",
elf_header->e_ident[EI_VERSION]);
printf("(current)\n");
printf("  OS/ABI:                            UNIX - System V\n");
printf("  ABI Version:                       %d\n",
elf_header->e_ident[EI_ABIVERSION]);
printf("  Type:                              ");
printf("%s\n",
elf_header->e_type == ET_EXEC ? "EXEC (Executable file)" : "UNKNOWN");
printf("  Entry point address:               %p\n",
(void *)elf_header->e_entry);
}
/**
* main - Entry point
* @argc: Argument count
* @argv: Argument vector
* Return: 0 on success, 98 otherwise
*/
int main(int argc, char **argv)
{
int fd;
Elf64_Ehdr elf_header;
if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
return (98);
}
fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
return (98);
}
if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
close(fd);
return (98);
}
if (!is_elf_file(elf_header.e_ident))
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
close(fd);
return (98);
}
print_elf_header(&elf_header);
close(fd);
return (0);
}

