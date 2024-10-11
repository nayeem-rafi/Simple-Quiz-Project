# Simple Quiz Program Using C

## Description

This project is a simple multiple-choice quiz game written in C. The quiz reads questions from an external text file and presents them to the user in random order. Users input their answers and receive a final score at the end. Correct answers are rewarded, and incorrect ones incur a small penalty.

## Key Features
- **Random Question Selection:** Each time you run the quiz, questions are presented in a random order to keep the quiz fresh and engaging.
- **Score Calculation:** The program implements a scoring system where correct answers earn 1 point, and incorrect answers result in a deduction of 0.25 points.
- **Text-Based Input/Output:** The questions and possible answers are stored in an external text file (`PROJECT_QUIZ.txt`), making it easy to modify or extend the question set.
- **User Input Validation:** The program checks whether the user input is a valid choice (1/2/3/4) and processes the answer accordingly.
- **Penalty for Incorrect Answers:** To add a challenge, incorrect answers deduct points, simulating negative marking like in many competitive exams.
  
## Applications

This quiz program can be applied in various scenarios:

- **Educational Tool:** It can be used to create quizzes on different subjects, making learning fun and interactive for students.
- **Interview Practice:** The quiz can be used for practicing technical, aptitude, or general knowledge questions, preparing users for competitive exams or interviews.
- **Classroom Usage:** Teachers can use this program to create simple quizzes and evaluate students' performance on various topics.

## How to Run

1. Clone this repository:
    ```bash
    git clone https://github.com/your-username/simple-quiz-program.git
    ```
2. Compile the program:
    ```bash
    gcc quiz_program.c -o quiz_program
    ```
3. Create a `PROJECT_QUIZ.txt` file with your quiz questions. The file should have one question per line, formatted like this:
    ```txt
    What is the capital of France?
    A) Berlin
    B) Madrid
    C) Paris
    D) Rome

    Who developed the theory of relativity?
    A) Isaac Newton
    B) Albert Einstein
    C) Galileo Galilei
    D) Nikola Tesla
    ```

4. Run the program:
    ```bash
    ./quiz_program
    ```

## Sample Output
Here’s an example of how the program runs:
1. **What is the capital of France?**
   - 1. Berlin
   - 2. Madrid
   - 3. Paris
   - 4. Rome  
   **Your answer:** 3

2. **Who developed the theory of relativity?**
   - 1. Isaac Newton
   - 2. Albert Einstein
   - 3. Galileo Galilei
   - 4. Nikola Tesla  
   **Your answer:** 2

3. **What is the tallest mountain in the world?**
   - 1. K2
   - 2. Mount Everest
   - 3. Kilimanjaro
   - 4. Denali  
   **Your answer:** 2

4. **Which element has the chemical symbol 'O'?**
   - 1. Oxygen
   - 2. Hydrogen
   - 3. Helium
   - 4. Nitrogen  
   **Your answer:** 1

5. **Who painted the Mona Lisa?**
   - 1. Vincent van Gogh
   - 2. Pablo Picasso
   - 3. Leonardo da Vinci
   - 4. Claude Monet  
   **Your answer:** 3

Your Total Score is **4.75 out of 5.00**.

## Project Structure
- `Quiz.c`: The main C file that contains the quiz program logic.
- `PROJECT_QUIZ.txt`: A text file where quiz questions are stored. You can modify this file to add more questions or change the existing ones.

## Future Improvements
- Add more questions and categorize them by difficulty or topic.
- Implement support for multiple players, enabling score tracking for each player.
- Expand the scoring system with hints, bonus rounds, or time limits for answering.
- Implement a graphical interface for a more interactive experience.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Conclusion
This simple quiz program demonstrates basic concepts in C such as file input/output, random number generation, and user input validation. It is ideal for use as an educational tool or for casual entertainment. The project can be easily extended with additional features such as more complex scoring systems or multiple-player modes.



