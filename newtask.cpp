#include <iostream>
using namespace std;

void ageVote(int a)
{
    if (a >= 18){
        cout<<"Yes you are eliigible to vote!!!";
    }
    else{
        int b = 18 - a;
        cout<< "sorry but you can vote after "<<b<<" year(s)!";
    }
}
int main()
{
    ageVote(10);
}