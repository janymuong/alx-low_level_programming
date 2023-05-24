# Makefiles
> `c`, `GNU make`  

![Make-stuff](./giphy-2.gif)

A Makefile is a file that contains instructions for building and/or managing a software project. Makefiles specify dependencies between different parts of the project and define rules for how to build the project. In `C`, specifically, it's used to automate the compilation process.

---
## Basic Functionaly
- Automates the compilation and building process of C projects.
- Handles dependencies between source files and object files efficiently.
- Supports incremental compilation, recompiling only the necessary files when changes occur.
- Customizable and flexible based on the specific needs of the project.
- Reduces the effort required for manual compilation and linking.

Read more about [`GNU make`](https://www.gnu.org/software/make/) for reference, and usage with a `C` compiler (e.g., `GCC`) installed on the system.

## Usage - GNU Make utility

```bash
# build a project
make
```
> this will execute the rules defined in the Makefile, compiling the source files and producing the executable. iff the build is successful, the compiled executable will be created in the project directory.

To do specific routines the project, run **make** targeting a specific directive eg remove the object files and the executable:

```bash
make clean
```
> this rule will remove the compiled object files and the executable from the project directory.

## Customizations
> **Note**  
> sample customization of **Make**:

- you can modify the `CC` variable in the Makefile to specify the C compiler to be used.
- can adjust the `CFLAGS` variable in the Makefile to add or modify compiler flags.
- you can update the `LDFLAGS` variable in the Makefile to include any necessary linker flags.
- customize the `TARGET` variable in the Makefile to set the desired name for the final executable.
- adjust the SRCS variable in the Makefile to specify the source files used in the project.
- modify the rules in the Makefile to add additional build steps or handle project-specific requirements.
