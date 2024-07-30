#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Definir el tamaño de la pantalla OLED
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32

// Crear una instancia de la pantalla
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  // Iniciar la comunicación serie para depuración
  Serial.begin(115200);

  // Iniciar la pantalla OLED
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }

  // Limpiar el buffer
  display.clearDisplay();

  // Configurar el texto
  display.setTextSize(1);      
  display.setTextColor(SSD1306_WHITE);  
  display.setCursor(0,0);     
  
  // Mostrar texto
  display.println(F("Hola Mundo!"));
  display.display();   
}

void loop() {
  // No se necesita hacer nada en el loop para este ejemplo
}

