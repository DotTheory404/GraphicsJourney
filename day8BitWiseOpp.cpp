#include <bitset>
#include <cstdint>
#include <iostream>

//// "rotl" stands for "rotate left"
//std::bitset<4> rotl(std::bitset<4> bits)
//{
//	return (bits << 1) | (bits >> 3);
//}

//int main()
//{
//	std::bitset<4> bits1{ 0b0001 };
//	std::cout << rotl(bits1) << '\n';
//
//	std::bitset<4> bits2{ 0b1001 };
//	std::cout << rotl(bits2) << '\n';
//
//	return 0;
//}

int main()
{
    [[maybe_unused]] constexpr std::uint8_t option_viewed{ 0x01 };
    [[maybe_unused]] constexpr std::uint8_t option_edited{ 0x02 };
    [[maybe_unused]] constexpr std::uint8_t option_favorited{ 0x04 };
    [[maybe_unused]] constexpr std::uint8_t option_shared{ 0x08 };
    [[maybe_unused]] constexpr std::uint8_t option_deleted{ 0x10 };

    std::uint8_t myArticleFlags{ option_favorited };

    myArticleFlags |= option_viewed; //task a
    std::cout << ((static_cast<bool>(myArticleFlags & option_deleted) ) ? "on" : "off") << '\n'; //task b
    if (myArticleFlags & option_deleted)
        std::cout << "Yes\n";
    else
        std::cout << "No\n";

    myArticleFlags &= ~option_favorited; //task c

    std::cout << std::bitset<8>{ myArticleFlags } << '\n';

    return 0;
}