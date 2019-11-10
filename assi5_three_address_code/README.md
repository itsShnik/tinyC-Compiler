#  C Compiler

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

Since this is a subset of the C compiler, this does not support many of the functionalities of the C compiler. Some of which are:

1. Programmer defined structs are not allowed.
2. Varibles have to be declared before their usage.
3. Pointer to pointers cannot be represented as ** x etc.
4. Typecasting is limited to int to float, int to char and vice-versa. And any other typecasting has to be done indirectly by introducing temporary variables.
