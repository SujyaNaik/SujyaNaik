#include<stdio.h>

void move(int n, char sourceshaft, char intermediate, char destination) 
{
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", sourceshaft, destination);
        return;
    }
    move(n - 1, sourceshaft, destination, intermediate);
    printf("Move disk %d from rod %c to rod %c\n", n, sourceshaft, destination);
    move(n - 1, intermediate, sourceshaft, destination);
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    printf("The sequence of moves involved in the Tower of Hanoi are:\n");
    move(n, 'A', 'B', 'C');
    return 0;
}

