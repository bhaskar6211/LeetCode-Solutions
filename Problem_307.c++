//Range Sum Query - Mutable

#include <iostream>
#include <vector>
using namespace std;

class LUPrefix {
public:
    vector<bool> uploaded;
    int ptr;
    LUPrefix(int n) {
        uploaded.resize(n + 2, false);
        ptr = 0;
    }
    void upload(int video) {
        uploaded[video] = true;

        while (uploaded[ptr + 1]) {
            ptr++;
        }
    }
    int longest() {
        return ptr;
    }
};
int main() {
    LUPrefix obj(4);

    obj.upload(3);
    cout << obj.longest() << endl;
    obj.upload(1);
    cout << obj.longest() << endl;
    obj.upload(2);
    cout << obj.longest() << endl;
    obj.upload(4);
    cout << obj.longest() << endl;

    return 0;
}