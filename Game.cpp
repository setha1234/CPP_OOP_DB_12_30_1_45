#include <iostream>
#include <vector>
#include <cstdlib> // For rand() and srand()
#include <ctime> // For time()
#include <unistd.h> // For usleep() (Linux)
#include <termios.h> // For terminal settings (Linux)
#include <fcntl.h> // For file control options (Linux)

using namespace std;

bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
vector<pair<int, int>> snake;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;

// Linux-specific functions to replace conio.h functionality
int kbhit() {
    struct termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF) {
        ungetc(ch, stdin);
        return 1;
    }

    return 0;
}

void Setup() {
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
    snake.clear();
    snake.push_back({x, y});
}

void Draw() {
    system("clear"); // Use "clear" for Linux
    
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;
    
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0)
                cout << "#";
                
            bool isSnakeSegment = false;
            for (auto segment : snake) {
                if (segment.first == j && segment.second == i) {
                    cout << "O";
                    isSnakeSegment = true;
                    break;
                }
            }
            
            if (!isSnakeSegment) {
                if (i == y && j == x)
                    cout << "O";
                else if (i == fruitY && j == fruitX)
                    cout << "F";
                else
                    cout << " ";
            }
            
            if (j == width - 1)
                cout << "#";
        }
        cout << endl;
    }
    
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;
    
    cout << "Score: " << score << endl;
}

void Input() {
    if (kbhit()) {
        switch (getchar()) {
            case 'a':
                dir = LEFT;
                break;
            case 'd':
                dir = RIGHT;
                break;
            case 'w':
                dir = UP;
                break;
            case 's':
                dir = DOWN;
                break;
            case 'x':
                gameOver = true;
                break;
        }
    }
}

void Logic() {
    if (snake.size() > 0) {
        for (int i = snake.size() - 1; i > 0; i--) {
            snake[i] = snake[i - 1];
        }
        snake[0] = {x, y};
    }
    
    switch (dir) {
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;
    }
    
    if (x >= width || x < 0 || y >= height || y < 0)
        gameOver = true;
    
    for (auto segment : snake) {
        if (segment.first == x && segment.second == y) {
            gameOver = true;
        }
    }
    
    if (x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        snake.push_back(snake.back());
    }
}

int main() {
    srand(time(0));
    
    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();
        usleep(100000); // 100ms delay (Linux uses microseconds)
    }
    
    cout << "Game Over! Final Score: " << score << endl;
    return 0;
}