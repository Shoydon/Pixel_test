#include<stdio.h>
int main()  {
	int n;
	printf("Enter the size of array");
	scanf("%d",&n);
	int a[n];
	for (int i = 0;i<n-1;i++)  {
		printf("Enter %d elements",i);
		scanf("%d", &a[i]);
		}
	int flag = 1;
	
	for (int j = 0;j <=n-1 && flag == 1;j++)  {
	flag = 0;
	for (int k = 0;k <=n-2-j;k++) {
	if (a[k] > a[k+1])  {
	int temp;
	temp = a[k];
	a[k] = a[k+1];
	a[k+1] = temp;
	flag = 1;
	}
	}
for (int i = 0;i<n;i++)  {
	 printf("%d\t",a[i]);
	 }
	 
	 return 0;
	 }
	 }
	 
