#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
* append_text_to_file - Appends text at the end of a file.
* @filename: The name of the file
* @text_content: The NULL-terminated string to add at the end of the file
*
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, len = 0, written;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
while (text_content[len])
len++;
}

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
written = write(fd, text_content, len);
if (written == -1 || written != len)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
