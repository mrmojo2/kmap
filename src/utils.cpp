#include <bitset>
#include <cmath>

#include <utils.h>


int get_binary(int value)
{
    int binaryResult = 0;
    int placeValue = 1;

    while (value > 0)
    {
        int remainder = value % 2;
        binaryResult += remainder * placeValue;
        placeValue *= 10;
        value /= 2;
    }

    return binaryResult;
}

std::string get_binary_string(int value, int size)
{
    std::bitset<32> binaryRepresentation(value);

    std::string binaryString = binaryRepresentation.to_string().substr(32 - size);

    return binaryString;
}

std::pair<int, int> get_bin_pair(int n,int size)
{

    std::bitset<32> binaryRepresentation(n);
    std::string binaryString = binaryRepresentation.to_string();
    
    binaryString = binaryString.substr(binaryString.length() - size);

    std::pair<int, int> pair = {std::stoi(binaryString.substr(0, binaryString.length() / 2)), std::stoi(binaryString.substr(binaryString.length() / 2))};

    return pair;
}


