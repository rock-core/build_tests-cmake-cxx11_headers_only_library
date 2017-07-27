rock_library(cxx11_headers_only_library
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(cxx11_headers_only_library_bin Main.cpp
    DEPS cxx11_headers_only_library)

