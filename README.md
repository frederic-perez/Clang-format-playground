## Clang-format-playground

### Why do we care for code formatting?

Clang-format is a tool to automatically format C++ code (and other programming languages too). We favor its use (or the use of any other tool, for that matter), basically because of the "broken windows." Pragmatic Andrew Hunt Dave and Thomas used the broken windows metaphor about bad code, which leads to software rot: _When disorder increases in software, programmers call it "software rot."_ [Hunt-1999, Ch. 1, Tip 4] Here we tackle "just" formatting--see [Martin-2009, Ch. 5] for reasons about the importance of this subject.

### Evolving the configuration file `.clang-format`

I simply do this loop:
- Edit `.clang-format` to revise or extend it
- Use it: `$ clang-format.exe before.cpp >after.cpp`
- Verify the expected differences between `before.cpp` and `after.cpp` (for example, with `p4merge`)

### Reference material

Some interesting URLs:

- [ClangFormat](https://clang.llvm.org/docs/ClangFormat.html) documentation, and its [Style Options](https://clang.llvm.org/docs/ClangFormatStyleOptions.html)
- [clangformat.com](https://clangformat.com/), an interactive guide and builder

Material cited within `.clang-format` (or within this README file), sorted alphabetically by reference label:

- [Dewhurst-2002] Stephen C. Dewhurst, _C++ Gotchas: Avoiding Common Problems in Coding and Design_, Addison-Wesley, 2002
- [Hunt-1999] Andrew Hunt, David Thomas, _The Pragmatic Programmer: From Journeyman to Master_, Addison-Wesley, 1999
- [Koenig-1999] Andrew Koenig, Barbara E. Moo, _Ruminations on C++: a decade of programming insight and experience_, AT&T, 1999
- [Martin-2009] Robert C. Martin, _Clean Code - A Handbook of Agile Software Craftsmanship_, Prentice Hall, 2009
- [Meyers-2014] Scott Meyers, _Effective Modern C++: 42 Specific Ways to Improve Your Use of C++11 and C++14_, First Edition, O’Reilly, 2014
- [Stroustrup-2013] Bjarne Stroustrup, _The C++ Programming Language, Fourth Edition_, Addison-Wesley, 2013
- [Sutter-2001] Herb Sutter, _More Exceptional C++_, Addison-Wesley, 2001
- [Telles-2005] Matthew Telles, _C++ Timesaving Techniques For Dummies_, Wiley Publishing, Inc., 2005
