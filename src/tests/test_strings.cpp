#define BOOST_TEST_MAIN
#define BOOST_TEST_MODULE "Strings tests"

#include <boost/test/unit_test.hpp>
#include <strings.h>

BOOST_AUTO_TEST_CASE(strings_test)
{
    BOOST_CHECK(strings::sprintf("%d - %d", 1, 2) == "1 - 2");
}
