#include<stdio.h>
int main()
{
	FILE*f,*f1,*f2;
	int a[100]={0},b[5]={0},c[5]={0},i,l=0,k;
	for (i=0;i<9;i++)
	{
		a[i]=i+1;
	}
	f = fopen("DATA.txt","w+");
	for(i=0;i<9;i++)
	{
	
	fprintf(f,"%d",a[i]);
}  for(i=0;i<9;i++)
 {fseek(f,i,0);
 if(getw(f)%2==0)
 {b[l]=getw(f);
 l++;
 }
 else
 {c[k]=getw(f);
 k++;
 }
}
for(i=0;i<9;i++)
printf("%d",b[i]);	
	
}
