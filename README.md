<p align="center">
  <img src="https://github.com/jotavare/jotavare/blob/main/42/banners/piscine_and_common_core/github_piscine_and_common_core_banner_so_long.png" alt="so_long Banner"/>
</p>

# so_long - 2D Labyrinth Game

This project is a small 2D game developed in C, as part of my university coursework. The goal is to create a simple labyrinth game using the **MiniLibX** graphics library. The player must collect all collectibles on the map before being able to exit.

## Features

-   **2D Map Rendering**: The game parses a `.ber` file to create and display a 2D map.
-   **Player Movement**: The player can move up, down, left, and right using the `W`, `A`, `S`, `D` keys.
-   **Collectibles and Exit**: The player must collect all items (carrots) before the exit (stable) opens.
-   **Move Counter**: The number of moves is displayed on the screen and printed to the terminal.
-   **Map Validation**: The program validates the map to ensure it's rectangular, surrounded by walls, and has a valid path.
-   **Graceful Exit**: The game can be closed by pressing the `ESC` key or clicking the window's close button.

## How It Works

The game is built using the **MiniLibX** library, a simple X-Window programming API. The program starts by initializing a connection to the display, creating a window, and loading the necessary textures (`.xpm` files for the player, walls, floor, etc.).

The main logic is handled by `mlx_loop`, which waits for events like key presses. When a movement key is pressed, the game checks if the next tile is valid (not a wall). If it is, the player's position is updated, and the map is re-rendered.

## Map Rules

A valid map must:
1.  Be a rectangular grid.
2.  Be enclosed by walls (`1`).
3.  Contain exactly one player start position (`P`), one exit (`E`), and at least one collectible (`C`).
4.  Have a valid path from the player's start to all collectibles and the exit. This is checked using a flood-fill algorithm.

## How to Compile and Run

1.  **Navigate to the project directory.**
2.  **Compile the source files using the provided `Makefile`:**
    ```bash
    make
    ```
3.  **Run the game with a map file as an argument:**
    ```bash
    ./so_long map/map1.ber
    ```

### Controls

-   **W / Up Arrow**: Move Up
-   **A / Left Arrow**: Move Left
-   **S / Down Arrow**: Move Down
-   **D / Right Arrow**: Move Right
-   **ESC**: Quit the game
