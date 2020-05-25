#include <iostream>

bool GetPrimeArray(size_t top, size_t num, int array[]) { //array是个地址

    std::cout << array[2] << std::endl;
    return num == 0;
}


int main() {
    
    int a = 1000;
    int b = 20;
    char *p1 = reinterpret_cast<char*>(&a);
    char *p2 = reinterpret_cast<char*>(&b);
    int num = p1 - p2;
    std::cout << num << std::endl;
    int row_mods[100];
    for(int i = 0; i < 100;i ++){
        row_mods[i] = i;
    }
    GetPrimeArray(3,3,&row_mods[9]);
    std::cout << sizeof(row_mods)/ sizeof(row_mods[0]) << std::endl;
}
