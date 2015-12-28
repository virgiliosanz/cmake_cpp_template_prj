#define BOOST_TEST_MAIN
#define BOOST_TEST_MODULE "thelibrary tests"
#include <boost/test/unit_test.hpp>

int add(int i, int j) { return i + j; }
// int add(int i, int j) { return 0; }

BOOST_AUTO_TEST_CASE(the_library_test) {

    BOOST_CHECK(add(2, 2) == 4);
    BOOST_REQUIRE(add(2, 2) == 4);

    if (add(2, 2) != 4)
        BOOST_ERROR("Ouch...");

    if (add(2, 2) != 4) throw "Ouch...";

    BOOST_CHECK_MESSAGE(add(2, 2) == 4, "add(..) result" << add(2, 2));
    BOOST_CHECK_EQUAL(add(2, 2), 4);
}
