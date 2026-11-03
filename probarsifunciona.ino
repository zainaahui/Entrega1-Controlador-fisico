 void setup() {
  // Iniciamos la comunicación con la computadora a 9600 baudios
  Serial.begin(9600); 
  
  // Configuramos el pin 2 para el botón con la resistencia pull-up
  pinMode(2, INPUT_PULLUP); 
}

void loop() {
  // Leemos el estado del botón en el pin 2
  int estadoBoton = digitalRead(2); 
  
  // Leemos el valor del potenciómetro en el pin A0
  int valorPotenciometro = analogRead(A0); 

  // --- Parte 1: Imprimimos el estado del botón ---
  // Usamos Serial.print (sin 'ln' al final) para que el siguiente texto quede en la misma línea
  if (estadoBoton == LOW) {
    Serial.print("Botón: PRESIONADO   |   ");
  } else {
    Serial.print("Botón: Sin presionar|   ");
  }

  // --- Parte 2: Imprimimos el valor del potenciómetro ---
  Serial.print("Potenciómetro: ");
  // Aquí sí usamos Serial.println para que haya un salto de línea después del número
  Serial.println(valorPotenciometro); 
  
  // Una pausa de 100 milisegundos para que los datos sean legibles
  delay(100); 
}
