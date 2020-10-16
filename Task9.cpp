
#include <iostream>
#include <vector>

using namespace std;

int k = 0;

void printVect(vector<int> vc) {
    for (int i = 0; i < vc.size(); i++) {
        cout << vc[i] << "; ";
    }
    cout << endl;
}

int main()
{
    vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<int> v2;
    v2.resize(v.size());

    printVect(v);

    cout << "Enter your k: ";
    cin >> k;
    cout << endl;

    for (int i = 0; i < v.size()-k; i++) {
        v2[i] = v[i + k];
    }
    for (int i = v2.size() - k; i < v2.size(); i++) {
        v2[i] = v2[i - 1] + 1;
    }
    printVect(v2);

}

