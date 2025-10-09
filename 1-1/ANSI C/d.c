#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {    
    // for n=1
    if (n == 1) {return a;}
    // for n=2
    if (n == 2) {return b;}
    // for n=3
    if (n == 3) {return c;}
    // for n != 1,2,3
    int sum = find_nth_term(n-1, a, b, c) + find_nth_term(n-2, a, b, c) + find_nth_term(n-3, a, b, c);
    return sum;
    
}

int main() {
    int n=5, a=1, b=2, c=3;
  
    //scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
    
    printf("%d", ans); 
    return 0;
}