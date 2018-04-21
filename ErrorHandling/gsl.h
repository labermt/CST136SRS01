//
// Created by Thea Van Kessel on 4/20/18.
//

#ifndef ERRORHANDLING_GSL_H
#define ERRORHANDLING_GSL_H

struct narrowing_error : public std::exception {};

// narrow_cast(): a searchable way to do narrowing casts of values
template<class T, class U>
inline constexpr T narrow_cast(U u) noexcept
{
    return static_cast<T>(u);
}

namespace details
{
    template<class T, class U>
    struct is_same_signedness : public std::integral_constant<bool, std::is_signed<T>::value == std::is_signed<U>::value>
    {};
}

// narrow() : a checked version of narrow_cast() that throws if the cast changed the value
template<class T, class U>
inline T narrow(U u)
{
    T t = narrow_cast<T>(u);
    if (static_cast<U>(t) != u)
        throw narrowing_error();
    if (!details::is_same_signedness<T, U>::value && ((t < T{}) != (u < U{})))
        throw narrowing_error();
    return t;
}



#endif //ERRORHANDLING_GSL_H
