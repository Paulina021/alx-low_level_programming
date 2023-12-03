#ifndef MAIN_H
#define MAIN_H
<<<<<<< HEAD
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
=======
#include <stdio.h>
void positive_or_negative(int i);
#endif /* MAIN_H */
>>>>>>> 76ac89a3b6907724945fe22ba302bb0aa2310b00
