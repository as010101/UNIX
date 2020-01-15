#include <unistd.h>
#include <signal.h>
#include <sys/time.h>

#include <iostream>

void sig_handler(int signo)
{
    std::cout<<"recieve sigal: "<<signo<<std::endl;
}

int main()
{
    signal(SIGALRM, sig_handler);

    struct itimerval timer_set;

    //启动时间（5s后启动）    首次触发
    timer_set.it_value.tv_sec = 5;
    timer_set.it_value.tv_usec = 0;

    //间隔定时器间隔：2s   五秒后执行sig_handler，并且自此后以两秒为周期执行sig_handler
    timer_set.it_interval.tv_sec = 2;
    timer_set.it_interval.tv_usec = 0;

    if(setitimer(ITIMER_REAL, &timer_set, NULL) < 0)
    {
        std::cout<<"start timer failed..."<<std::endl;
        return 0;
    }

    int temp;
    std::cin>>temp;

    return 0;
}
