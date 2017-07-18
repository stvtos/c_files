#include <stdio.h>

int main(){

        int age;
        int grad = 18;

        printf("Input your age: ");
        scanf("%d", &age);

        int yrs = grad - age;

        
        if (age >= grad){
            printf("Congrats u dunn graduated\n");
        };

        if (4 < age < grad){
            printf("you have %d years left\n", yrs);
        };



return 0;
}
