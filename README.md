## Clang-format-playground

### Evolving the configuration file `.clang-format`

I simply do this loop:
- Edit `.clang-format` to revise or extend it
- Use it: `$ clang-format.exe before.cpp >after.cpp`
- Verify the expected differences between `before.cpp` and `after.cpp` (for example, with `p4merge`)

### Reference material

Some interesting URLs:
- [ClangFormat](https://clang.llvm.org/docs/ClangFormat.html) documentation
- [clangformat.com](https://clangformat.com/), an interactive guide and builder
