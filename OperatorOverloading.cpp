/*
Implement a class Complex
which represents the Complex
Number data type. Implement
the following operations:
1. Constructor
2. Overloaded operator+
3. Overloaded operator*
4. Overloaded << and >>
*/

#include<iostream>
#include<string>
using namespace std;

class Complex{

    float real,imaginary;

    public :
    Complex(){
        this->real = 0;
        this->imaginary = 0;
    }
   
    Complex operator + (Complex complex){
        Complex cAdd;
        cAdd.real = this->real + complex.real;
        cAdd.imaginary = this->imaginary + complex.imaginary;
        return cAdd;
    }

    Complex operator * (Complex complex){
        Complex cMul;
        cMul.real = this->real * complex.real;
        cMul.imaginary = this->imaginary * complex.imaginary;
        return cMul;
    } 

    ostream &operator << (ostream &output){
        output<<this->real<<"  ";
        output<<imaginary<<"i"<<"\n";
        return output;  
    }

    istream &operator >>(istream &input){
        cout<<"Enter Real Part : ";
        input>>this->real;
        cout<<"Enter Imaginary Part : ";
        input>>this->imaginary;
        return input;
    }

};

int main(){

    Complex c1,c2,cAddition,cMultiplication;;

    cout<<"For Object 1 :\n";
    c1.operator>>(cin);

    cout<<"\nFor Operator 2 : \n";
    c2.operator>>(cin);

    cAddition = c1+c2;
    cMultiplication = c1*c2;

    cout<<"\nAddition Is : ";
    cAddition.operator<<(cout);

    cout<<"\nMultiplication is : ";
    cMultiplication.operator<<(cout);

    return 0;
}
