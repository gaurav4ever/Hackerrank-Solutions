#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,key,a[100],n,temp=0,pos=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		key=a[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<key)
				{key=a[j];pos=j;}
		}
		temp=a[i];
		a[i]=a[pos];	
		a[pos]=temp;
	}
	for(i=0;i<n;i++)
		printf("%d",a[i]);
}
