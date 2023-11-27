#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUFFER_SIZE 16

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_abiversion(unsigned char *e_ident);
void print_type(unsigned int e_type);
void print_entry(unsigned long e_entry);

/**
 * main - Entry point, displays the ELF header information
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: Can't read ELF header\n");
		close(fd);
		exit(98);
	}

	check_elf(header.e_ident);

	printf("ELF Header:\n");
	print_magic(header.e_ident);
	print_class(header.e_ident);
	print_data(header.e_ident);
	print_version(header.e_ident);
	print_osabi(header.e_ident);
	print_abiversion(header.e_ident);
	print_type(header.e_type);
	print_entry(header.e_entry);

	close(fd);
	return (0);
}

/**
 * check_elf - Checks if a file is a valid ELF file
 * @e_ident: Pointer to ELF header struct
 */
void check_elf(unsigned char *e_ident)
{
	if (e_ident[EI_MAG0] != ELFMAG0 || e_ident[EI_MAG1] != ELFMAG1 ||
		e_ident[EI_MAG2] != ELFMAG2 || e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}
}

/**
 * print_magic - Prints the magic bytes in the ELF header
 * @e_ident: Pointer to ELF header struct
 */
void print_magic(unsigned char *e_ident)
{
	int i;
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", e_ident[i]);
	printf("\n");
}

/**
 * print_class - Prints the ELF class
 * @e_ident: Pointer to ELF header struct
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - Prints the ELF data encoding
 * @e_ident: Pointer to ELF header struct
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}

/**
 * print_version - Prints the ELF version
 * @e_ident: Pointer to ELF header struct
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           ");
	switch (e_ident[EI_VERSION])
	{
	case EV_NONE:
		printf("0 (invalid)\n");
		break;
	case EV_CURRENT:
		printf("1 (current)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_VERSION]);
	}
}

/**
 * print_osabi - Prints the ELF OS ABI
 * @e_ident: Pointer to ELF header struct
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_AIX:
		printf("UNIX - AIX\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_MODESTO:
		printf("Novell - Modesto\n");
		break;
	case ELFOSABI_OPENBSD:
		printf("UNIX - OpenBSD\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abiversion - Prints the ELF ABI version
 * @e_ident: Pointer to ELF header struct
 */
void print_abiversion(unsigned char *e_ident)  
{
	printf("  ABI Version:                       %u\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the ELF file type
 * @e_type: ELF file type
 */
void print_type(unsigned int e_type)
{
	printf("  Type:                              ");
	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (No file type)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry - Prints the ELF entry point address
 * @e_entry: Entry point address
 */
void print_entry(unsigned long e_entry)  
{
	printf("  Entry point address:               0x%lx\n", e_entry);  
}
