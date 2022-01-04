/*
Write C++ program using STL
for sorting and searching user
defined records such as
7
personal records (Name, DOB,
Telephone number etc) using
vector container

*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

class Person {
    
    public:
        int id;
        string name;
        string dOB;
        string telephoneNo;
    

    bool operator==(const Person& person)                                                  
    {
        if(this->id == person.id)  
            return true;
        return false;
    }

    bool operator<(const Person& person)
    {
        if(this->id < person.id)    
            return true;
        return false;
    }
};

vector<Person> pV;

bool compare(const Person &p1, const Person &p2){
   return p1.id < p2.id;
}


 void insert(){

        Person person;

        cout<<"nEnter Id : ";
        cin>>person.id;

        cout<<"\nEnter Name : ";
        cin>>person.name;

        cout<<"\nEnter Date of Birth : ";
        cin>>person.dOB;

        cout<<"\nEnter Telephone No : ";
        cin>>person.telephoneNo;

        pV.push_back(person);

}

void search(){

    Person p;
    cout<<"\nEnter Person Id to Search : ";
    cin>>p.id;

    vector<Person>::iterator i ;

    i = find(pV.begin(),pV.end(),p);
    if(i != pV.end()){
        cout<<"\nRecord Found ";
    }
    else 
        cout<<"'\nRecord Not Found";
    
}

void deleteP(){

    Person p;
    cout<<"\nEnter Person Id to Delete : ";
    cin>>p.id;

    vector<Person>::iterator i;

    i = find(pV.begin(),pV.end(),p);

    if(i == pV.end())
        cout<<"\nRecord Not found Cannot Perform Deletion Operation ";
    
    else {
        pV.erase(i);
        cout<<"\nnRecord Deleted..!\n";
    }
}

void sort(){
    sort(pV.begin(),pV.end(),compare);
}
void displayPerson(Person &person){
    cout<<"\nId : "<<person.id;
    cout<<"\nName : "<<person.name;
    cout<<"\nDate of Birth : "<<person.dOB;
    cout<<"\nTelephone No : "<<person.telephoneNo;
}

void displayVector(){
    for_each(pV.begin(),pV.end(),displayPerson);
}

int main(){

    insert();
    insert();
    displayVector();
    sort();
    displayVector();
    return 0;

}
