#include <iostream>

using namespace std;

char canvas[3][3] = {{'0','0','0'},
                     {'1','1','1'},
                     {'2','2','2'}};


void draw()
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

int main()
{
    draw();

}
