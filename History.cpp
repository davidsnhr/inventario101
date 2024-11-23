//
// Created by David Sánchez on 22/11/24.
//

#include "History.h"
#include <iostream>

using namespace std;

void History::addRecord(const string &record) {
    records.push_back(record);
}

void History::showHistory() {
    cout << "Hisotrial de operaciones";
    for(auto& record: records) {
        cout << record << endl;
    }
}
