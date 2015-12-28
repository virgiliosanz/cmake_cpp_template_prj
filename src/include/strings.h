#pragma once

#include <string>
#include <iostream>

namespace strings {

template <typename ... Args>
std::string sprintf(const std::string &fmt, Args ... args)
{
    std::size_t size = std::snprintf(nullptr, 0, fmt.c_str(), args ...);
    std::unique_ptr<char[]> buf(new char[size + 1]);
    std::snprintf(buf.get(), size + 1, fmt.c_str(), args ...);
    return std::string(buf.get(), buf.get() + size);
}

}
