# Guessing Game

This is a C program for a simple guessing game where you try to guess a randomly generated number between 1 and 100.

## How to Play

1. Compile the code:

```bash
gcc guessing_game.c -o guessing_game
```

2. Run the executable:
```bash
./guessing_game
```

3. The game will tell you that you have 10 chances to guess the number.
4. In each chance, enter your guess and press Enter.
5. The game will provide hints based on your guess:
- If your guess is higher than the actual number, it will say "The number is greater than actual number."
- If your guess is lower than the actual number, it will say "The number is lesser than actual number."
- If you guess the number correctly, the game will congratulate you and display your score (remaining chances).

## Scoring
Your score is based on the number of guesses it takes you to find the correct number. You get a higher score for guessing the number in fewer attempts.

## Losing the Game
If you use up all 10 chances without guessing the correct number, the game will reveal the correct number and tell you that you lost.

## Running the Code
The provided comments within the code explain the logic behind each step. You can uncomment the printf statements to see the generated random number for debugging purposes, but those lines are commented out by default.

## License
This code is provided without a specific license. You are free to use and modify it for your own purposes.