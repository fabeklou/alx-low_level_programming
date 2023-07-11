#ifndef _MAIN_H
#define _MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/uio.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif /* End of _MAIN_H */
