#include "stackDemo.c"
int apply(char ch, int op1, int op2)
{
    switch(ch)
    {
        case '+':
            return (op1+op2);
        case '*':
            return (op1*op2);
        case '-':
            return (op1-op2);
        case '/':
            return (op1/op2);
    }
}
int evalPostFix(char str[])
{
    Stk s; s.top = -1;
    int i=0; char ch;
    while(str[i] != '\0')
    {
        ch = str[i];
        printf("\nnext char = %c", ch);
        if(ch >= '0' && ch <= '9')
        {
            push(&s,ch-'0');
            i++;
            printStk(&s);
        }
        else if(ch == '+' || ch == '-' || ch == '/' || ch == '*')
        {
            int op2 = pop(&s);
            printf("popped out %d\n",op2);
            int op1 = pop(&s);
            printf("popped out %d\n",op1);
            int result = apply(ch,op1,op2);
            push(&s,result);
            printStk(&s);
            i++;
        }
        else
        {

            printf("illegal char %c",ch);
            break;
        }
    }
    int result = pop(&s);
    return result;
}
int main()
{
    char str[] = "349*+";
    int result = evalPostFix(str);
    printf("answer = %d",result);
}
