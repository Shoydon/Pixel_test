#include<stdio.h>
int main()  { 
 int n;
 printf("Enter the size of Array.");
 scanf("%d",&n);
 int a[n];
 for (int i = 0;i<n;i++) {
 printf("Enter %d element",i);
 scanf("%d",&a[i]);
 }
 for (int j = 0;j<=n;j++) {
  for (int k = 0;k <= n-2;k++)  {
  	if (a[k] > a[k+1]) {
  	int temp;
  	temp = a[k];
  	a[k] = a[k+1];
  	a[k+1] = temp;
  	} 
  	} 
  	}
  	for (int i = 0;i<n;i++)  {
  		printf("%d\t",a[i]);
  		}
  		return 0; 
  		}
