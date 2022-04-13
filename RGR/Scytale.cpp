#include <iostream>
#include <vector>

using namespace std;

vector<int> skitl(vector<int> myvec, int a) {
    bool flagTail = false;
    int tail = 0;
    int lenth = myvec.size()/a;
    if (myvec.size()%a != 0) {
        flagTail = true;
        tail = myvec.size() % a;
        lenth++;
    }


    vector<vector<int> > shifr(lenth, vector<int>(a, 0));
    for (vector<int>::iterator i = myvec.begin(); i != myvec.end(); i++) {
        for (int j = 0; j < lenth;j++) {
            for (int k = 0; k < a; k++) {
                shifr[j][k] = myvec.at(*i);
                i++;
            }
        }
    }


    if (flagTail) {
        for (int i = 0; i < tail; i++) {
            shifr.at(lenth).pop_back();
        }
    }


    vector<int> cipher;
    for (int i = 0; i < cipher.size(); i++) {
        for (int j = 0; j < lenth; j++) {
            for (int k = 0; k < a; k++) {
                cipher[k] = shifr[j][k];
                i++;               
            }
        }
    }  

    return cipher;
}

