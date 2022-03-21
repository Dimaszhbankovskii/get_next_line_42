# Get_Next_Line_42

This project consist of writing a function get_next_line which get the next line in a file.

## Get_next_line Version_1
Prototype function:
```bash
char *get_next_line(int fd);
```
The function takes a file descriptor and returns a pointer to the read line from the file.

## Get_next_line Version_2
Prototype function:
```bash
int get_next_line(int fd, char **line);
```
The function takes a file descriptor and a pointer to a string pointer and returns an integer value that characterizes the result of reading from the file.
### Return value
 | Value | Description         |
 |-----------|----------------------|
 |  1| A line has been read |
 |  0| EOF has been reached |
 |  -1| An error happened |
