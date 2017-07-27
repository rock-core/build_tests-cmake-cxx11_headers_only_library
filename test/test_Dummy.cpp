#include <boost/test/unit_test.hpp>
#include <cxx11_headers_only_library/Dummy.hpp>

using namespace cxx11_headers_only_library;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    cxx11_headers_only_library::DummyClass dummy;
    dummy.welcome();
}
