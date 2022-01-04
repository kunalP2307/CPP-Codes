/*
Write a C++ program that
creates an output file, writes
information to it, closes the
file, open it again as an input
file and read the information
from the file.
*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){

    char data[50];

    fstream file;
    file.open("file.txt",ios::out);

    if(!file.is_open()){
        cout<<"\nUnable to Open File..!";
    }
    else{
        cout<<"Enter Data to Write onto File : ";
        cin.getline(data,50);
        file<<data;
        file.close();
    }

    file.open("file.txt",ios::in);
    if(!file.is_open()){
        cout<<"\nUnable to Open File..!";
    }
    else{
        cout<<"\nContent of File : \n";
        char ch;
        while(!file.eof()){
            file>>ch;
            cout<<ch;
        }
        file.close();
    }

    return 0;
}
