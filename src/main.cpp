/*
Projet: main.cpp robo swag
Equipe: P2
Auteurs: Jessy, RAJOUTER VOS CNOMS ICI
Description: Code epreuve du combattant
Date: Aujourd'hui lmao
*/

/* ****************************************************************************
Inclure les librairies de functions que vous voulez utiliser
**************************************************************************** */

#include <LibRobus.h>  // Pour utiliser RobUS


void setup() {
    BoardInit(); // Balls XD
}

void loop() {
    int u1 = analogRead(A1);
    int u2 = analogRead(A2);
    int u3 = analogRead(A3);

    if (u2 > 400) {
        MOTOR_SetSpeed(LEFT, 0.2);
        MOTOR_SetSpeed(RIGHT, 0.2);
    } else if (u1 > 400) {
        MOTOR_SetSpeed(LEFT, 0.1);
        MOTOR_SetSpeed(RIGHT, 0.4);
    } else if (u3 > 400) {
        MOTOR_SetSpeed(LEFT, 0.4);
        MOTOR_SetSpeed(RIGHT, 0.1);
    }
}
