#include <QCoreApplication>
#include <vector>
#include <map>
#include <iostream>
#include <random>
#include <time.h>

using namespace std;

void taskVectorRemove();
void taskMapRemove();

int main(int argc, char *argv[])
{
    srand(time(0));
    QCoreApplication a(argc, argv);

    taskVectorRemove();

    return a.exec();
}

void taskVectorRemove()
{
    vector<int> array;

    array.reserve(100);

    for (int i = 0; i < 100; i++) {
        array.push_back(rand() % 10);
    }

    for (auto i : array) {
        cout << i << ' ';
    }

    cout << endl << "----------------------------------------------------------" << endl;

    array.erase(remove(array.begin(), array.end(), 8), array.end());

    for (auto i : array) {
        cout << i << ' ';
    }
}

void taskMapsRemove()
{
    map<int, int> dict;

    for (int i = 0; i < 100; i++) {
        dict[i] = rand() % 10;
    }

    for (auto i : dict) {
        cout << i.second << ' ';
    }

    cout << endl << "----------------------------------------------------------" << endl;

    dict.erase(remove(farray.begin(), array.end(), 8), array.end());

//    for (auto i : array) {
//        cout << i << ' ';
//    }
}
