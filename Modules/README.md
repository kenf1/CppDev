## C++20 Modules

Modules was introduced in C++20. More info about it [here](https://en.cppreference.com/w/cpp/language/modules).

Note: The clang compiler version bundled with macOS does not support Modules. However, the homebrew version does.

- [ref](https://stackoverflow.com/questions/70168181/apple-clang-13-c20-module-support-missing)

---

### Setup clang module support

1. Install llvm

```
brew install llvm
```

2. Add llvm to PATH

```
brew info llvm
echo 'export PATH={llvm_PATH}' >> ~/.zshrc
```

`llvm_PATH` is copied from `brew info llvm` output

3. Confirm

```
clang --version
```
