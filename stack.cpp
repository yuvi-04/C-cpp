#include<stack>
#include<iostream>
using namespace std;
int main()
{
    stack<int> stk;
    int i;
    for(i=0; i<10; i++)
        stk.push(i+12);
    while(!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }

}
