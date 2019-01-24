class empty_one {
};
class empty_two {
};
class empty_three {
};

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

void case_labels(size_t i)
{
  switch (i) {
  case 0:
  case 1:
    do_something();
    break;
  case 2:
    do_something_else();
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
}

union foo {
  int x;
}

union foo {
  int x;
}
