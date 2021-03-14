
int flashLight=9;
int Siren=8;
int greenLight=11;
int redLight=10;
void setup()

{

pinMode(flashLight, OUTPUT);
pinMode(Siren, OUTPUT);
pinMode(greenLight, OUTPUT);
pinMode(redLight, OUTPUT);

Serial.begin(9600);

digitalWrite(flashLight,HIGH);
digitalWrite(greenLight,HIGH);
digitalWrite(redLight,HIGH);
digitalWrite(Siren,HIGH);





//Serial.println("Input 1 to Turn LED on and 2 to off");

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

Serial.println("Red Light On");}
if (state ==20){

digitalWrite(redLight, HIGH);

Serial.println("Red Light OFF");}


if (state ==30){

digitalWrite(greenLight, LOW);

Serial.println("Green Light On");}


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

Serial.println("Flash Light Off");}

if (state ==80){

digitalWrite(Siren, HIGH);

Serial.println("Flash Light Off");}

}

}
