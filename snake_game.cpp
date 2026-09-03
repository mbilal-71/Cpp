/*
 * =====================================================
 *          🐍  CLASSIC SNAKE GAME  🐍
 *       Console-based C++ Snake Game
 * =====================================================
 *
 *  Controls:  W/A/S/D or Arrow Keys to move
 *             P to Pause/Resume
 *             X to Quit
 *
 *  Eat the fruit (*) to grow and score points.
 *  Don't hit the walls or yourself!
 *
 *  Compile: g++ -o snake_game snake_game.cpp
 *  Run:     ./snake_game  (or snake_game.exe on Windows)
 * =====================================================
 */

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <conio.h>    // For _kbhit() and _getch() on Windows
#include <windows.h>  // For Sleep(), SetConsoleCursorPosition()

using namespace std;

// ─────────────────────────────────────────────
//  Game Configuration
// ─────────────────────────────────────────────
const int WIDTH  = 40;
const int HEIGHT = 20;
const int INITIAL_SPEED = 100;  // milliseconds per frame (lower = faster)
const int SPEED_INCREMENT = 2;  // speed boost per fruit eaten

// ─────────────────────────────────────────────
//  Direction Enum
// ─────────────────────────────────────────────
enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };

// ─────────────────────────────────────────────
//  Point Structure
// ─────────────────────────────────────────────
struct Point {
    int x, y;
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};

// ─────────────────────────────────────────────
//  Snake Game Class
// ─────────────────────────────────────────────
class SnakeGame {
private:
    vector<Point> snake;       // Snake body segments (head is snake[0])
    Point fruit;               // Current fruit position
    Direction dir;             // Current movement direction
    int score;
    int highScore;
    int speed;                 // Current delay in ms
    bool gameOver;
    bool paused;

    // ── Console Helpers ──────────────────────
    void setCursorPosition(int x, int y) {
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }

    void hideCursor() {
        CONSOLE_CURSOR_INFO cursorInfo;
        cursorInfo.dwSize = 1;
        cursorInfo.bVisible = FALSE;
        SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
    }

    void setConsoleColor(int color) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    }

    // ── Fruit Spawning ──────────────────────
    void spawnFruit() {
        bool onSnake;
        do {
            onSnake = false;
            fruit.x = (rand() % (WIDTH - 2)) + 1;
            fruit.y = (rand() % (HEIGHT - 2)) + 1;
            for (const auto& segment : snake) {
                if (segment == fruit) {
                    onSnake = true;
                    break;
                }
            }
        } while (onSnake);
    }

    // ── Input Handling ──────────────────────
    void processInput() {
        if (_kbhit()) {
            int key = _getch();

            // Handle arrow keys (preceded by 0 or 224)
            if (key == 0 || key == 224) {
                key = _getch();
                switch (key) {
                    case 72: if (dir != DOWN)  dir = UP;    break;  // Up arrow
                    case 80: if (dir != UP)    dir = DOWN;  break;  // Down arrow
                    case 75: if (dir != RIGHT) dir = LEFT;  break;  // Left arrow
                    case 77: if (dir != LEFT)  dir = RIGHT; break;  // Right arrow
                }
            } else {
                // Handle WASD and other keys
                switch (key) {
                    case 'w': case 'W': if (dir != DOWN)  dir = UP;    break;
                    case 's': case 'S': if (dir != UP)    dir = DOWN;  break;
                    case 'a': case 'A': if (dir != RIGHT) dir = LEFT;  break;
                    case 'd': case 'D': if (dir != LEFT)  dir = RIGHT; break;
                    case 'p': case 'P': paused = !paused; break;
                    case 'x': case 'X': gameOver = true;  break;
                }
            }
        }
    }

    // ── Game Logic Update ───────────────────
    void update() {
        if (paused || dir == STOP) return;

        // Calculate new head position
        Point newHead = snake[0];
        switch (dir) {
            case UP:    newHead.y--; break;
            case DOWN:  newHead.y++; break;
            case LEFT:  newHead.x--; break;
            case RIGHT: newHead.x++; break;
            default: break;
        }

        // ── Wall Collision ──
        if (newHead.x <= 0 || newHead.x >= WIDTH - 1 ||
            newHead.y <= 0 || newHead.y >= HEIGHT - 1) {
            gameOver = true;
            return;
        }

        // ── Self Collision ──
        for (size_t i = 0; i < snake.size(); i++) {
            if (newHead == snake[i]) {
                gameOver = true;
                return;
            }
        }

        // Insert new head
        snake.insert(snake.begin(), newHead);

        // ── Fruit Collision ──
        if (newHead == fruit) {
            score += 10;
            if (score > highScore) highScore = score;

            // Increase speed
            if (speed > 30) speed -= SPEED_INCREMENT;

            spawnFruit();
            // Don't remove tail → snake grows
        } else {
            snake.pop_back();  // Remove tail → snake moves
        }
    }

    // ── Rendering ───────────────────────────
    void draw() {
        setCursorPosition(0, 0);

        string frame;
        frame.reserve((WIDTH + 2) * (HEIGHT + 5));

        // ── Title Bar ──
        setConsoleColor(11); // Light cyan
        frame += "  ";
        for (int i = 0; i < WIDTH; i++) frame += "=";
        frame += "\n";

        string title = "   SNAKE GAME";
        string scoreStr = "  Score: " + to_string(score) +
                          "  |  High: " + to_string(highScore) +
                          "  |  Length: " + to_string(snake.size());
        frame += title + "\n" + scoreStr + "\n";

        frame += "  ";
        for (int i = 0; i < WIDTH; i++) frame += "=";
        frame += "\n";

        cout << frame;
        frame.clear();

        // ── Game Board ──
        for (int y = 0; y < HEIGHT; y++) {
            frame += "  ";
            for (int x = 0; x < WIDTH; x++) {

                // Borders
                if (y == 0 || y == HEIGHT - 1) {
                    setConsoleColor(8); // Dark gray
                    cout << frame; frame.clear();
                    setConsoleColor(8);
                    cout << "#";
                    continue;
                }
                if (x == 0 || x == WIDTH - 1) {
                    setConsoleColor(8);
                    cout << frame; frame.clear();
                    setConsoleColor(8);
                    cout << "#";
                    continue;
                }

                // Check if this cell has something
                bool drawn = false;

                // Snake head
                if (x == snake[0].x && y == snake[0].y) {
                    cout << frame; frame.clear();
                    setConsoleColor(10); // Light green
                    cout << "@";
                    drawn = true;
                }

                // Snake body
                if (!drawn) {
                    for (size_t i = 1; i < snake.size(); i++) {
                        if (x == snake[i].x && y == snake[i].y) {
                            cout << frame; frame.clear();
                            setConsoleColor(2); // Green
                            cout << "o";
                            drawn = true;
                            break;
                        }
                    }
                }

                // Fruit
                if (!drawn && x == fruit.x && y == fruit.y) {
                    cout << frame; frame.clear();
                    setConsoleColor(12); // Red
                    cout << "*";
                    drawn = true;
                }

                // Empty space
                if (!drawn) {
                    frame += " ";
                }
            }
            cout << frame; frame.clear();
            cout << "\n";
        }

        // ── Status Bar ──
        setConsoleColor(7); // White/gray
        if (paused) {
            setConsoleColor(14); // Yellow
            cout << "\n      >>> PAUSED - Press P to resume <<<     " << endl;
        } else {
            cout << "\n  [W/A/S/D] Move  [P] Pause  [X] Quit       " << endl;
        }
        setConsoleColor(7);
    }

    // ── Game Over Screen ────────────────────
    void drawGameOver() {
        setCursorPosition(0, 0);
        setConsoleColor(12);

        cout << "\n\n";
        cout << "  ╔══════════════════════════════════════╗\n";
        cout << "  ║                                      ║\n";
        cout << "  ║          G A M E   O V E R !         ║\n";
        cout << "  ║                                      ║\n";

        setConsoleColor(14);
        string scoreText = "Final Score: " + to_string(score);
        int padding = (38 - (int)scoreText.size()) / 2;
        cout << "  ║";
        for (int i = 0; i < padding; i++) cout << " ";
        cout << scoreText;
        for (int i = 0; i < 38 - padding - (int)scoreText.size(); i++) cout << " ";
        cout << "║\n";

        string lengthText = "Snake Length: " + to_string(snake.size());
        padding = (38 - (int)lengthText.size()) / 2;
        cout << "  ║";
        for (int i = 0; i < padding; i++) cout << " ";
        cout << lengthText;
        for (int i = 0; i < 38 - padding - (int)lengthText.size(); i++) cout << " ";
        cout << "║\n";

        if (score >= highScore && score > 0) {
            setConsoleColor(10);
            string hsText = "NEW HIGH SCORE!";
            padding = (38 - (int)hsText.size()) / 2;
            cout << "  ║";
            for (int i = 0; i < padding; i++) cout << " ";
            cout << hsText;
            for (int i = 0; i < 38 - padding - (int)hsText.size(); i++) cout << " ";
            cout << "║\n";
        } else {
            cout << "  ║                                      ║\n";
        }

        setConsoleColor(12);
        cout << "  ║                                      ║\n";
        setConsoleColor(11);
        cout << "  ║     [R] Replay    [X] Exit            ║\n";
        setConsoleColor(12);
        cout << "  ║                                      ║\n";
        cout << "  ╚══════════════════════════════════════╝\n";
        setConsoleColor(7);
    }

    // ── Initialize / Reset Game State ───────
    void init() {
        snake.clear();
        // Start snake in the center with 3 segments
        int startX = WIDTH / 2;
        int startY = HEIGHT / 2;
        snake.push_back(Point(startX, startY));
        snake.push_back(Point(startX - 1, startY));
        snake.push_back(Point(startX - 2, startY));

        dir = STOP;
        score = 0;
        speed = INITIAL_SPEED;
        gameOver = false;
        paused = false;

        spawnFruit();
    }

public:
    SnakeGame() : highScore(0) {
        srand((unsigned)time(0));
    }

    // ── Main Game Loop ──────────────────────
    void run() {
        hideCursor();

        bool wantReplay = true;

        while (wantReplay) {
            init();

            // Clear screen for new game
            system("cls");

            // ── Title Screen ──
            setConsoleColor(10);
            cout << "\n\n";
            cout << "     ____              _           \n";
            cout << "    / ___| _ __   __ _| | _____    \n";
            cout << "    \\___ \\| '_ \\ / _` | |/ / _ \\   \n";
            cout << "     ___) | | | | (_| |   <  __/   \n";
            cout << "    |____/|_| |_|\\__,_|_|\\_\\___|   \n";
            cout << "\n";
            setConsoleColor(11);
            cout << "    ─────────────────────────────── \n";
            setConsoleColor(14);
            cout << "       Console Edition  v1.0       \n\n";
            setConsoleColor(7);
            cout << "    Controls:                       \n";
            cout << "      W / Up Arrow    = Move Up     \n";
            cout << "      S / Down Arrow  = Move Down   \n";
            cout << "      A / Left Arrow  = Move Left   \n";
            cout << "      D / Right Arrow = Move Right  \n";
            cout << "      P = Pause  |  X = Quit        \n\n";
            setConsoleColor(11);
            cout << "    Press any key to start...       \n";
            setConsoleColor(7);

            _getch(); // Wait for key press
            system("cls");

            // ── Game Loop ──
            while (!gameOver) {
                processInput();
                update();
                draw();
                Sleep(speed);
            }

            // ── Game Over ──
            system("cls");
            drawGameOver();

            // Wait for replay or exit
            wantReplay = false;
            while (true) {
                if (_kbhit()) {
                    int key = _getch();
                    if (key == 'r' || key == 'R') {
                        wantReplay = true;
                        break;
                    }
                    if (key == 'x' || key == 'X') {
                        break;
                    }
                }
                Sleep(50);
            }
        }

        // Cleanup
        system("cls");
        setConsoleColor(10);
        cout << "\n  Thanks for playing Snake! \n\n";
        setConsoleColor(7);
    }
};

// ─────────────────────────────────────────────
//  Main Entry Point
// ─────────────────────────────────────────────
int main() {
    SnakeGame game;
    game.run();
    return 0;
}
