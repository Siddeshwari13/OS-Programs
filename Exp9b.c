#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main(void)
{
int pid;
int status;
pid = fork( );
if(pid < 0)
{
perror("bad fork");
exit(1);
}
else if (pid == 0)
{
printf("I am the child process with id: %d \n", getpid( ));
}
else if (pid >0)
{
wait(&status);
printf("I am the parent process with id: %d \n", getpid( ));
}
}

//#include &lt;stdio.h&gt;
#include &lt;unistd.h&gt;
#include &lt;sys/wait.h&gt;
int main(void)
{
int pid;
int status;
pid = fork( );
if(pid &lt; 0)
{
perror(&quot;bad fork&quot;);
exit(1);
}
else if (pid == 0)
{
printf(&quot;I am the child process with id: %d \n&quot;, getpid( ));
}
else if (pid &gt; 0)
{
wait(&amp;status);
printf(&quot;I am the parent process with id: %d \n&quot;, getpid( ));
}
}
