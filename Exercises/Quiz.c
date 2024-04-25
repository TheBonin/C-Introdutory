#include <stdio.h>
#include <ctype.h>

int main(){
    char questions[][80] = {"Question 1:","Question 2","Question 3"};
    char options[][80] = {"A. 1", "B. 1", "C. 1","A. 2", "B. 2", "C. 2","A. 3", "B. 3", "C. 3"};
    char solutions[] = {'A','B','C'};
    char answer;
    int correct_answer = 0;

    int questionsN = sizeof(questions)/sizeof(questions[0]);
    int optionsN = (sizeof(options)/sizeof(options[0])) / questionsN;

    for(int i = 0; i < questionsN; i++){
        printf("\n%s\n",questions[i]);
        for(int j = (i * 3); j < (i * 3) + 3; j++){
            printf("%s\n",options[j]);
        }
        printf("\nDigite sua resposta: \n");
        scanf("%c", &answer);
        scanf("%*c"); // Clear \n from inpout buffer - * means that the answear will not be stored anywhere
        // These two lines above can be replaced for: scanf("%c%*c")
        answer = toupper(answer);

        if(answer == solutions[i]){
            correct_answer++;
        }
    }

    switch(correct_answer){
        case(1):
        case(2):        //Works the same as || (OR) operator
        case(3):
            printf("\nCongratulations, you've got %d answer(s) correct",correct_answer);
            break;                
        case(0):
            printf("\nTry again next time, you've got %d answer(s) correct",correct_answer);
            break;
        default:
            break;
    }

    return 0;
}