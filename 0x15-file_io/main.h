#ifndef _file_h_
#define _file_h_
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
ssize_t read_textfile(const char *filename, size_t letters);
#endif
