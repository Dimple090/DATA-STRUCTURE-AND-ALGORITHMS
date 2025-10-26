//do_loop
//do {
// code to execute
//} while (condition);


#include<iostream>
using namespace std;

int main() {
    int i = 1;

    do {
        cout << i << endl;
        i++;
    } while(i <= 5);

    return 0;
}
//note:
//Feature	while Loop	do-while Loop
//Condition check	Checked before the loop body runs	Checked after the loop body runs
//Execution Guarantee	May never execute if condition is false initially	Executes at least once, even if condition is false