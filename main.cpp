#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct rooms {
    bool bedroom;
    bool kitchen;
    bool bathroom;
    bool childrenroom;
    bool livingroom;
    int square;
};

struct floors {
    rooms room[4];
    int ceil_height;
};

struct houses {
    int total;
    floors floor[3];
    int square;
};


struct data {
    int square;
    int ceil_height;
    bool available;
};

struct objects {
    data store;
    data garage;
    data bar;
    houses house;
};


int main() {

    vector<objects> my_object;
    objects var;
    bool available;

    cout << "available of are store,garage and bar on the plots? If yes to enter 1, if not to enter 0" << endl;
    cout << "available the store:";
    cin >> var.store.available;
    cout << "available the garage:";
    cin >> var.garage.available;
    cout << "available the bar:";
    cin >> var.bar.available;

    if (var.store.available) {
        cout << "enter the store square:";
        cin >> var.store.square;

    }


    if (var.garage.available) {
        cout << "enter the garage square:";
        cin >> var.garage.square;

    }

    if (var.bar.available) {
        cout << "enter the bar square:";
        cin >> var.bar.square;

    }

    my_object.push_back(var);

    if (var.store.available) {
        cout << "the bar square: " << my_object[0].store.square << ", ";
    }

    if (var.garage.available) {
        cout << "the garage square: " << my_object[0].garage.square << ", ";
    }

    if (var.bar.available) {
        cout << "the bar square: " << my_object[0].bar.square << ", ";
    }

    return 0;
}
