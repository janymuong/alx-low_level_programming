## C - Dynamic Libraries

> Dynamic Linking: 		  
> A dynamic(shared) library culminates in a lightweight executable, since linking happens at runtime. Because it resolves references during runtime, it does take more time for execution. Its inherent modularity is a powerful feature for developing, though.

You can create a shared library like this in command line:
```bash
gcc -Wall -Werror -Wextra -pedantic -shared -Wl,-soname,libdynamic.so -o libdynamic.so -fPIC *.c
```
> ^ creates a dynamic library from `C` source files in the working directory.


This git directory also indirectly(per user's system) covers usage for the commands: `ldd`, `nm`, `ldconfig`, and the environment variable `$LD_LIBRARY_PATH`, as well as usage of the 'created' library.

Compare with/DIFF - [C - Static Libraries](../0x09-static_libraries/).

---
### `appendix`   		
In `gcc options`:

* `-shared`: specifies that a shared library (i.e., a dynamic link library) should be created.
* `-Wl,-soname,libname`: passes the option -soname `libname` to the linker, which specifies the name of the shared object file that will be created.
* `-fPIC`: generates position-independent code, which is required for creating shared libraries.
