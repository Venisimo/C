#include <stdio.h>
#include <errno.h>
int main(int argc, char argv[]) {
    char feeds[] = {"http://wsdgdsg.xml","http://wsgdsg.xml","http://sfsgd.xml"};
    
    int times = 3;
    char pharase = argv[1];
    int i;
    for (i = 0; i  times; i++) {
        char var[255];
        sprintf(var, RSS_FEED=%s, feeds[i]);
        char vars[] = {var, NULL};
        pid_t pid = fork();
        if (pid == -1) {
            fprintf(stderr, "Не могу клонировать процесс %s\n", strerror(errno));
            return 1;
        }
        if (!pid) {
            if (execle(usrbinpython, usrbinpython, rssgossip.py, pharase, NULL, vars) == -1) {
            fprintf(stderr, "Не могу запустить скрипт %s\n", strerror(errno));
            return 1;
         }
        }
    }
}