class empty_one {
};
class empty_two {};
class empty_three
{

};

class Foo {
    public:
        void do_something();                  // a 1st trailing comment
        void do_something_else();             // a 2nd trailing comment
        void do_something_totally_different();// a 3rd trailing comment
    private:
        void do_something_privately();        // a 4th trailing comment
};

int give_me_a_zero() {
    const int i = 0; // two empty lines below


    return i;
}

namespace foo {

    namespace bar {

        constexpr int one = 1;

    } // namespace wrong name

}

void case_labels(size_t i) {
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
