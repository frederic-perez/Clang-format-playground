#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <numeric>

#include <lib/bar.h>
#include <lib/foo.h>

#include "aux-raw-compiler-warnings-off++begin.h"
// clang-format off

  #include <boost/math/constants/constants.hpp>

// clang-format on
#include "aux-raw-compiler-warnings-off++end.h"

#include "euclidean.h"
#include "aux-spy.h"
#include "aux-raw.h"

#if FOO
#  if BAR
#    include <foo>
#  endif
#endif

#define A \
  int aaaa; \
  int b; \
  int dddddddddd;

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
  nine,
  ten,
  eleven,
  twelve,
  thirteen,
  fourteen
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
  foo_bar(
    aaaaaaaaaaaaaaaaaaaa,
    aaaaaaaaaaaaaaaaaaaa,
    aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa);
  foo_bar(
    aaaaaaaaaaaaaaaaaaaa,
    aaaaaaaaaaaaaaaaaaaa,
    aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa);
  foo_bar(
    aaaaaaaaaaaaaaaaaaaa,
    aaaaaaaaaaaaaaaaaaaa,
    aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa);
}

void f(
  int aaaaaaaaaaaaaaaaaaaa,
  int aaaaaaaaaaaaaaaaaaaa,
  int aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa)
{}

void f(
  int aaaaaaaaaaaaaaaaaaaa,
  int aaaaaaaaaaaaaaaaaaaa,
  int aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa)
{}

void f(
  int aaaaaaaaaaaaaaaaaaaa,
  int aaaaaaaaaaaaaaaaaaaa,
  int aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa)
{}

void f(
  int aaaaaaaaaaaaaaaaaaaa,
  int aaaaaaaaaaaaaaaaaaaa,
  int aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa)
{}

some_long_function(
  aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa_argument_1,
  aaaaaaaaaaaaaaaaaaaa_argument_2,
  aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa_argument_3);

some_long_function(
  aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa_argument_1,
  aaaaaaaaaaaaaaaaaaaa_argument_2,
  aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa_argument_3);

some_long_function(
  aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa_argument_1,
  aaaaaaaaaaaaaaaaaaaa_argument_2,
  aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa_argument_3);

LooooooooooongType looooooooooooooooooooooooooooooooooooooooooongVariable =
  someLoooooooooooooooooooooooooooooooooongFunction();

LooooooooooongType looooooooooooooooooooooooooooooooooooooooooongVariable2 =
  someLoooooooooooooooooooooooooooooooooongFunction();

bool value = aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
      + aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
    == aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
  && aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
    > ccccccccccccccccccccccccccccccccccccccccc;

const bool foo = veryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryLongDescription
  ? firstValue
  : SecondValueVeryVeryVeryVeryLong;

const bool foo = veryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryLongDescription
  ? firstValue
  : SecondValueVeryVeryVeryVeryLong;

const bool foo = bar ? baz : baz + 1;
const bool fooVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryLongConstant =
  bar ? baz : baz + 1;

ConstructorOfAClass::ConstructorOfAClass(int days)
: initializer_1{days},
  initializer_2{},
  and_yet_another_initializer{},
  and_a_second_to_last_initializer{},
  and_a_final_initializer{}
{}

Ctor::Ctor(int days) : initializer_1{days}, initializer_2{} {}

ConstructorOfAClass::ConstructorOfAClass(int days) : initializer_1{days}, initializer_2{} {}

ConstructorOfAClass::ConstructorOfAClass(int days)
: initializer_1{days},
  initializer_2{},
  and_yet_another_initializer{},
  and_a_second_to_last_initializer{},
  and_a_final_initializer{}
{}

ConstructorOfAClass::ConstructorOfAClass(int days)
: initializer_1{days},
  initializer_2{},
  and_yet_another_initializer{},
  and_a_second_to_last_initializer{},
  and_a_final_initializer{}
{
  foo();
}

ConstructorOfAClass::ConstructorOfAClass(int days)
: initializer1{days},
  initializer2{},
  and_yet_another_initializer{},
  and_a_second_to_last_initializer{},
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

int foo = c;
int foobar = c;
int foobarbaz = c;

int foo = c;
int foobar = c;
int foobarbaz = c;

int aaaa = 12;
float b = 23;
std::string ccc = 23;

int aaaa = 12;
float b = 23;
std::string ccc = 23;

static_cast<int>(arg);
static_cast<int>(arg);
std::function<void(int)> fct;
std::function<void(int)> fct;

if (foo) {
  bar();
} else {
  baz();
}

int aaa = bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb
  + cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc;

int aaa = bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb
  + cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc;

int aaa = bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb
  + cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc;

if (a) {
  return;
}

if (a) {
  return;
}
