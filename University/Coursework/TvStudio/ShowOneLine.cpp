#include "ShowOneLine.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int N = 10;

int ShowOneLine::LastLineOrderlist(){
    {
     fstream fin("Orderlist.txt", ios::in | ios::ate | ios::binary); // открываем файл для бинарного чтения, курсор в конце файла

     if (!fin.is_open()) cout << "Error!" << endl;
     else
     {
         int i;
         i = fin.tellg(); // текущая позиция курсора
         if (i == 0) cout << "File empty!\n"; // если файл пуст
         else
         {
            char ch;
            int flag = 0;
            while (true) // находим начало последней строки
            {
                 fin.seekg(-1, ios::cur); // курсор на одну позицию назад от текущей
                 i = fin.tellg(); // текущая позиция курсора
                 if (i == 0) break; // если дошли до начала файла, то строка одна
                 ch = fin.peek();  // читаем символ в позиции курсора
                 if (ch == N && flag != 0) //  если  символ новой строки
                                                     //  и он не последний символ в файле
                 {
                     fin.seekg(1, ios::cur); // на начало последней строки
                     break;
                 }
                 flag = 1;
              }

              string str;
              getline(fin, str); // читаем последнюю строку

              cout <<" "<< str << endl;
          }
     }

     cin.get();
     return 0;
    }
}

int ShowOneLine::intLastLineOrdList(){
fstream fin1("Orders.txt", ios::in | ios::ate | ios::binary); // открываем файл для бинарного чтения, курсор в конце файла

if (!fin1.is_open()) cout << "Error!" << endl;
else
{
    int i;
    i = fin1.tellg(); // текущая позиция курсора
    if (i == 0) cout << "File empty!\n"; // если файл пуст
    else
    {
       char ch;
       int flag = 0;
       while (true) // находим начало последней строки
       {
            fin1.seekg(-1, ios::cur); // курсор на одну позицию назад от текущей
            i = fin1.tellg(); // текущая позиция курсора
            if (i == 0) break; // если дошли до начала файла, то строка одна
            ch = fin1.peek();  // читаем символ в позиции курсора
            if (ch == N && flag != 0) //  если  символ новой строки
                                                //  и он не последний символ в файле
            {
                fin1.seekg(1, ios::cur); // на начало последней строки
                break;
            }
            flag = 1;
         }

         string str;
         getline(fin1, str); // читаем последнюю строку

         cout <<" "<< str << endl;
     }
}

cin.get();
return 0;
}
