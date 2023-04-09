# C - Hello World

```bash
C;
```


---
## `appendix: general`
`C` language compilation syntax;
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 soucefile1.c soucefile2.c soucefile-N.c -o outputfile
$
```

In `gcc` options...

- `-Wall` - this option enables all warning messages.
- `-pedantic` - this option tells the compiler to enforce strict ANSI C standards.
- `-Werror` - this option treats all warnings as errors, causing the compilation to fail if any warning message is generated.
- `-Wextra` - this option enables some extra warning messages that are not covered by the [-Wall](-Wall) option.
- `-std=gnu89` - this option sets the C language standard to be used during compilation. In this case, it is set to the GNU dialect of the C language, which is based on the C89/C90 standard with some extensions.
- `soucefile1.c` `soucefile2.c` `soucefile-N.c` - these are the source code files that are being compiled.
- `-o outputfile` - this option specifies the name of the output **executable** file. In this case, it is set to `outputfile`.
