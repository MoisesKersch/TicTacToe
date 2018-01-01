#include <iostream>
#define cls system ("cls")

using namespace std;

char canvas[3][3] = {{'0','0','0'},
                     {'0','0','0'},
                     {'0','0','O'}};

int a = 0;
int b = 0;
int c = 0;
int d = 0;
int e = 0;
int f = 0;
int g = 0;
int h = 0;
int i = 0;
int j = 0;
int k = 0;
int l = 0;
int m = 0;
int n = 0;

void display();
void update(int x, int y, char input);
void play();
bool logic();


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

bool logic()
{
    int xcounter, ocounter;
    for(int x=0; x<3; x++)
    {
        xcounter = 0;
        ocounter = 0;
        for(int y=0; y<3; y++)
        {
            if(canvas[x][y] == 'X')
                xcounter++;
            if(canvas[x][y] == 'O')
                ocounter++;
        }

        if (xcounter == 3)
        {
            return true;
        }
        else if (ocounter == 3)
        {
            return true;
        }
        else
        {
            return false;
        }

    }

}

void play()
{

    int x, y;

    int i = 0;

    while (i < 9 and !logic())
    {
        display();
        cout << "Enter the coordinates: ";

        cin >> x >> y;
        if ((x < 4 and x >= 0) and (y < 4 and y >= 0) and (canvas[x-1][y-1] != 'X' and  canvas[x-1][y-1] != 'O'))
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
