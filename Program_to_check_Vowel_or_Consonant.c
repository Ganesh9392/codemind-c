#include <stdio.h>
int main() {
    char c;
    int lv, uv;
    scanf("%c", &c);
    lv = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    uv = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (lv || uv)
        printf("Vowel");
    else
        printf("Consonant");
    return 0;
}
