#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){

        int yrs = 18 - argv[1]

        if (argv[1] >= 18){
            printf("Congratulations, you are finished with school\n");
                    };
        else{
            if (argv[1] < 18){
            printf("you have %d years left\n", yrs);
             }
        }
        else{
            fprintf(stderr, "Usage %s <value>", argv[0])
            return 1;
        }
        return 0;




}
