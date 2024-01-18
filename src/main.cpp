#include <Kmap.h>

int main(){
    Kmap k(7);
    int minterms[] = {1,2,3,10,20,25,32,59,80,81,82,100,105,106,107,108,109,120,121,122,123,124,125,126,127};
    k.map_minterms(minterms, sizeof(minterms)/sizeof(minterms[0]));
    k.print_kmap();
}