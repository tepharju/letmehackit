//Itse tehty äänen nopeusmittari ver. 1.0
// Teppo Harju 2019

#define echoPin 7
#define trigPin 8

float aika;  //long on Arduinon muuttujatyyppi suurten lukujen tapauksiin
float etaisyys = 10 ; // Etäisyys kohteeseen määritelleen alussa 0.1 m
float nopeus;

void setup() {
  Serial.begin(9600); // Avaa portin 9600 
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);

}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2000);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  aika = pulseIn(echoPin, HIGH);

  nopeus = 2*etaisyys*10/aika*1000;
  Serial.print("Äänen nopeus on: ");
  Serial.print(nopeus);
  Serial.println(" m/s");

  //etaisyys = aika/58,2;  //Tämä antaa etäisyyden cm. 

  //nopeus = 2*(etaisyys*100) / (aika * 100);

  //Serial.println(etaisyys);
  //Serial.println(nopeus);

  delay(50);  //odottaa 50 miilisekuntia
}
