#include <stdio.h>

int main(){

        int age;
        int grad = 18;
        int yrs = grad - age;

        printf("Input your age: ");
        scanf("%d", &age);

        if (age >= grad){
            printf("Congrats u dunn graduated\n");
        };

        if (age < grad){
            printf("you have %d years left\n", yrs);
        };



return 0;
}
