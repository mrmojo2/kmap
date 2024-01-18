#include <string>
#include <map>

int get_binary(int );
std::string get_binary_string(int , int );
std::pair<int, int> get_bin_pair(int, int);

inline int get_gray_code(int n)
{
    return n ^ (n >> 1);
}