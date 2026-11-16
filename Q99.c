#include <stdio.h>

int main() {
    int dd, mm, yyyy;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    char *month[] = {
        "", "Jan", "Feb", "Mar", "Apr",
        "May", "Jun", "Jul", "Aug",
        "Sep", "Oct", "Nov", "Dec"
    };

    if(mm >= 1 && mm <= 12) {
        printf("%02d-%s-%04d", dd, month[mm], yyyy);
    }
    else {
        printf("Invalid month");
    }

    return 0;
}