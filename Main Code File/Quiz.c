#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int Q[5] = {0, 1, 2, 3, 4};
    int Random, Answer;
    int Boundary = 0;
    float point = 0;
    char inp[99999];

    srand(time(0));
    FILE *quiz;

    quiz = fopen("PROJECT_QUIZ.txt", "r");

    int correct_Ans[5] = {0, 2, 0, 1, 0};

    while (Boundary < 5) {
        Random = rand() % 5;
        if (Q[Random] != -1) {
            fseek(quiz, 0, SEEK_SET);
            for (int i = 0; i <= Random; i++) {
                fgets(inp, sizeof(inp), quiz);
            }
            printf("%s", inp);
            printf("Your answer (1/2/3/4): ");
            scanf("%d", &Answer);


            if (Answer == correct_Ans[Random] + 1) {
                point += 1;
            } else {
                point -= 0.25;
            }

            Q[Random] = -1;
            Boundary++;
        }
    }

    fclose(quiz);

    printf("\n\nYour Total Score is %.2f out of 5.00\n\n", point);
}
