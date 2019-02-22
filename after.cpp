#include <cassert>
#include <iostream>

#include <lib/bar.h>
#include <lib/foo.h>

class empty_one {};
class empty_two {};
class empty_three {};

class Foo {
public:
  void do_something(); // a 1st trailing comment
  void do_something_else(); // a 2nd trailing comment
  void do_something_totally_different(); // a 3rd trailing comment
private:
  void do_something_privately(); // a 4th trailing comment
  int get_one() const { return 1; }
  int get_two() const { return 2; }
};

enum class Color : uint8_t { red, green, blue };

enum class Digit : uint8_t {
  one,
  two,
  three,
  four,
  five,
  six,
  seven,
  eight,
  nine
};

int give_me_a_zero()
{
  const int i = 0; // two empty lines below

  if (foo()) {
  } else {
  }

  if (bar()) {
  } else {
  }

  if (foo()) {
  } else {
  }

  if (foo()) {
  } else {
  }

  for (int i = 0; i < 10; ++i) {
  }

  for (int i = 0; i < 10; ++i) {
  }

  return i;
}

namespace foo {

namespace bar {

constexpr int one = 1;

} // namespace bar

} // namespace foo

namespace baz {}

void case_labels(size_t i)
{
  switch (i) {
  case 0:
  case 1:
    give_me_a_zero();
    break;
  case 2:
    give_me_a_zero();
    break;
  default:
    break;
  }
}

struct foo {
  int x;
};

struct bar {
  int x;
};

union foo {
  int x;
};

union foo {
  int x;
};

union foo {
  int x;
};

extern "C"
{
  int foo();
}

extern "C"
{
  int foo();
}

void foo
{
  try {
    foo();
  } catch (...) {
  }

  try {
    foo();
  } catch (...) {
  }
}

void f() {}

void f() {}

void f(

)
{}

void foo_bar()
{
  foo_bar(aaaaaaaaaaaaaaaaaaaa, aaaaaaaaaaaaaaaaaaaa);
  foo_bar(aaaaaaaaaaaaaaaaaaaa,
          aaaaaaaaaaaaaaaaaaaa,
          aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa);
  foo_bar(aaaaaaaaaaaaaaaaaaaa,
          aaaaaaaaaaaaaaaaaaaa,
          aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa);
  foo_bar(aaaaaaaaaaaaaaaaaaaa,
          aaaaaaaaaaaaaaaaaaaa,
          aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa);
}

void f(int aaaaaaaaaaaaaaaaaaaa,
       int aaaaaaaaaaaaaaaaaaaa,
       int aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa)
{}

void f(int aaaaaaaaaaaaaaaaaaaa,
       int aaaaaaaaaaaaaaaaaaaa,
       int aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa)
{}

void f(int aaaaaaaaaaaaaaaaaaaa,
       int aaaaaaaaaaaaaaaaaaaa,
       int aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa)
{}

void f(int aaaaaaaaaaaaaaaaaaaa,
       int aaaaaaaaaaaaaaaaaaaa,
       int aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa)
{}

LooooooooooongType loooooooooooooooooooooongVariable =
  someLooooooooooooooooongFunction();

LooooooooooongType loooooooooooooooooooooongVariable2 =
  someLooooooooooooooooongFunction();

bool value = aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
                 + aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
               == aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
             && aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
                  > ccccccccccccccccccccccccccccccccccccccccc;

const bool foo = veryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryLongDescription
                   ? firstValue
                   : SecondValueVeryVeryVeryVeryLong;

const bool foo = veryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryLongDescription
                   ? firstValue
                   : SecondValueVeryVeryVeryVeryLong;

const bool foo = bar ? baz : baz + 1;
const bool fooveryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryLongConstant =
  bar ? baz : baz + 1;

ConstructorOfAClass::ConstructorOfAClass(int days)
: initializer_1{days},
  initializer_2{},
  and_yet_another_initializer{},
  and_a_final_initializer{}
{}

Ctor::Ctor(int days) : initializer_1{days}, initializer_2{} {}

ConstructorOfAClass::ConstructorOfAClass(int days)
: initializer_1{days}, initializer_2{}
{}

ConstructorOfAClass::ConstructorOfAClass(int days)
: initializer_1{days},
  initializer_2{},
  and_yet_another_initializer{},
  and_a_final_initializer{}
{}

ConstructorOfAClass::ConstructorOfAClass(int days)
: initializer_1{days},
  initializer_2{},
  and_yet_another_initializer{},
  and_a_final_initializer{}
{
  foo();
}

ConstructorOfAClass::ConstructorOfAClass(int days)
: initializer1{days},
  initializer2{},
  and_yet_another_initializer{},
  and_a_final_initializer{}
{}

int i = // VeryVeryVeryVeryVeryLongComment
  longFunction( // Again a long comment
    arg);

vector<int> x{1, 2, 3, 4};
vector<T> x{{}, {}, {}, {}};
f(MyMap[{composite, key}]);
new int[3]{1, 2, 3};

vector<int> x{1, 2, 3, 4};
vector<T> x{{}, {}, {}, {}};
f(MyMap[{composite, key}]);
new int[3]{1, 2, 3};

int* a;
int* a;
int* a;
int& b = c;
int& b = c;
int& b = c;
