main()
{
int x,y,z;
printf("enter three numbers\n");
scanf("%d%d%d",&x,&y,&z);
if(x>y)
{
printf("%d",&x);
}
else
{
    if(y>z)
    {
        printf("%d",y);
    }
    else
    {
     printf("%d",z);
    }
    getch();
}


}
