#include <Arduino.h>

void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.println("Rue de la paix");
    delay(3000);  // Affichage toutes les 3 secondes
}
