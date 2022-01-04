/*
Write a function template for
selection sort that inputs, sorts
and outputs an integer array
and a float array
*/

#include<iostream>
#include<string>
using namespace std;

template<class TemArray>
class SelectionSort{

    TemArray *array;
    int size;

    public :

    SelectionSort(int size){
        this->size = size;
    }
    
    void getArray(){
    
        for(int i=0; i<size; i++)
            cin>>this->array[i];
        
    }

    void sortArray(){
        int i, j, minIndex;

        for (i = 0; i < this->size-1; i++){

            minIndex = i;
            for (j = i+1; j < size; j++)
            if (this->array[j] < this->array[minIndex])
                minIndex = j;
            
            swap(this->array[minIndex], this->array[i]);
        }
    }

    void printArray(){
        for(int i=0; i<size; i++)
            cout<<"\t"<<array[i];
    }

};

int main(){ 

    int choice,size;

    cout<<"\nEnter the Size of Array : ";
    cin>>size;
    cout<<"\n1->Integer \n2-Float \n3->Character";
    cout<<"\nSelect Data Type to Perform Selection Sort Using Function Template : ";
    cin>>choice;

    switch (choice){
    
    case 1:{
        SelectionSort<int> sInt(size);
        sInt.getArray();
        sInt.sortArray();
        sInt.printArray();
        break;
    }
    
    case 2:{
        SelectionSort<float> sFloat(size);
        sFloat.getArray();
        sFloat.sortArray();
        sFloat.printArray();
        break;
    }

    case 3:{
        SelectionSort<char> sChar(size);
        sChar.getArray();
        sChar.sortArray();
        sChar.printArray();
        break;
    }
    
    }

    return 0;
}
