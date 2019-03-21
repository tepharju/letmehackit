// Huolimattomuuskytkin ja huomiovalo
// Topi 2019

void setup() {
  // Kerrotaan Arduinolle, että porttiin 2 on kytketty laite (nappi) josta tulee tietoa sisään (Input)
  pinMode(2, INPUT_PULLUP);
  // Kerrotaan Arduinolle, että porttiin 5 on kytketty laite (led), jota on tarkoitus ohjata.
  pinMode(5, OUTPUT);
}

void loop() {
  if(digitalRead(2)==HIGH){ // Jos "nappi" ei ole painettu, vilkutetaan lediä
    digitalWrite(5,HIGH);
    delay(100); 
    digitalWrite(5, LOW);
    delay(100);
    digitalWrite(5,HIGH);
    delay(100);
    digitalWrite(5, LOW); 
  }
  else {
    digitalWrite(5,LOW); // Jos "nappi" on painettuna, led ei vilku
  }
}
