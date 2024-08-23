#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
* check_args - Checks the number of arguments passed to the program.
* @argc: The argument count.
*/
void check_args(int argc)
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
}

/**
* open_file_from - Opens the source file for reading.
* @filename: The name of the file to open.
*
* Return: The file descriptor of the opened file.
*/
int open_file_from(const char *filename)
{
int fd = open(filename, O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
}
return (fd);
}

/**
* open_file_to - Opens the destination file for writing.
* @filename: The name of the file to open.
*
* Return: The file descriptor of the opened file.
*/
int open_file_to(const char *filename)
{
int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}
return (fd);
}

/**
* copy_content - Copies content from one file to another.
* @fd_from: The file descriptor of the source file.
* @fd_to: The file descriptor of the destination file.
*/
void copy_content(int fd_from, int fd_to)
{
char buffer[BUFFER_SIZE];
ssize_t r_count, w_count;

while ((r_count = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
w_count = write(fd_to, buffer, r_count);
if (w_count != r_count)
{
dprintf(STDERR_FILENO, "Error: Can't write to file\n");
exit(99);
}
}

if (r_count == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file\n");
exit(98);
}
}

/**
* close_file - Closes a file descriptor.
* @fd: The file descriptor to close.
*/
void close_file(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
* main - Entry point for the program to copy files.
* @argc: The argument count.
* @argv: The argument vector.
*
* Return: 0 on success, or exits with an error code on failure.
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to;

check_args(argc);
fd_from = open_file_from(argv[1]);
fd_to = open_file_to(argv[2]);
copy_content(fd_from, fd_to);
close_file(fd_from);
close_file(fd_to);

return (0);
}
