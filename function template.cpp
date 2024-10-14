#include <iostream>
/*
function template - describes what a function looks like
                    can be use to geneerate as many overloaded function as needed
                    each using diff data types

                    use template <typename T>

*/
template <typename T, typename U>
U max(T x, U y){
    return (x > y) ? x : y;
}
int main(){

    std::cout << max(1, 2.1);

    return 0;
}