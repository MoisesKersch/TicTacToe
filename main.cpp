#include <iostream>
#define cls system ("cls")

using namespace std;

char canvas[3][3] = {{'X','0','0'},
                     {'0','0','0'},
                     {'0','0','0'}};

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

    cout << logic() << endl;
    cout << logic() << endl;
    cout << logic() << endl;



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
    for (int x=0; x<3; x++)
    {
        for (int y=0; y<3; y++)
        {
            // 1 line
            if (x == 0 && canvas[x][y] == 'X')
            {
                a++;
                cout << "a: " << a << endl;
            }
            if (x == 0 && canvas[x][y] == 'O')
            {
                b++;
            }
            // 2 line
            if (x == 1 && canvas[x][y] == 'X')
            {
                c++;
            }
            if (x == 1 && canvas[x][y] == 'O')
            {
                d++;
            }
            // 3 line
            if (x == 2 && canvas[x][y] == 'X')
            {
                e++;
            }
            if (x == 2 && canvas[x][y] == 'O')
            {
                f++;
            }


            // 1 column
            if (y == 0 && canvas[x][y] == 'X')
            {
                g++;
            }
            if (y == 0 && canvas[x][y] == 'O')
            {
                h++;
            }
            // 2 column
            if (y == 1 && canvas[x][y] == 'X')
            {
                i++;
            }
            if (y == 1 && canvas[x][y] == 'O')
            {
                j++;
            }
            // 3 column
            if (y == 2 && canvas[x][y] == 'X')
            {
                k++;
            }
            if (y == 2 && canvas[x][y] == 'O')
            {
                l++;
            }

            // right line
            if (x == y && canvas[x][y] == 'X')
            {
                m++;
            }
            if (x == y && canvas[x][y] == 'O')
            {
                n++;
            }
        }
    }
    //cout << a << b << c << d << e << f << g << h << i << j << k << l << m << n << endl;
    if (a == 3 || b == 3 || c == 3 || d == 3 || e == 3 || f == 3 || g == 3 || h == 3 || i == 3 || j == 3 || l == 3 || k == 3 || m == 3 || n == 3)
    {
        return true;
    }
    else
    {
        return false;
    }
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
        // cls;
    }
}
