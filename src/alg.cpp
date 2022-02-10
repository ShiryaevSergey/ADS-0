// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
int k = 0;   
    if (a > b) {
        for (int i = b; i > 0; --i) {
            if ((a % i == 0) && (b % i == 0)) {
                k = i;
                break;
            }      
        }
    } else {
        for (int i = a; i > 0; --i) {
            if ((a % i == 0) && (b % i == 0)) {
                k = i;
                break;
            } 
        }
    }
    return k;
}
