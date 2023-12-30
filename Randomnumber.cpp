#include<iostream>
using namespace std;
int main()
{
    srand(time(NULL));
    int n=rand()%10;
    cout<<"Random Number generated is : "<<n<<endl;
    int number,chance=1;
    do
    {
    cout<<"Please enter your guess number"<<endl;
    cin>>number;
    if(number>n)
    {
        cout<<"Your guess number is high : "<<endl;
        chance++;
    }
    else if(number<n)
    {
        cout<<"Your guess number is low : "<<endl;
        chance=chance+1;
    }
    else
    {
        cout<<"Congratulation you have guessed the correct number in "<<chance<<"chances"<<endl;
    }
    }while(number!=n);

}