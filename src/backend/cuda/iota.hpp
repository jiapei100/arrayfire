#include <af/array.h>
#include <Array.hpp>

namespace cuda
{
    template<typename T>
    Array<T> *iota(const dim4& dim, const unsigned rep);
}

