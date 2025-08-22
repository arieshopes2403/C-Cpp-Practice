/*Input Format

Input will contain four integers - a,b,c,d , one per line.

Output Format

Return the greatest of the four integers.
PS: I/O will be automatically handled.*/

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <cstdio>

using namespace std;

int max_two_value(int a, int b){
    /*Nếu a > b thì trả về a và ngược lại => gán lại cho result */
    return a > b ? a:b; // Câu lệnh này là toán tử 3 ngôi (ternary operator) trong C++: 
    }

int main(){

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int result = max_two_value(a, b);
    result = max_two_value(result, c);
    result = max_two_value(result, d);

    cout << "ket qua la: " <<result;


    return 0;
}