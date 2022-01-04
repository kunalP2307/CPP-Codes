/*
Imagine a publishing company
which does marketing for book
and audio cassette versions.
Create a class publication that
stores the title (a string) and
price (type float) of
publications. From this class
derive two classes: book which
adds a page count (type int)
and tape which adds a playing
time in minutes (type float).
Write a program that
instantiates the book and tape
class, allows user to enter data
and displays the data members.
If an exception is caught,
replace all the data member
values with zero values.
*/



#include<iostream>
#include<string>
using namespace std;

class Publication {

    protected:

    string title;
    float price;
    
    public:

    Publication(){
        this->title = "noTitle";
        this->price = 0;
    }

    Publication(string title,float price){
        this->title = title;;
        this->price = price;
    }

    void getDetails(){
        
        cout<<"\nEnter Book Title : ";
        cin>>this->title;
        cout<<"Enter Book Pirce : ";
        cin>>this->price;

    }

    void showDetails(){
        
        cout<<"\nBook Details :";
        cout<<"\n--------------";
        cout<<"\nBook Title : "<<title;
        cout<<"\nBook Price : "<<price;

    }
};

class Book :public Publication{

    protected:
    
    int pageCount;

    public:

    Book(){
        pageCount = 0;
    }

    Book(string title,float price,int pageCount) : Publication(title,price){
        pageCount = this->pageCount;
    }

    void getDetails(){
        Publication :: getDetails();
        cout<<"\nEnter No of Pages of Book : ";
        cin>>this->pageCount;
    }

    void showDetails(){
        Publication :: showDetails();
        cout<<"\nNo of Pages : "<<this->pageCount;
    } 
};

class Tape : public Publication{

    protected:
    float tape;

    public:
    Tape(){
        this->tape = 0;
    }

    Tape(string title,float price,float tape):Publication(title,price){
        this->tape = tape;
    }
    void getDetails(){
        Publication :: getDetails();
        cout<<"\nEnter Tape Time : ";
        cin>>this->tape;
    }

    void showDetails(){
        Publication :: showDetails();
        cout<<"\nTape Time : "<<this->tape;
    }

};


int main(){



    return 0;
}
