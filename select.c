#include<stdio.h> 
void main() 
{ 
int arr[20],n,i,j,min_indx,temp;
printf("Enter size of the array: ");
scanf("%d",&n);
printf("Enter %d elements: ",n);
for(i=0;i<n;i++)
 scanf("%d",&arr[i]);
 for (i = 0; i < n; i++) 
 { 
 // Find the minimum element in unsorted array 
 min_indx = i; 
 for (j = i+1; j < n; j++) 
 if (arr[j] < arr[min_indx]) 
 min_indx = j; 
 
 // Swap the found minimum element with the ith element 
 temp=arr[min_indx];
 arr[min_indx]=arr[i];
 arr[i]=temp;
 } 
 printf("\n Sorted array is ");
 for(i=0;i<n;i++)
 printf(" %d",arr[i]);
}