#include <iostream>
#include <fstream>
#include "Operator.h"
using namespace std;

void Operator::PriceChange(){

    string x, y;
    cout << "Enter price what you want to change: ";
    cin >> x;
    cout << "What do you want to burn instead: ";
    cin >> y;
      string search_string = x;
      string replace_string = y;
      string inbuf;
      fstream input_file("OrdersEtalon.txt", ios::in);
      ofstream output_file("Category.txt");

      while (!input_file.eof())
      {
          getline(input_file, inbuf);

          int spot = inbuf.find(search_string);
          if(spot >= 0)
          {
             string tmpstring = inbuf.substr(0,spot);
             tmpstring += replace_string;
             tmpstring += inbuf.substr(spot+search_string.length(), inbuf.length());
             inbuf = tmpstring;
          }

          output_file << inbuf << endl;

       }
}
