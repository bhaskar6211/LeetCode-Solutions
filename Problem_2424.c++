//longest uploaded prefix

#include <iostream>
#include <vector>
using namespace std;

class LUPrefix {
private:
    vector<bool> uploaded;
    int ptr;
public:
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
    int n, q;
    cin >> n >> q;
    LUPrefix server(n);
    while (q--) {
        string op;
        cin >> op;
        if (op == "upload") {
            int video;
            cin >> video;
            server.upload(video);
        } else if (op == "longest") {
            cout << server.longest() << endl;
        }
    }
    return 0;
}