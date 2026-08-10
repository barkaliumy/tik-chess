TikChess: CLI Three Men's Morris Game
TikChess is a command-line interface (CLI) implementation of a classic two-player alignment game (similar to Three Men's Morris or Achi), written in C. The game features an ASCII grid layout where two players take turns placing pieces on the board and then moving them along connected paths to achieve three-in-a-row.

Features
ASCII Board Interface: Visual representation of the board state using character art and lettered nodes (j through r).

Two-Phase Gameplay:

Placement Phase: Players alternate placing three pieces onto valid nodes.

Movement Phase: Players move existing pieces along designated connections to adjacent empty spots.

Win Condition Checks: Automatic validation for horizontal, vertical, and diagonal lines of three matching pieces.

Replay Support: Interactive prompt allowing players to restart or exit upon match completion.
How to PlayPlacement Phase:Player 1 plays as 1, and Player 2 plays as 2.When prompted, enter the key corresponding to the node (j to r) where you wish to place your piece.Duplicate placements on occupied nodes trigger a warning reset.Movement Phase:After all 6 pieces are placed without a winner, the movement phase begins.Input two letters separated by a space: the source node (where your piece currently is) and the destination node (where you want to move it).Example input: j k (moves a piece from j to k if k is empty).Winning:Form a straight line (horizontal, vertical, or diagonal) of 3 matching numbers (111 or 222).
