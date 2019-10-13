#  C Compiler
This is a miny compiler for the C language, written in C++, using flex as a compiler for the lexical syntax and bison as a compiler for the grammar.

## Prerequisites
Steps to install flex: - 
```
sudo apt-get update
sudo apt-get install flex
```

Steps to install bison: - 

```
sudo apt-get install bison
```

### Instructions to build

```
make
```

### Instructions to run
To test with the existing testfiles 
```
make run
```
And to test with a custom testfile

```
./a.out < $PATH_TO_TESTFILE/testfile.c > $PATH_TO_OUTFILE/outputfile.out
```
### Cleanup
```
make clean
```

#### Drawbacks

Since this is a subset of the C compiler, this does not support many of the functionalities of the C compiler.
Example: - 
1) Programmer defined structs are not allowed.
2) Varibles have to be declared before their usage.
3) Floats and Doubles are treated as same datatypes.
4) Pointer to pointers cannot be represented as ** x etc.
5) Typecasting is limited to int to double, int to char and vice-versa. And any other typecasting has to be done indirectly by introducing temporary variables.