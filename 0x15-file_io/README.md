# File I/O

In Unix a file descriptor (FD) is a process-unique identifier (handle) for a file or other ```input/output``` resource, such as a pipe or network socket.

File descriptors typically have non-negative integer values, with negative values being reserved to indicate "no value" or error conditions.
File descriptors are a part of the POSIX API.
This directory partly covers these file descriptors:

```bash
STDIN_FILENO(integer value 0) - stdin
STDOUT_FILENO(integer value 1) - stdout
STDERR_FILENO(integer value 2) - stderr
```

These could be accessed in a program in ```<unistd.h>``` and ```<stdio.h>```
To perform input or output, the process passes the file descriptor to the kernel through a ```syscall```, and the kernel will access the file on behalf of the process. The process does not have direct access to the file or inode tables.

sample syscalls covered: ```read()```, ```write()```, ```open()```, ```dprintf()```, ```close()```
