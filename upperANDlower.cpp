
#include <iostream>
using namespace std;

/*Hàm chuyển chữ thường thành chữ hoa trong C++*/
char upper(char chr){
    if('a' <= chr && chr <= 'z'){
        chr = chr - ((int)('a') - (int)('A'));
    }
    return chr;
}

/*Hàm chuyển chữ hoa thành chữ thường trong chr*/
char lower(char chr){
    if('A' <= chr && chr <= 'Z'){
        chr = chr + ((int)('a') - (int)('A'));
    }
    return chr;
}

int main(){
    char chr;

    chr = lower('L');
    cout <<  chr <<endl;

    chr = upper('l');
    cout <<  chr;

    return 0;
}
