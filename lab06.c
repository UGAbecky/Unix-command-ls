#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    char* command = "ls";
    char* argument_list[] = {"ls", "-l", NULL};
    char usercommand;
    char* exit = "exit";

    //ls -s prompt for user
    printf("Please enter command: ");
    scanf("%c", &usercommand);

    if (fork() == 0) {
        execvp(command, argument_list);
    }
      printf("Please enter command: ");
       scanf("%c", &usercommand);

       if (fork() < 1) {
           scanf("%c", exit);
       }

    return 0;
}
