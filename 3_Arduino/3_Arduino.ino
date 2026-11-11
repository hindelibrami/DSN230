#include <Adafruit_CircuitPlayground.h>

void setup() {

  CircuitPlayground.begin(); // Initialise le CircuitPlayground

  Serial.begin(115200); // Démarre la communication avec le Serial Monitor
}

void loop() {

  // Variable qui stocke le niveau sonore détecté
  int niveauSon = CircuitPlayground.mic.soundPressureLevel(200);

  // Intensité sonore basse
  if (niveauSon <= 68) {
    CircuitPlayground.setBrightness(30); // Luminosité basse

    for (int i = 0; i < 10; i++) {
      CircuitPlayground.setPixelColor(i,120,200,255); // Bleu pâle
    }
  }

  // Intensité sonore moyenne
    else if (niveauSon <= 76) {
      CircuitPlayground.setBrightness(75); // Luminosité moyenne

      for (int i = 0; i < 10; i++) {
        CircuitPlayground.setPixelColor(i,1,255,255); // Bleu moyen
      }
    }
    // Intensité sonore élevée 
    else {
      CircuitPlayground.setBrightness(200); // Luminosité élevée

      for (int i = 0; i < 10; i++ ) {
        CircuitPlayground.setPixelColor(i,0,0,255); // Bleu foncé
      }
    }

  Serial.println(niveauSon); // Affiche les valeurs du niveau sonore dans le Serial Monitor

  delay(100); 
  
}


