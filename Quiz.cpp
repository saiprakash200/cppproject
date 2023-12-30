#include<iostream>
using namespace std;
int main()
{
    char choice;
    int score=0;
    string ques[5]={"1.In which year c++ programming was invented ?",
                    "2.In which year india got independence ? ",
                    "3.Who is the authour of C++ programming ?",
                    "4.Which of the following is not a opps concept in c++ ?",
                    "5.How can we access class data members from main funtion ? "}; 
    string option[5][4]={{"A.1979","B.1982","C.1990","D.1999"},
                         {"A.1979","B.1956","C.1947","D.1989"},
                         {"A.Bjarne Stroustrup","B.Albert einstein","C.Robert gose","D.Steven halking"},
                         {"A.polymorphism","B.Abstraction","C.Inheritence","D.loops"},
                         {"A.Objets","B.variables","C.pointers","D.structure"}};
    char key[5]={'A','C','A','D','A'};
    for(int i=0;i<5;i++)
    {
        cout<<ques[i]<<endl;
        for(int j=0;j<4;j++)
        {
            cout<<option[i][j]<<endl;
        }
        cout<<"Enter Your choice : "<<endl;
        cin>>choice;
        choice=toupper(choice);
        if(choice==key[i])
        {
            cout<<"Correct answer !! "<<endl;
            score=score+1;
        }
        else
        {
            cout<<"Wrong answer and correct answer is : "<<key[i]<<endl;
        }
    }
        cout << "*****************************" << endl;
        cout << "*           RESULTS         *" << endl;
        cout << "*****************************" << endl;
        if(score>=4)
        {
	    cout<<"Congrats Your score is : "<<score<<endl;
        }
        if(score<4)
        {
            cout<<"Keep learning Your score is : "<<score<<endl;
        }
    
                        
}