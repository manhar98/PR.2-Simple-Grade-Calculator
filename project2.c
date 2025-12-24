#include <stdio.h>

int main(){
    int score;
    char grade;

    printf("Enter your score :");
    scanf("%d",score);

    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' : 'F' ;

    printf("Your grade is %c.", grade);

    switch(grade){
        case 'A':
            printf("Excellent Work! \n");
            break;
        case 'B':
            printf("Well done! \n");
            break;
        case 'C':
            printf("Good Job! \n");
            break;
        case 'D':
            printf("Your Pass. \n");
            break;
        case 'F':
            printf("Sorry Your failed. \n");
            break;
        default:
            printf("Invalid grade. \n");
    }

    if(grade >= 'A' && grade <= 'D'){
        printf("You are eligible for the next level.");
    }else{
        printf("Please try again next time.");
    }


}