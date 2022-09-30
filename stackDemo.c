#define MAX 10
struct Stack
{
    int a[MAX];
    int top;
};
typedef struct Stack Stk;

void push(Stk*stk,int x)
{
    if(stk->top == MAX-1)
        return;
    stk->a[++stk->top] = x;
}
int pop(Stk*stk)
{
    if(stk->top == -1)
        return 0;
    int x = stk->a[stk->top];
    stk->top--;
    return x;
}
void printStk(Stk*stk)
{
    printf("\nstk : ");
    for(int i = 0; i<= stk->top; i++)
    {
        printf("%d ",stk->a[i]);
    }
}
int peak(Stk*stk)
{
    return stk->a[stk->top];
}
/*int main()
{
    Stk s;
    s.top = -1;
    push(&s,4);
    push(&s,6);
    push(&s,8);
    push(&s,1);
    push(&s,2);
    push(&s,10);
    printf("top = %d\n",s.top);
    int x = peak(&s);
    printf("peak = %d\n",x);
    x = pop(&s);
    printf("popped out = %d\n",x);
    printf("top = %d",s.top);
}*/
