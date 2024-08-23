#include "main.h"

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
