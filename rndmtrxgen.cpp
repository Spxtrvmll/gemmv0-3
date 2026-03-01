#include <cstdlib> 
#include <iostream>
#include <fstream>
#include <ctime> 

using namespace std;

int main() 
{  
    srand((unsigned)time(0)); 
    double i;

    ofstream out; 
    out.open("Amtrx.txt"); 

    for(int j = 0; j < 576*576; j+=1)
    {
        i = rand()%100000;
        i = i / 10000;
        out << i << ", "; 
    }
    return 0;
}