#include <stdio.h>

int main() {
int appointment, doctorAvailable,r_completed;

printf("Appointment completed? 0 for NO, 1 for YES: ");
scanf("%d",&appointment);

printf("Doctor Available? 0 for NO, 1 for YES: ");
scanf("%d",&doctorAvailable);

printf("Registration completed? o for NO, 1 for YES: ");
scanf("%d",&r_completed);

if(appointment == 1){
    if(doctorAvailable == 1 && r_completed == 1){
        printf("You can meet the doctor");}

    else printf("You can't meet the doctor");
    }
else printf("Can't meet the doctor");

}