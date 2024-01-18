#include <map>
#include <string>
#include <vector>

class Kmap
{
    int num_var;
    int num_row;
    int num_col;
    std::map<std::pair<int, int>, int> kmap;
    std::vector<std::vector<std::pair<int,int>>> groups;

    void group_kmap();

public:
    Kmap(int);

    void print_kmap();
    void map_minterms(int *,int);
};