#include<stdio.h>
int  linearsearch()
{
	int key,i,n,a[i];
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
		return 1;
	    }
		
	}
	  if(key!=a[i])
		{
		return 0;
	    }
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,key;
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	linearsearch();
	if(linearsearch()==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}

}
