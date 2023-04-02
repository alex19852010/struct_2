#include <iostream>
#include <string>
using namespace std;

struct flat
{
    int area;
    int height;
    int room;
};

int main() {

flat my_flat[10];

for(int i = 0; i < 10; i ++)
{
    my_flat[i].area = i + 10;
    my_flat[i].height = i + 2;
    my_flat[i].room = i + 1;
}

    for(int i = 0; i < 10; i ++)
    {
        cout << my_flat[i].room << " " << my_flat[i].area << " " << my_flat[i].height << endl;
    }
    return 0;
}
