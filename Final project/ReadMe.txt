Connect Four is a two-player connection board game, in which the players choose a color and then take turns dropping colored tokens into a seven-column, six-row vertically suspended grid.
The pieces fall straight down, occupying the lowest available space within the column. The objective of the game is to be the first to form a horizontal, vertical, or diagonal line of four of one's own tokens.

FinalProject.cpp = Main application source file
There is no header file!
I started by creating functions that serve multiple purposes in this project.
void test_scores(), simply print the initialized scores
void board(), simply print the board and the scores according to current game:
void choose(), simply allows the players to choose which column they want to put pick (A B C D E F or G)
void fill_bin(), fills the bin or the column according to what's already in there:
The main functions calls the functions listed above, till the user quits the game or till the game ends.
