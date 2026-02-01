#include <stdio.h>

int main() {

    /*
    =====================================================
    ELSE IF LADDER
    =====================================================

    ▶ Definition:
        The else-if ladder is used to check
        MULTIPLE conditions sequentially.

    ▶ How it works:
        - Conditions are evaluated from TOP to BOTTOM
        - The FIRST condition that is TRUE will execute
        - All remaining conditions are SKIPPED

    ▶ Important rules:
        - Only ONE block can run
        - The else block runs if ALL conditions are false
    */

    int speedOfCar;

    printf("Enter the speed of the car (km/h): ");
    scanf("%d", &speedOfCar);

    /*
    ▶ Real-life example:
        Highway lane assignment based on vehicle speed
    */

    if (speedOfCar == 0) {
        printf("Lane 1 - Stopped vehicle\n");
    }
    else if (speedOfCar > 0 && speedOfCar <= 100) {
        printf("Lane 2 - Normal speed\n");
    }
    else if (speedOfCar > 100 && speedOfCar <= 120) {
        printf("Lane 3 - High speed\n");
    }
    else if (speedOfCar > 120) {
        printf("Lane 4 - Overspeeding\n");
    }
    else {
        printf("Invalid speed input\n");
    }

    /*
    ▶ Program ends here
    */
    return 0;
}
