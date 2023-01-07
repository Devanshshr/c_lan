 #include<stdio.h>
 int main()
 {int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{scanf("%d",&a[i]);
}int m=a[0],sm=a[0];
for(int i=0;i<n;i++)
if(a[i]>m)
m=a[i];
printf("%d",m);
for(int i=0;i<n;i++)
if(a[i]>sm&&a[i]<m)
sm=a[i];
printf("%d",sm);

 }
