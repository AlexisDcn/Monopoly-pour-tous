import serial
import pyttsx3

# Initialisation de la synthèse vocale
engine = pyttsx3.init()

# Ouverture du port série (assurez-vous que le bon port est sélectionné)
ser = serial.Serial('COM3', 9600, timeout=1)  # Remplacez 'COM3' par le port utilisé par votre Arduino

try:
    while True:
        if ser.in_waiting > 0:
            # Lecture de la ligne venant de l'Arduino
            line = ser.readline().decode('utf-8').strip()
            if line:  # Si la ligne n'est pas vide
                print(line)  # Affichage dans la console

                # Lecture vocale du texte
                engine.say(line)
                engine.runAndWait()
except KeyboardInterrupt:
    print("Programme terminé.")
finally:
    ser.close()

#pour lire le serial il faut executer la ligne suivante dans le gitBash: python serial_reader.py
