#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char* argv[]){

int key[] = {1,1,0,0,1};
int k[5];

int s[5];

for (int i = 0; i < 5; i++){

        s[i] = i;
        k[i] = key[i];
}
cout << s[0];
cout << s[1];

cout << s[2];
cout << s[3];
cout << s[4]<< endl;;
int j = 0;

for (int i = 0; i < 5; i++){
        j = (j + s[i] + k[i]);
        swap(s[i],s[j]);
}

cout << s[0];
cout << s[1];
cout << s[2];
cout << s[3];
cout << s[4];


}
