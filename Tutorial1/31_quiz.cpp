#include <iostream>

int main(){
    std::string questions[] = {"1. Year invented?: ",
                                "2. Inventor?: ",
                                "3. Predecessor?: ",
                                "4. You like that?: "};
    
    std::string options[][4] = {
        {"A. 1","B. 2","C. 3","D. 4"},
        {"A. User 1","B. User 2","C. User 3","D. User 4"},
        {"A. A","B. B","C. C","D. D"},
        {"A. Yes","B. Yes","C. Yes","D. Yes"}
    };

    char answers[] = {'A','A','A','A'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for(int i=0;i<size;i++){
        std::cout << questions[i] << "\n";

        for(int j=0;j<sizeof(options)/sizeof(options[0]);j++){
            std::cout << options[i][j] << "\n";
        }

        std::cin >> guess;
        guess = toupper(guess);

        if(guess==answers[i]){
            std::cout << "Correct\n";
            score++;
        }else{
            std::cout << "Incorrect\n";
            std::cout << "Answer: " << answers[i] << "\n";
        }
    }

    std::cout << "Results: " << score << "\n";
    std::cout << "Percentage correct: " << (score/(double)size)*100 << "%" << "\n";

    return 0;
}