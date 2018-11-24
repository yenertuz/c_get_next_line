# C_Get_Next_Line  

##### Header

__Author:__ Yener Tuz  
__Creation date__: 9/23/2018  

* A 42USA project

##### Intro

ft_gnl is a new function that adds a line (delimited by `'\n'`) into a `char **` buffer

##### Requirements

gcc, sh, a terminal, `<unist.d>`, `<stdlib.h>`, `<string.h>`  

##### Usage

* Run `relib.sh` by entering `sh relib.sh` in the command prompt  
  
* To link the library into another project:  
	1. clone this repository into your project `git clone https://github.com/yenertuz/mini_lib_c  libft`  
	2. `sh relib.sh` to get the `libft.a` file  
	3. while compiling your project, link this library: `gcc -Ilibft/inc/ -Llibft -lft *.c`   
	

* example usage:

```
int fd = open("test.txt", O_RDONLY);  
char *buffer;  
ft_gnl(fd, &buffer);  
printf(buffer);
free(buffer); /* ft_gnl will allocate dynamic memory, which you need to free once done */
```
