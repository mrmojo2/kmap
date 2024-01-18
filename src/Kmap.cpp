#include <cmath>
#include <iostream>

#include <Kmap.h>
#include <utils.h>


//constructor that initializes map member with all values 0
Kmap::Kmap(int n_var){
    num_var = n_var;
    num_row = pow(2, n_var / 2);
    num_col = pow(2, n_var - n_var / 2);

    for(int i=0;i<num_row;++i){
        for(int j=0;j<num_col;++j){
            kmap[{get_binary(i),get_binary(j)}] = 0;
        }
    }
}


//print the map data in tabular kmap form
void Kmap::print_kmap(){
    for (int i = 0; i < num_row; ++i)
    {
        for (int j = 0; j < num_col; ++j)
        {
            std::cout << kmap[{get_binary(get_gray_code(i)),get_binary(get_gray_code(j))}] << " ";
        }
        std::cout << std::endl;
    }
}

//set minterms to 1 in map
void Kmap::map_minterms(int *minterms,int size){
    for(int i=0;i<size;++i){
        kmap[get_bin_pair(minterms[i], num_var)] = 1;
    }
    group_kmap();
}

void Kmap::group_kmap(){
    std::cout<<"grouping kmap"<<std::endl;
}