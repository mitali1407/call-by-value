#include <windows.h>
#include<stdio.h>

void disp(int);
	
	int main()
	{
		int x=2;
		disp(x);
		printf("%d",x);
	}
	void disp(int a)
	{
		printf("%d",a);
		a=a+1;
	}

