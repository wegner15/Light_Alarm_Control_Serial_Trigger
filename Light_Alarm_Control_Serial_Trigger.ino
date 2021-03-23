int flashLight=9;
int Siren=8;
int greenLight=11;
int redLight=10;
void setup(){
Serial.begin(9600);
pinMode(flashLight, OUTPUT);
pinMode(Siren, OUTPUT);
pinMode(greenLight, OUTPUT);
pinMode(redLight, OUTPUT);
digitalWrite(flashLight,HIGH);
digitalWrite(greenLight,HIGH);
digitalWrite(redLight,HIGH);
digitalWrite(Siren,HIGH);
}

void loop() {
Serial.println("Siren=70,ON 80, OFF");
Serial.println("redlight=10,ON 20, OFF");
Serial.println("redlight=10,ON 20, OFF");
Serial.println("Siren=70,ON");
Serial.println("Siren=70,ON");
if (Serial.available()>0){
int state=Serial.parseInt();
  if (state ==10){
digitalWrite(redLight, LOW);
digitalWrite(greenLight, HIGH);
Serial.println("Red Light On");
Serial.println("Green Light Off");}

if (state ==20){
digitalWrite(redLight, HIGH);
Serial.println("Red Light OFF");}

if (state ==30){
digitalWrite(greenLight, LOW);
digitalWrite(redLight, HIGH);
Serial.println("Green Light On");
Serial.println("Green Light Off");}

if (state ==40){
digitalWrite(greenLight, HIGH);
Serial.println("Green Light OFF");}

if (state ==50){
digitalWrite(flashLight, LOW);
Serial.println(" Flash Light On");}

if (state ==60){
digitalWrite(flashLight, HIGH);
Serial.println("Flash Light Off");}

if (state ==70){
digitalWrite(Siren, LOW);
digitalWrite(flashLight, LOW);
Serial.println("Siren On");
delay(3000);
digitalWrite(Siren, HIGH);
}

if (state ==80){
digitalWrite(Siren, HIGH);
Serial.println("Siren Off");}

}

}
