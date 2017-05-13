
#include <iostream>
#include <string>
#include <fstream>
#include "Customer.h"

using namespace std;

void Customer::Agreements(){
    cout << "Select a category:";
   ifstream f("file.txt");
   for (int i = 0; i < 10; ++i)
    {
   int  v;
    f >> v;
    cout << v << endl;
   }
}
