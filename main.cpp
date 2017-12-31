#include <iostream>
#define cls system ("cls")

using namespace std;

char canvas[3][3] = {{'0','0','0'},
    {'1','1','1'},
    {'2','2','2'}
};

void display();
void update();
void play();
void logic();



int main()
{

    play();
}

void display()
{
    for (int x=0; x<3; x++)
    {
        for (int y=0; y<3; y++)
        {
            cout << " " << canvas[x][y];
        }
        cout << "\n";
    }
}

void update(int x, int y, char input)
{
    canvas[x][y] = input;
}

void logic()
{

}

void play()
{

    int x, y;

    int i = 0;

    while (i < 9)
    {
        display();
        cout << "Enter the coordinates: ";
        cin >> x >> y;
        if (x < 4 and y < 4 and (canvas[x-1][y-1] != 'X' and  canvas[x-1][y-1] != 'O'))
        {
            i++;
            if ((i % 2) == 0)
            {
               update(--x, --y, 'X');
            }
            else
            {
               update(--x, --y, 'O');
            }
        }
        cls;
    }
}
