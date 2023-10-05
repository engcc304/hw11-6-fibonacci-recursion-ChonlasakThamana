/*
    เมื่อผู้ใช้กรอกตัวเลข ให้โปรแกรมแสดงผลรวมของชุดอนุกรม ที่มีตัวเลข 2 ลำดับก่อนหน้าบวกกัน (อนุกรมฟีโบนัชชี)
    (จงเขียนในรูปแบบของ Recursion Function)

    Test case:
        8
    Output:
        Series = 1 + 1 + 2 + 3 + 5 + 8 + 13 + 21
        Sum = 54

*/#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}

int main() {
    int n, i;
    long long sum = 0;

    printf("Test case:\n");
    printf("        ");
    scanf("%d", &n);

    printf("Output:\n");
    printf("        Series = ");
    for (i = 0; i < n; i++) {
        printf("%d", fibonacci(i));
        if (i < n - 1) {
            printf(" + ");
        }
        sum += fibonacci(i);
    }

    printf("\n        Sum = %lld\n", sum);

    return 0;
}
