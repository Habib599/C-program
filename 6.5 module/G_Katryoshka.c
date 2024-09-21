#include <stdio.h>

int main() {
    long long n, m, k;  
    scanf("%lld %lld %lld", &n, &m, &k);

    long long katryoshkas = 0;

    // Case 3: (1 eye, 1 mouth, 1 body)
    long long use_case_3 = (n < m ? n : m);  // Minimum of n and m
    use_case_3 = (use_case_3 < k ? use_case_3 : k);  // And minimum of bodies (k)
    
    katryoshkas += use_case_3;
    // Subtract the used pieces for case 3
    n -= use_case_3;
    m -= use_case_3;
    k -= use_case_3;

    // Case 1:  (2 eyes, 1 body)
    long long use_case_1 = n / 2 < k ? n / 2 : k;  // Minimum of (n/2) and k

   
    katryoshkas += use_case_1;

    printf("%lld\n", katryoshkas);

    return 0;
}
