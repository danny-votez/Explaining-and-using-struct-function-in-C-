#include<iostream>
using namespace std;
struct EXAM{
    int cat, exam;
    void get(){
        cout<<"Enter CAT and Exam Marks below"<<endl;
        cout<<"Your CAT Marks are: ";
        cin>>cat;
        cout<<"Your Exam Marks are: ";
        cin>>exam;
        cout<<"The Total Score is "<<cat + exam<<endl;            
    }
}dsa;
int main(){
    dsa.get();
    return 0;
}


/*
1. START
2. Define structure EXAM
        2.1. Declare structure data cat, exam
        2.2. Define method Get(parameters: none)
        2.2.1. Read coursework and exam
        2.2.2. Calculate Total Marks, i.e., cat + exam
        2.2.3. Display cat + exam
3. End structure definition
4. Declare object dsa
5. Use structure object to access structure method as dsa.Get(arguments: none)
6. STOP
*/
