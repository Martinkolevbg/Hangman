#include <iostream>
#include <fstream>
#include <ArrayVector.h>

using namespace std;

int main()
{
    ArrayVector words_base;
    fstream words;
    words.open("words.txt");
    while(!words.eof()){
        string temp;
        words >> temp;
        words_base.push_back(temp);
    }
    for(int i=0;i<10;i++){
        cout << words_base[i]<<endl;
    }
    return 0;
}
