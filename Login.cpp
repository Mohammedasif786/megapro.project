#include<iostream>
#include<fstream>
#include "D:\vim\vim90\easy.h"
#define ip out
#define op in
using std::cout; using std::cin; using std::string;
int main(void) {
   std::ofstream ok("Login.txt",std::ios::ip);//?
        cout << "HELLO"
//!Ending point
    ok.close();
    return EXIT_SUCCESS;
}
