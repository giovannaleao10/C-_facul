#include<iostream>
#include<math.h>
using namespace std;

int main(void){

    float volume, raio;

    cin >> raio;

    volume = (4.0/3.0) * 3.14159 * pow(raio,3);

    cout << volume;

    return 0;
}
