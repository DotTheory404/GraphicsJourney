// Make sure that assert triggers even if we compile in release mode
#undef NDEBUG

#include <cassert> // for assert
#include <iostream>

// Non-optimized version
bool isPrimeTwo(int x)
{
    if (x <= 1) // if x is negative, 0, or 1 then the number is not prime
        return false;

    for (int test{ 2 }; test < x; ++test)
    {
        if (x % test == 0) // if x is evenly divisible
            return false;  // then this number isn't prime
    }

    return true; // if we didn't find any divisors, then x must be prime
}

//int main()
//{
//    assert(!isPrimeTwo(0));
//    assert(!isPrimeTwo(1));
//    assert(isPrimeTwo(2));
//    assert(isPrimeTwo(3));
//    assert(!isPrimeTwo(4));
//    assert(isPrimeTwo(5));
//    assert(isPrimeTwo(7));
//    assert(!isPrimeTwo(9));
//    //assert(isPrime(11));
//    //assert(isPrime(13));
//    //assert(!isPrime(15));
//    //assert(!isPrime(16));
//    //assert(isPrime(17));
//    //assert(isPrime(19));
//    //assert(isPrime(97));
//    //assert(!isPrime(99));
//    //assert(isPrime(13417));
//
//    std::cout << "Success!\n";
//
//    return 0;
//}