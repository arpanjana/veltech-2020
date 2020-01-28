#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    set<string> words;

    string word;
    while (cin >> word) {
        words.insert(word);
    }

    for (string w : words) {
        cout << w << endl;
    }
}
