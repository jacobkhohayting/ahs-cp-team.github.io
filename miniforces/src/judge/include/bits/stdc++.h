// Drop-in replacement for GCC's <bits/stdc++.h>, used only when the compiler
// does not ship one (e.g. Apple clang on macOS). Includes every standard header
// that is available, so code written for GCC compiles unchanged.
#ifndef MINIFORCES_BITS_STDCXX_H
#define MINIFORCES_BITS_STDCXX_H

// C
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <cinttypes>
#include <cstdint>
#include <cfenv>
#if __has_include(<cuchar>)
#include <cuchar>
#endif

// C++98/03
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

// C++11
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>

// C++14
#include <shared_mutex>

// C++17
#include <any>
#include <optional>
#include <string_view>
#include <variant>
#if __has_include(<charconv>)
#include <charconv>
#endif
#if __has_include(<filesystem>)
#include <filesystem>
#endif
#if __has_include(<memory_resource>)
#include <memory_resource>
#endif

// C++20 (only when available)
#if __cplusplus > 201703L
#if __has_include(<bit>)
#include <bit>
#endif
#if __has_include(<compare>)
#include <compare>
#endif
#if __has_include(<concepts>)
#include <concepts>
#endif
#if __has_include(<numbers>)
#include <numbers>
#endif
#if __has_include(<ranges>)
#include <ranges>
#endif
#if __has_include(<span>)
#include <span>
#endif
#if __has_include(<version>)
#include <version>
#endif
#endif

#endif
