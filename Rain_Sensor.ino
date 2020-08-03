int rainA = 2;
int rainD = 15;
int nilaiRain = 0;
void setup(){
  Serial.begin(9600);
  pinMode(rainA,INPUT);
  pinMode(rainD,INPUT);
}
void loop(){
  nilaiRain = digitalRead(rainD);
  Serial.println(nilaiRain); 
}
