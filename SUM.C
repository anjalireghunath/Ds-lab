void main()
{
int a[5][2],sum=0,i,j;
printf("enter ten number \n");
for(i=0,i<5;i++)
{
for(j=0,j<2;j++)
{
scanf("%d",&a[i][j]);
}

\\sum=sum+a[i][j];
}
printf("entered number are \n");
for(i=0;i<5;i++)
{
for(j=0;j<2;j++)
{
printf("a[%d][%d]=%d\n",i,j,a[i][j]);
}
sum=sum+a[i][j];
}
}
printf("sum is %d \n");
getch();
clrscr();


}