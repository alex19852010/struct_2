#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct flat
{
    string name;
    int area;
    int height;
};

int main() {

flat my_flat[4];

enum number {bedroom , kitchen , bathroom, corridor};
int type = sizeof(number);

for(int i = 0; i <= type; i ++)
{

    switch (i)
    {
        case bedroom:
             my_flat[i].area = 30;
             my_flat[i].name = "bedroom";
             my_flat[i].height = 3;
        break;

        case kitchen:
            my_flat[i].area = 20;
            my_flat[i].name = "kitchen";
            my_flat[i].height = 3;
            break;

        case bathroom:
            my_flat[i].area = 10;
            my_flat[i].name = "bathroom";
            my_flat[i].height = 3;
            break;

        case corridor:
            my_flat[i].area = 25;
            my_flat[i].name = "corridor";
            my_flat[i].height = 3;
            break;


    }

}
for(int i = 0; i < 4; i ++)
{
    cout << my_flat[i].name << " " << my_flat[i].area << " " << my_flat[i].height << endl;
}



    return 0;
}
