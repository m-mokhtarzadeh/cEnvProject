#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    const char* s = getenv("SLEEP_TIME");
    int sleep_time;
    sscanf(s, "%d", &sleep_time); 
    printf("Program sleep for %d second.\n",sleep_time);
    for(int i=sleep_time ; i>=0 ; i--) {
      printf("%d seconds remaining.\n",i);
      sleep(1);
    }
    return 0;

}
