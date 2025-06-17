#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>  // For Sleep and system("cls")

void digitalClock() {
    while (1) {
        time_t t;
        struct tm *currentTime;

        t = time(NULL);
        currentTime = localtime(&t);

        system("cls");
        printf("\n\n\t\tDigital Clock\n");
        printf("\t\t================\n");
        printf("\t\t%02d:%02d:%02d\n",
               currentTime->tm_hour,
               currentTime->tm_min,
               currentTime->tm_sec);

        printf("\n\t\tPress Ctrl+C to return to menu...\n");
        Sleep(1000);
    }
}

void countdownTimer() {
    int seconds;

    printf("\nEnter countdown time in seconds: ");
    scanf("%d", &seconds);

    for (int i = seconds; i >= 0; i--) {
        system("cls");
        printf("\n\n\t\tCountdown Timer\n");
        printf("\t\t================\n");
        printf("\t\tTime Left: %02d:%02d\n", i / 60, i % 60);
        Sleep(1000);
    }

    printf("\n\n\t\tTime's up!\n");
    Sleep(2000);  // Pause before returning to menu
}

int main() {
    int choice;

    while (1) {
        system("cls");
        printf("\n\n\t\tMENU\n");
        printf("\t\t====\n");
        printf("\t\t1. Digital Clock\n");
        printf("\t\t2. Countdown Timer\n");
        printf("\t\t3. Exit\n");
        printf("\n\t\tEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                digitalClock();
                break;
            case 2:
                countdownTimer();
                break;
            case 3:
                exit(0);
            default:
                printf("\n\t\tInvalid choice. Try again.\n");
                Sleep(2000);
        }
    }

    return 0;
}
