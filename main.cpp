#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct rooms {

    string type;

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

    cout << "enter the square house: ";
    cin >> var.house.square;

    cout << "enter the height floors: ";
    cin >> var.house.floor[0].ceil_height;

    cout << "enter the type room: bedroom, kitchen, bathroom, childrenroom, livingroom: ";
    string title = "";
    int count = 0;
    cin >> title;

    if (title == "bedroom") {
        count = 1;
    }

    if (title == "kitchen") {
        count = 2;
    }

    if (title == "bathroom") {
        count = 3;
    }

    if (title == "childrenroom") {
        count = 4;
    }

    if (title == "livingroom") {
        count = 5;
    }

    enum state {
        bedroom = 1, kitchen, bathroom, childrenroom, livingroom
    };

    if (count == bedroom) {
        var.house.floor[0].room[0].type = "bedroom";
    }

    if (count == kitchen) {
        var.house.floor[0].room[0].type = "kitchen";
    }

    if (count == bathroom) {
        var.house.floor[0].room[0].type = "bathroom";
    }

    if (count == childrenroom) {
        var.house.floor[0].room[0].type = "childrenroom";
    }

    if (count == livingroom) {
        var.house.floor[0].room[0].type = "livingroom";
    }


    my_object.push_back(var);

    if (var.store.available) {
        cout << "the bar square: " << my_object[0].store.square << endl;
    }

    if (var.garage.available) {
        cout << "the garage square: " << my_object[0].garage.square << endl;
    }

    if (var.bar.available) {
        cout << "the bar square: " << my_object[0].bar.square << endl;
    }

    cout << "the house square: " << my_object[0].house.square << ", ";
    cout << "the floor height: " << my_object[0].house.floor[0].ceil_height << ", ";
    cout << "the type room : " << my_object[0].house.floor[0].room[0].type << ", ";


    return 0;
}
