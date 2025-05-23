#include<stdio.h> 
#include<string.h> 
 
char x[20], y[20], b[20][20];
void print_lcs(int i, int j) 
{ 
 if(i==0 || j==0) 
 return;
 if(b[i][j]=='c') 
 { 
 print_lcs(i-1,j-1);
 printf("%c",x[i-1]);
 } 
 else if(b[i][j]=='u') 
 print_lcs(i-1,j);
 else 
 print_lcs(i,j-1);
} 
 
void main() 
{ 
int i,j,m,n,c[20][20];
 
 printf("\nEnter the 1st sequence: ");
scanf("%s",x);
 printf("\nEnter the 2nd sequence: ");
scanf("%s",y);
 printf("\nThe Longest Common Subsequence is ");
m=strlen(x);
n=strlen(y);
for(i=0;i<=m;i++)
 c[i][0]=0;
for(i=0;i<=n;i++)
 c[0][i]=0;
 
 //c, u and l denotes cross, upward and leftward directions respectively 
for(i=1;i<=m;i++)
 { 
 for(j=1;j<=n;j++)
{ 
 if(x[i-1]==y[j-1]) 
 { 
 c[i][j]=c[i-1][j-1]+1;
 b[i][j]='c';
 } 
 else if(c[i-1][j]>=c[i][j-1]) 
 { 
 c[i][j]=c[i-1][j];
 b[i][j]='u';
 } 
 else 
 { 
 c[i][j]=c[i][j-1];
 b[i][j]='l';
 } 
 } 
 } 
print_lcs(m,n);
}