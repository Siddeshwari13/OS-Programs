#include<stdio.h>
void main()
{
int pid[10],bt[10],wt[10],tat[10],n,twt=0,ttat=0,i,j,t;
float awt,atat;
printf("Enter no.of processes:");
scanf("%d",&n);
printf("\n Enter burst times:");
for(i=0;i<n;i++)
scanf("%d",&bt[i]);
printf("\n Enter PID:");
for(i=0;i<n;i++)
scanf("%d",&pid[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(bt[i]>bt[j])
{
t=bt[i];
bt[i]=bt[j];
bt[j]=t;

t=pid[i];
pid[i]=pid[j];
pid[j]=t;
}}}
wt[0]=0;
tat[0]=bt[0];
for(i=1;i<n;i++)
{
wt[i]=tat[i-1];
tat[i]=bt[i]+wt[i];
}
for(i=0;i<n;i++)
{
ttat= ttat+tat[i];
twt=twt+wt[i];
}
printf("\n PID \t BT \t WT \t TAT");
for(i=0;i<n;i++)
printf("\n %d\t%d\t%d\t%d",pid[i],bt[i],wt[i],tat[i]);
awt=(float)twt/n;
atat=(float)ttat/n;
printf("\nAvg. Waiting Time=%f",awt);
printf("\nAvg. Turn around time=%f",atat);
}

//Output
/*Enter no.of processes:3

 Enter burst times:4
13
25

 Enter PID:1
2
3

 PID     BT      WT      TAT
 1      4       0       4
 2      13      4       17
 3      25      17      42
Avg. Waiting Time=7.000000
Avg. Turn around time=21.000000
Process returned 32 (0x20)   execution time : 18.950 s
Press any key to continue.*/
