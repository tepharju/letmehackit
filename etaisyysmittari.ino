//Itse tehty etäisyysmittari ver. 1.0
// Teppo Harju 2019

#define echoPin 7
#define trigPin 8

long aika;  //long on Arduinon muuttujatyyppi suurten lukujen tapauksiin
long etaisyys;
long nopeus;

void setup() {
  Serial.begin(9600); // Avaa portin 9600 
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);

}

void loop() {
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  aika = pulseIn(echoPin, HIGH);

  etaisyys = aika/58,2;  //Tämä antaa etäisyyden cm. 

  //nopeus = 2*(etaisyys*100) / (aika * 100);

  Serial.println(etaisyys);
  //Serial.println(nopeus);

  delay(50);  //odottaa 50 miilisekuntia
}
