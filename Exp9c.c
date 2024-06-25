#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
int pfds[2],n;
char buffer[100];
if(pipe(pfds) < 0)
{
perror("Pipe is not created");
exit(1);
}
if(fork()>0)
{
printf("Parent passing value to child\n");
write(pfds[1],"Hello\n",6);
wait( );
}
else if (fork()==0)
{
printf("Child printing received file\n");
n=read(pfds[0],buffer,100);
write(1,buffer,n);
}
}
