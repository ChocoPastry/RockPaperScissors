**Rock-Paper-Scissors Game Readme**

### Overview:
This C program implements a simple Rock-Paper-Scissors game where the user competes against the computer. The game is played over three rounds, and the final score is displayed at the end.

### Compilation:
Compile the program using a C compiler. For example, using gcc:
```bash
gcc rock_paper_scissors.c -o rock_paper_scissors
```

### Execution:
Run the compiled program:
```bash
./rock_paper_scissors
```

### User Input:
1. Enter the number of characters in your name.
2. Enter your name.
3. Choose Rock (1), Paper (2), or Scissors (3) in each round.

### Gameplay:
- The computer randomly selects Rock, Paper, or Scissors for each round.
- The user's and computer's choices are displayed.
- The winner of each round is determined based on the Rock-Paper-Scissors rules.
- The score for each round is recorded in the scorecard.

### Scorecard:
- The user's and computer's scorecards are displayed at the end, showing the outcome of each round.
- Positive values indicate a win, negative values indicate a loss, and zero indicates a draw.

### Example Usage:
```
Enter the number of characters in your name: 5
Enter your name: Alice

1. Rock
2. Paper
3. Scissors
Enter your choice: 2
Alice's choice is Paper
Computer's choice is Scissors
Computer has won!

1. Rock
2. Paper
3. Scissors
Enter your choice: 1
Alice's choice is Rock
Computer's choice is Paper
Computer has won!

1. Rock
2. Paper
3. Scissors
Enter your choice: 3
Alice's choice is Scissors
Computer's choice is Rock
Computer has won!

Alice's scorecard -1
Alice's scorecard -1
Alice's scorecard -1
Computer's scorecard 1
Computer's scorecard 1
Computer's scorecard 1
```

### Memory Management:
- Dynamic memory allocation is used for the user's name, and memory is freed after use to prevent memory leaks.

### Author:
ChocoPastry
