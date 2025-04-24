#include<stdio.h> 
void main() 
{ 
int arr[20],n,i,j,key;
printf("Enter size of the array: ");
scanf("%d",&n);
printf("Enter %d elements: ",n);
for(i=0;i<n;i++)
 scanf("%d",&arr[i]);
 for (int i = 1; i < n; i++) 
 { 
 key = arr[i];
 j = i - 1;
 while (j >= 0 && arr[j] > key) 
 { 
 arr[j + 1] = arr[j];
 j = j - 1;
 } 
 arr[j + 1] = key;
 } 
 printf("\n Sorted array is ");
 for(i=0;i<n;i++)
 printf(" %d",arr[i]);
}