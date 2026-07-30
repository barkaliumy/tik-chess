# TikChess ♟️

A classic two-player strategy board game (similar to Nine Men's Morris or Tapatan) implemented as a command-line interface (CLI) program in C.

---

## 🎮 Game Overview

**TikChess** is played on a 3x3 grid connected by orthogonal and diagonal paths. Two players compete to align three of their tokens in a row (horizontally, vertically, or diagonally).

### Game Phases

1. **Placement Phase:** Each player takes turns placing 3 tokens onto the board positions labeled `j` through `r`.
2. **Movement Phase:** If no player has won during the placement phase, players take turns sliding their tokens into adjacent empty spots (`0`) until one player gets 3 in a row.

---

## 📍 Board Layout & Controls

The game grid consists of 9 key locations:

```text
  (j)------------(k)-----------(l)
   | \             |             / |
   |   \           |           /   |
   |     \         |         /     |
   |       (m)----(n)----(o)       |
   |     /         |         \     |
   |   /           |           \   |
   | /             |             \ |
  (p)------------(q)-----------(r)
