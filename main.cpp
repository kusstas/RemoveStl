#include <QCoreApplication>

#include <iostream>

#include <algorithm>
#include <vector>
#include <map>

#include <random>

using namespace std;

const int MIN_VALUE     = 1;
const int MAX_VALUE     = 10;
const int TARGET_REMOVE = 8;
const int COUNT_NUMBERS = 100;

void taskVectorRemove();
void taskMapRemove();

int main()
{
    cout << endl << "--------------------------VECTOR------------------------" << endl;
    taskVectorRemove();
    cout << endl << "--------------------------MAP------------------------" << endl;
    taskMapRemove();
    cout << endl;
    return 0;
}

void taskVectorRemove()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(MIN_VALUE, MAX_VALUE);
    vector<int> array(COUNT_NUMBERS);

    for (auto& el : array) {
        el = dis(gen);
    }

    for (const auto& el : array) {
        cout << el << ' ';
    }

    cout << endl << "---------------------------REMOVE----------------------------" << endl;

    array.erase(remove(array.begin(), array.end(), TARGET_REMOVE), array.end());

    for (const auto& el : array) {
        cout << el << ' ';
    }
}

void taskMapRemove()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(MIN_VALUE, MAX_VALUE);
    map<int, int> dict;

    for (int i = 0; i < COUNT_NUMBERS; i++) {
        dict[i] = dis(gen);
    }

    for (const auto& el : dict) {
        cout << el.second << ' ';
    }

    cout << endl << "---------------------------REMOVE----------------------------" << endl;

    auto it = dict.begin();
    while (it != dict.end()) {
        if (it->second == TARGET_REMOVE) {
            it = dict.erase(it);
        }
        else {
            ++it;
        }
    }

    for (const auto& el : dict) {
        cout << el.second << ' ';
    }
}
