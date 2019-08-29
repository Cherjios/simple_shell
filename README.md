### SIMPLE SHELL

In computing, a shell is a user interface for access to an operating system's
services. In general, operating system shells use either a command-line
interface (CLI) or graphical user interface (GUI), depending on a computer's
role and particular operation. It is named a shell because it is the outermost
layer around the operating system kernel.

Reference: https://en.wikipedia.org/wiki/Shell_(computing)

## ./shell

this is a simple implementation of a shell in C, that implement Standard
functions and system calls like: exit, fork, free, getline, malloc, perror,
signal, stat, wait, write.

It demonstrates the basics of how a shell works. That is: read, parse, fork,
exec, and wait.

Now it is just a simple shell, and has many limitations, including:

* Handle single commands without arguments (e.g. ls);
* Support commands with arguments
* No piping, redirection or special characteres are supported.
* Only builtins: `exit`, `help`, `env` was inplemented
*   Support CTRL+D


## To compile:
```gcc -Wall -Werror -Wextra -pedantic *.c -o shell```

## This shell can be run in interactive mode:
example
```$ ./shell```

```$ ls -la```
```
total 52
drwxrwxr-x 2 vero vero  4096 Aug 27 10:00 .
drwxr-xr-x 8 vero vero  4096 Aug 23 12:23 ..
-rw-rw-r-- 1 vero vero  1021 Aug 27 09:59 built_in.c
-rwxr-xr-x 1 vero vero 18040 Aug 27 10:00 hsh
-rw-rw-r-- 1 vero vero  1230 Aug 27 09:59 main.c
-rw-rw-r-- 1 vero vero  1743 Aug 27 09:59 path_functions.c
-rw-rw-r-- 1 vero vero  1012 Aug 27 09:59 shell.h
-rw-rw-r-- 1 vero vero  2503 Aug 27 09:59 simple_shell.c
-rw-rw-r-- 1 vero vero  1337 Aug 27 09:59 string_functions.c
```
## Also can be run in non-interactive mode:
example
```echo “ls -l” | ./shell```
```
$ total 64
-rw-rw-r-- 1 vero vero  1021 Aug 27 09:59 built_in.c
-rwxr-xr-x 1 vero vero 18040 Aug 27 10:00 hsh
-rw-rw-r-- 1 vero vero  1230 Aug 27 09:59 main.c
-rw-rw-r-- 1 vero vero  1743 Aug 27 09:59 path_functions.c
-rwxr-xr-x 1 vero vero 18040 Aug 27 12:23 shell
-rw-rw-r-- 1 vero vero  1012 Aug 27 09:59 shell.h
-rw-rw-r-- 1 vero vero  2503 Aug 27 09:59 simple_shell.c
-rw-rw-r-- 1 vero vero  1337 Aug 27 09:59 string_functions.c
```
## Files

for more information about functios see the [man page](man_1_simple_shell)

## Team

Veronica Mejia | [Twitter](https://twitter.com/veromejia86)

Sergio Murillo| [Twitter](https://twitter.com/SergioL08946225)
