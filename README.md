# colorPrint
### 1. About the library
The colorPrint library's aim is to make colorful print on a bash simpler.
The library is composed of few files :
* colorPrint.h
* colorPrint.c
* testFile.c

colorPrint.h and colorPrint.c implemented the functions of the library and testFile.c offer an exemple of what we can do with colorPrint.
There is also a Doxygen configuration file to generate the documentation of the library.

### 2. Compiling
A Makefile is ready to use in the repository to make compilation of the testFile and generate the documentation.
Type this to compile the exemple and generate the documentation with the latex file:
```
make
```

In order to just compile the testFile executable, type this :
```
make testFile
```

In order to generate the documentation, type this :
```
make dox
```

In order to generate the latex rapport, type this :
```
make latex
```
