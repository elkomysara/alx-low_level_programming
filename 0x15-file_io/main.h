#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


void check_args(int argc);
int open_file_from(const char *filename);
int open_file_to(const char *filename);
void copy_content(int fd_from, int fd_to);
void close_file(int fd);
#endif /* MAIN_H */
