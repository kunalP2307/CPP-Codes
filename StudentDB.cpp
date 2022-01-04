/*
Develop an object oriented
program in C++ to create a
database of student
information .Construct the
database with suitable member
1 functions for initializing and
destroying the data viz
constructor, default
constructor, Copy constructor,
destructor, static member
functions
*/

#include<iostream>
#include<string>
using namespace std;

class StudentDB{

    private :
    int rollNo;
    string name;
    string className;
    string division;
    string doB;
    string bloodGroup;
    string address;
    string phoneNo;
    string licenseNo;
    string classTeacher;
    
    public:

    static int studentCount;

    static void showStudentCount(){
        cout<<"\nNumber of Student's Data Entered In to Database : "<<studentCount<<"\n";
    }

    inline void greetStudent(string name){
        cout<<"\nWelcomme :"<<name<<"\n";
    }

    StudentDB(){
        this->rollNo = 76;
        this->name = "Kunal";
        this->className = "AIDS";
        this->division = "A";
        this->doB = "23/07/2002";
        this->bloodGroup = "AB+";
        this->address = "Pimple Saudagar";
        this->phoneNo = "7028991096";
        this->licenseNo = "DL43";    
        this->classTeacher = "Mrs. ABC";
        studentCount++;
    }

    StudentDB(StudentDB *student){

        this->rollNo = student->rollNo;
        this->name = student->name;
        this->className = student->className;
        this->division = student->division;
        this->doB = student->doB;
        this->bloodGroup = student->bloodGroup;
        this->address = student->address;
        this->phoneNo = student->phoneNo;
        this->licenseNo = student->licenseNo;
        this->classTeacher = "Mrs. ABC";
        studentCount++;

    }

    StudentDB( int rollNo,string name,string className,string division,string doB,string bloodGroup,string address,string phoneNo, string licenseNo){

        this->rollNo = rollNo;
        this->name = name;
        this->className = className;
        this->division = division;
        this->doB = doB;
        this->bloodGroup = bloodGroup;
        this->address = address;
        this->phoneNo = phoneNo;
        this->licenseNo = licenseNo;
        this->classTeacher = "Mrs. ABC";
        studentCount++;

    }
    

    void getStudentData(){
        int rollNo;
    
        cout<<"\nEnter Student Data";

        cout<<"\nRollNo : ";
        cin>>rollNo;
        cout<<"\nName : ";
        cin>>name;
        cout<<"\nClass : ";
        cin>>className;
        cout<<"\nDivision : ";
        cin>>division; 
        try{
            if(!(division.compare("A") == 0 || division.compare("a") == 0))
                throw 1;
        }
        catch(int msg){
            if(msg == 1)
                cout<<"\nInvalid Division :";
                cout<<"Entering A as Default Division ";
                division = "A";
        }

        cout<<"\nDOB : ";
        cin>>doB;
        cout<<"\nBlood Group : "; 
        cin>>bloodGroup;
        cout<<"\nAddress :  ";
        cin>>address;
        cout<<"\nPhone No : ";
        cin>>phoneNo;
        cout<<"\nLicense No : ";   
        cin>>licenseNo;
        
    }

    void displayStudent(){

        cout<<"\nStudent Data : ";
        cout<<"\n------------------";
        cout<<"\nRollNo : "<<this->rollNo;
        cout<<"\nName : "<<this->name;
        cout<<"\nClass : "<<this->className;
        cout<<"\nDivision : "<<this->division;
        cout<<"\nDOB : "<<this->doB;
        cout<<"\nBlood Group : "<<this->bloodGroup;
        cout<<"\nAddress :  "<<this->address;
        cout<<"\nPhone No : "<<this->phoneNo;
        cout<<"\nLicense No : "<<this->licenseNo<<"\n";
        studentCount++;    
    }

    ~StudentDB(){
       cout<<"\n Data of Student Having Name "<<name<<" Deleted\n";
    }

    friend void showClassTeacherName(StudentDB student);


};

void showClassTeacherName(StudentDB student){
    cout<<"\nClass Teacher Name : "<<student.classTeacher<<"\n";
}

int StudentDB ::studentCount;

int main(){

    StudentDB student,student3;
    StudentDB student2(&student);
    StudentDB *studentArray[10];

    studentArray[0] = new StudentDB();
    studentArray[0]->getStudentData();
    studentArray[0]->displayStudent();
    showClassTeacherName(studentArray[0]);
    
    delete(studentArray[0]);

    return 0;
}
