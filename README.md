# coin_game
The player (you) and the computer both begin with a starting balance of $0.00. For each round of the game, both the player and the computer toss a quarter, a nickel, and a dime. For each type of coin, if the coin lands on heads, the amount of the coin is added to the player’s balance. If the coin lands on tails, however, nothing is added to the player’s balance for that coin.
The game ends when at least one player has a balance of $1.00 or more. The following are conditions for win/loss/tie:
- If both players have the same balance at the end, they tie (note that this means both players not only have the same score, but their shared score is $1.00 or more)
- If one player has a balance of less than $1.00 when the game ends, the other player who has a balance of $1.00 or more wins. For example, if the player has $0.90 and the computer has $1.05, the computer with $1.05 wins (remember it’s not possible for both players to have less than $1.00 when the game ends)
- If both players have a balance of $1.00 or more, the player with the lower score wins. For example if the player ends the game with $1.10, and the computer ends the game with $1.30, the player with $1.10 wins.
