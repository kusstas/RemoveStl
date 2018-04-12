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
    cout << endl << "--------------------------VECTOR------------------------" << endl;
    taskVectorRemove();
    cout << endl << "--------------------------MAP------------------------" << endl;
    taskMapRemove();
    cout << endl;
    return 0;
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

    cout << endl << "---------------------------REMOVE 8----------------------------" << endl;

    array.erase(remove(array.begin(), array.end(), 8), array.end());

    for (auto i : array) {
        cout << i << ' ';
    }
}

void taskMapRemove()
{
    map<int, int> dict;

    for (int i = 0; i < 100; i++) {
        dict[i] = rand() % 10;
    }

    for (auto i : dict) {
        cout << i.second << ' ';
    }

    cout << endl << "---------------------------REMOVE 8----------------------------" << endl;

    auto it = dict.begin();
    while (it != dict.end()) {
        if (it->second == 8) {
            dict.erase(it++);
        }
        else {
            ++it;
        }

    }

    for (auto i : dict) {
        cout << i.second << ' ';
    }
}
