## Setup C++ & Compiler

Install compiler:

- gcc/g++
- clang
- mingw64 (Windows only)

Install `C/C++` extension: [extension link](ms-vscode.cpptools)

Set C++ standard:

```
"C_Cpp.default.cppStandard": "c++20"
```

In `code-runner.executorMap`, replace "cpp" line with: 

```
"cpp": "cd $dir && g++ -std=c++20 $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
```

---

### Compile

To compile using different C++ standard:

```
g++ -std=c++{VERSION} {FILENAME}.cpp -o {EXECUTABLE_NAME}
```

- replace `{VERSION}`, `{FILENAME}`, `{EXECUTABLE_NAME}`
- replace `g++` with `clang++` for Clang compiler

---

### Extensions

- C/C++
- Code Runner
- CodeLLDB

Optional:

- CMake
- CMake Tools
