#include<iostream>
#include<stack>
#include<queue>
#include<cstring>
#define MAX 100
using namespace std;
class BSTAr
{
    int a[MAX];
public:
    BSTAr()
    {
        memset(a,0,sizeof(int)*MAX);
    }
    void insert(int x)
    {
        int pos = 1;
        while(a[pos] != 0)
        {
            if(x == a[pos]) return;
            if(x < a[pos])
                pos = pos*2;
            else
                pos = pos*2+1;
        }
        a[pos] = x;
        cout<<"tree value : "<<a[pos]<<" position : "<<pos<<endl;
    }
    int depth(int pos)
    {
        if(a[pos] == 0) return 0;
        else
        {
            int left = depth(pos*2);
            int right = depth(pos*2+1);

            if(left >= right)
                return left+1;
            if(right > left)
                return right+1;
        }
    }
    //TRAVERSING TREE METHODS
    void inOrder(int pos)
    {
        if(a[pos] == 0) return;
        inOrder(pos*2);
        cout<<a[pos]<<" ";
        inOrder(pos*2+1);
    }
    void preOrder(int pos)
    {
        if(a[pos] == 0) return;
        cout<<a[pos]<<" ";
        preOrder(pos*2);
        preOrder(pos*2+1);
    }
    void postOrder(int pos)
    {
        if(a[pos] == 0) return;
        postOrder(pos*2);
        postOrder(pos*2+1);
        cout<<a[pos]<<" ";
    }
    void breadthFirstTraversal(int pos)
    {
        queue<int> q;
        q.push(pos);
        while(!q.empty())
        {
            int p = q.front();
            q.pop();
            cout<<a[p]<<" ";
            if(a[p*2] != 0)
                q.push(p*2);
            if(a[p*2+1] != 0)
                q.push(p*2+1);
        }
    }
    void depthFirstTraversal(int pos)
    {
        stack<int> stk;
        stk.push(pos);
        while(!stk.empty())
        {
            int p = stk.top();
            stk.pop();
            cout<<a[p]<<" ";
            if(a[p*2] != 0)
                stk.push(p*2);
            if(a[p*2+1] != 0)
                stk.push(p*2+1);
        }
    }
};
int main()
{
    BSTAr b;
    b.insert(50);
    b.insert(25); b.insert(100);
    b.insert(12); b.insert(37); b.insert(0); b.insert(150);
    b.insert(6); b.insert(0); b.insert(0); b.insert(42); b.insert(0); b.insert(0); b.insert(125); b.insert(178);
    b.insert(4);
    cout<<endl;

    cout<<"INORDER : ";
    b.inOrder(1);
    cout<<endl;

    cout<<"PREORDER : ";
    b.preOrder(1);
    cout<<endl;

    cout<<"POSTORDER : ";
    b.postOrder(1);
    cout<<endl;

    cout<<"BREADTH FIRST TRAVERSAL : ";
    b.breadthFirstTraversal(1);
    cout<<endl;

    cout<<"DEPTH FIRST TRAVERSAL : ";
    b.depthFirstTraversal(1);
    cout<<endl;

    int d = b.depth(1);
    cout<<"DEPTH OF TREE : "<<d;
}
