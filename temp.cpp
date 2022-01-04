#include <iostream>  

using namespace std  ;
int main()  
{  
int size;  // variable declaration  
int *arr;  // creating an array   
cout<<"Enter the size of the array : ";     
cin >> size;    //   
cout<<"\nEnter the element : ";  
for(int i=0;i<size;i++)   // for loop  
{  
cin>>arr[i];  
}  
cout<<"\nThe elements that you have entered are :";  
for(int i=0;i<size;i++)    // for loop  
{  
cout<<arr[i]<<",";  
}  
return 0;  
}  