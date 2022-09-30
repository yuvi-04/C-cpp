int main()
{
int x=4567;
int y,y1,y2;
y=x%10;
y1=x%100;
y2=x%1000;
printf("%d,%d,%d,%d",y,y1-y,y2-y1,x-y2);
}
