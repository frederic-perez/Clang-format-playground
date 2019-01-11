## Clang-format-playground

### Evolving the configuration file `.clang-format`

I simply do this loop:
- Edit `.clang-format` to revise or extend it
- Use it: `$ clang-format.exe before.cpp >after.cpp`
- Verify the expected differences between `before.cpp` and `after.cpp` (for example, with `p4merge`)

### Reference material

Some interesting URLs:

- [ClangFormat](https://clang.llvm.org/docs/ClangFormat.html) documentation, and its [Style Options](https://clang.llvm.org/docs/ClangFormatStyleOptions.html)
- [clangformat.com](https://clangformat.com/), an interactive guide and builder

Material cited within `.clang-format`, sorted alphabetically by reference label:

- [Koenig-1999] Andrew Koenig, Barbara E. Moo, _Ruminations on C++: a decade of programming insight and experience_, AT&T, 1999
- [Martin-2009] Robert C. Martin, _Clean Code - A Handbook of Agile Software Craftsmanship_, Prentice Hall, 2009
- [Stroustrup-2013] Bjarne Stroustrup, _The C++ Programming Language, Fourth Edition_, Addison-Wesley, 2013
- [Sutter-2001] Herb Sutter, _More Exceptional C++_, Addison-Wesley, 2001
