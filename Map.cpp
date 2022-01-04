/*
Write a program in C++ to use
map associative container. The
keys will be the names of
states and the values will be
the populations of the states.
When the program runs, the
8 user is prompted to type the
name of a state. The program
then looks in the map, using
the state name as an index and
returns the population of the
state.

*/



#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;

map<string,int> populationMap;

void initMap(){
    populationMap.insert(pair<string,int>("Maharashta",23));
    populationMap.insert(pair<string,int>("Goa",3));
    populationMap.insert(pair<string,int>("Delhi",22));
    populationMap.insert(pair<string,int>("Punjab",13));
    populationMap.insert(pair<string,int>("Kerala",13));
    populationMap.insert(pair<string,int>("Karnataka",20));
}

void showAll(){

    map<string,int> :: iterator i;
    for(i = populationMap.begin(); i != populationMap.end(); ++i){
        cout<<endl<<i->first;
        cout<<"\t"<<i->second;
    }

}
void search(){

    string state;
    map<string,int> :: iterator i;

    cout<<"\nEnter State Name to Find its Population : ";
    cin>>state;

    i = populationMap.find(state);
    
    if(i != populationMap.end())
        cout<<endl<<"Population of "<<state<<" is :"<<i->second<<" Millions";
    else
        cout<<"\nDate not found for entered state name : ";

}

void update(){
    string state;
    cout<<"\nEnter State to Update its Population : ";
    cin>>state;

    map<string,int> :: iterator i = populationMap.find(state);

    if(i != populationMap.end())   {
        int newPopulation;
        cout<<"\nEnter New Population : ";
        cin>>newPopulation;
        i->second = newPopulation;
    }
    else
        cout<<"\nEntered State not Found Please try Again..!";
    
}

void deleteS(){

    string state;
   
    cout<<"\nEnter State to Delete : ";
    cin>>state;

    map<string,int> :: iterator i = populationMap.find(state);

    if(i != populationMap.end())   {
       populationMap.erase(i);
       cout<<"'\nDeletion Completed ";
    }
    else
        cout<<"\nEntered State Not found Please try Again..!";

}

int main(){

    initMap();
    showAll();
    search();
    update();
    showAll();
    deleteS();
    showAll();
    return 0;
    
    

   
}
