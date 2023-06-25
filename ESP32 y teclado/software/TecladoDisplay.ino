#include <Keypad.h>

const byte filas = 4;           // Número de filas del teclado matricial
const byte columnas = 4;        // Número de columnas del teclado matricial

// Definición de los caracteres correspondientes a las teclas del teclado matricial
char teclas[filas][columnas] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte pinFilas[filas] = {21, 19, 18, 5};       // Pines de las filas del teclado
byte pinColumnas[columnas] = {17, 16, 4, 15}; // Pines de las columnas del teclado

Keypad teclado = Keypad(makeKeymap(teclas), pinFilas, pinColumnas, filas, columnas);

void setup() {
  Serial.begin(9600);    // Inicializar la comunicación serial para mostrar los resultados

  // Configuración inicial
}

void loop() {
  char tecla = teclado.getKey();    // Leer la tecla presionada en el teclado matricial

  if (tecla) {
    Serial.print("Se presionó la tecla: ");
    Serial.println(tecla);          // Mostrar la tecla presionada en la consola serial
  }
  
  delay(100);                       // Pequeño retardo entre lecturas
}
