#include<iostream>
using namespace std;
class student
{
    int id;
    public:
    student(int i=0)
    {
        id=i;
    }
    friend student operator +(student s1,student s2)
    {
        student temp;
        temp.id=s1.id+s2.id;
        return temp;
    }
    void display()
    {
        cout<<id<<endl;
        cout<<"Success";
    }

};
int main()
{
    student s1(5);
    student s2(10);
    student s3;
    s3=s1+s2;
    s3.display();
}