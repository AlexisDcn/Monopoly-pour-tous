#include <Arduino.h>

// Définition des pins pour les boutons
const int buttonPins[12] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
const char* messages[12] = {
    "Départ", //button 1 pressed
    "Boulevard de Belleville",//button 2 pressed
    "Avenue de la Republique",//button 3 pressed
    "En prison/ Visite simple",//button 4 pressed
    "Boulevard de la Villette",//button 5 pressed
    "Place Pigalle",//button 6 pressed
    "Parc gratuit",//button 7 pressed
    "Avenue Matignon",//button 8 pressed
    "Rue la Fayette",//button 9 pressed
    "Allez en prison",//button 10 pressed
    "Avenue de Breteuil",//button 11 pressed
    "Rue de la paix"//button 12 pressed
};

void setup() {
    Serial.begin(9600);
    // Configuration des pins en entrée
    for (int i = 0; i < 12; i++) {
        pinMode(buttonPins[i], INPUT);
    }
}

void loop() {
    for (int i = 0; i < 12; i++) {
            Serial.println(messages[i]);  // Affiche le message correspondant
            delay(2000); // Délai pour éviter les rebonds
        // if (digitalRead(buttonPins[i]) == HIGH) {
        //     Serial.println(messages[i]);  // Affiche le message correspondant
        //     delay(500); // Délai pour éviter les rebonds
        // }
    }
}
