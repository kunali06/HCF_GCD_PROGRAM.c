void main(){
int x,y,i,start;
printf("enter two numbers:\n");
scanf("%d %d",&x,&y);

if(x<y)
{
    start=x;
}
else
{
    start=y;
}
for(i=start;i>0;i--)
{
    if(x%i==0 && y%i==0)
    {
        printf("HCF is %d",i);
        break;
    }
}
getch();
}
