#include <stdio.h>

int main() {
    /* 
    ===================================================
        Variable Name Rules & Corrections
    ===================================================
    
    1. 1stPlayer   -> INVALID 
    Correction: player1 or firstPlayer
                      
    2. player_age  -> VALID 
    
    3. $score      -> INVALID 
    Correction: score
                      
    4. total-marks -> INVALID 
    Correction: total_marks or totalMarks
                      
    5. userName    -> VALID (camelCase is vaild)
    */

    printf("=== Variable Naming Rules ===\n");
    
    int player1 = 1;
    int player_age = 20;
    int score = 100;
    int total_marks = 450;
    char userName[20] = "Roshani";

    printf("Player: %d\n", player1);
    printf("Age: %d\n", player_age);
    printf("Score: %d\n", score);
    printf("Total Marks: %d\n", total_marks);
    printf("User Name: %s\n", userName);

    return 0;
}