#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct rooms
{
    bool bedroom;
    bool kitchen;
    bool bathroom;
    bool childrenroom;
    bool livingroom;
    int square;
};

struct floors
{
    rooms room[4];
    int ceil_height;
};

struct houses
{
    int total;
    floors floor[3];
    int square;
};


struct data
{
    int square;
    int ceil_height;
    bool available;
};

struct objects
{
    data store;
    data garage;
    data bar;
    houses house;
};


int main() {

cout << "hello world";
cout << "my_fotbal";    


    return 0;
}
