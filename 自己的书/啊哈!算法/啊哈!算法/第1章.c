/*#include<stdio.h>
int main()
{
	int a[11],i,j,t;
	for(i=0;i<=10;i++)
	//for(i=10;i>=0;i--)
		a[i]=0;
	for(i=1;i<=5;i++)
	{
		scanf("%d",&t);
		a[t]++;
	}
	//for(i=0;i<=10;i++)
	for(i=10;i>=0;i--)
		for(j=1;j<=a[i];j++)
			printf("%d",i);
	getchar();getchar();
	//�ȼ���system("pause");
	return 0;
}*/
/*
#include<stdio.h>
int main()
{
	int book[1001],i,j,t,n;
	for(i=0;i<=1000;i++)
		book[i]=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&t);
		book[t]++;
	}
	for(i=1000;i>=0;i--)
		for(j=1;j<=book[i];j++)
			printf("%d",i);
	getchar();getchar();
	return 0;
}*/
