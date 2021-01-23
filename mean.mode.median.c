#include<stdio.h>
#define N 40
int mean(int num[]);
void sort(int num[]);
int median(int num[]);
int mode(int num[]);
int main()
{
    int i,num[N];
    printf("Input the feedbacks of 40 students:\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Mean value=%d\n",mean(num));
    printf("Median value=%d\n",median(num));
    printf("Mode value=%d\n",mode(num));
    return 0;
}
int mean(int num[])
{
    int i,sum=0,de;
    for(i=0;i<N;i++)
    {
      sum=sum+num[i];  
    }
    de=sum/40;
    return de;
}
void sort(int num[])
{
    int i,j,temp;
    for(i=0;i<39;i++){
        for(j=i+1;j<39;j++)
        {
            if(num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
}
int median(int num[])
{
    sort(num);
    return (num[19]+num[20])/2;
}
int mode(int num[])
{
    int b[10]=
    {
        1,1,1,1,1,1,1,1,1,1
    };
    int i=0,j=0;
    int Mode;
    sort(num);
    Mode=num[0];
    while(j<39)
    {
        if(num[j]==num[j+1])
        {
            b[i]++;
        }
        else{
            if(b[i]>b[i-1]&&i>0)
            {
                Mode=num[j];
            }
            i++;
        }
        j++;
    }
    return Mode;
}