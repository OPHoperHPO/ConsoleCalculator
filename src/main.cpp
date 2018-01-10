#include <iostream>
int x;
int y;
int sum;
int console;
#include <time.h>
using namespace std;

int sleep(unsigned int mseconds){
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

int main() {
    cout<<"Calculator rev1.0\n";
    cout<<"Write command.\nFor help write '5'\n\n\nroot@calculator-unstable:";
    cin >>console;
    if (console == 1 ) {
    	cout<<"Write number\n";
    	cin >>x;
    	cout<<"Write twice number\n";
    	cin >>y;
        sum = x+y;
        cout<<"Sum:"<<sum<<" \n";
        sleep(100);
        main();
    }
    if (console == 2 ) {
    	cout<<"Write number\n";
    	cin >>x;
    	cout<<"Write twice number\n";
    	cin >>y;
        sum = x*y;
        cout<<"Multiplication:"<<sum<<" \n";
        sleep(100);
        main();
    }
    if (console == 3 ) {
    	cout<<"Write number\n";
    	cin >>x;
    	cout<<"Write twice number\n";
    	cin >>y;
        sum = x-y;
        cout<<"Subtraction:"<<sum<<" \n";
        sleep(100);
        main();
    }
    if (console == 4 ) {
    	cout<<"Write number\n";
    	cin >>x;
    	cout<<"Write twice number\n";
    	cin >>y;
        sum = x/y;
        cout<<"Division:"<<sum<<" \n";
        sleep(100);
        main();
    }
    if (console == 5 ) {
        	cout<<"Commands\n 1 - Sum\n 2 - Multiplication Y\n 3 - Subtraction\n 4 - Division\n 5 - Help\n 6 - Close\n Ñtrl+C - Emergency stop";
            main();
        }
    if (console == 6 ) {
                exit(0);
            }
    else{
    cout<<"Error Command\n";
    sleep(200);
    return 0;
    }
}


