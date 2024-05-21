# 0x14. JavaScript - Web scraping

## Description
This project involves writing scripts in JavaScript to perform web scraping tasks using the `request` module. Each script has specific functionality as described below.

## Requirements
- Node.js 14.x
- `semistandard` package
- `request` module

## Files

- `0-readme.js`: Reads and prints the content of a file.
- `1-writeme.js`: Writes a string to a file.
- `2-statuscode.js`: Displays the status code of a GET request.
- `3-starwars_title.js`: Prints the title of a Star Wars movie by episode number.
- `4-starwars_count.js`: Prints the number of movies where "Wedge Antilles" is present.
- `5-request_store.js`: Gets the contents of a webpage and stores it in a file.
- `6-completed_tasks.js`: Computes the number of tasks completed by user ID.
- `100-starwars_characters.js`: Prints all characters of a Star Wars movie.
- `101-starwars_characters.js`: Prints all characters of a Star Wars movie in the order they appear.

## Installation
To install the necessary tools, run the following commands:
```shell
curl -sL https://deb.nodesource.com/setup_14.x | sudo -E bash -
sudo apt-get install -y nodejs
sudo npm install semistandard --global
sudo npm install request --global
export NODE_PATH=/usr/lib/node_modules
