/*#include <Arduino.h>

const int ddd = 2;
const int dPin = 3;

static float Voc = 0.6;
const float K = 0.5;
void setup() {
  // put your setup code here, to run once:
  pinMode(dPin, OUTPUT);
  pinMode(ddd, OUTPUT);
  Serial.begin(115200);
  Serial.println(" ");
  Serial.println("DUST SENSOR TESTING");
  Serial.println("===================");
}

/*
void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(2, HIGH);
  digitalWrite(dPin, HIGH);
  delay(10000);
  digitalWrite(dPin, LOW);
  delay(280);

  double voltage = analogRead(A0);
  delay(40);
  digitalWrite(dPin, HIGH);
  Serial.printf("%f\n", voltage);

  double pm = ((voltage/1024)*3.6 - 0.5) * 170;
  Serial.println(voltage);
  Serial.println(pm);
  Serial.println("It working");


  digitalWrite(ddd, HIGH);
  delay(100);
  digitalWrite(ddd, LOW);
  delay(100);
} */
/*
void loop() {
  Serial.println("Start Working");
  digitalWrite(dPin, LOW);
  delayMicroseconds(280);

  int V0Raw = analogRead(A0);

  digitalWrite(dPin, HIGH);
  delayMicroseconds(9620);

  float Vo = V0Raw;

  Vo = (Vo / 1024) * 5;
  // printFValue("Vo", Vo*1000.0, "mV");
  Serial.print(">>> ");
  Serial.print(Vo);
  Serial.print("<<<< \n");
  delay(1000);

  float dV = Vo - Voc;
  if(dV < 0){
    dV = 0;
    Voc = Vo;
  }

  float dustDensity = dV / K * 100.0;
  // printFValue("DustDensity:", dustDensity, "ug/m3", true);
  Serial.print(" -- ");
  Serial.print(dustDensity);
  Serial.println(" ");

  if(dustDensity >= 0 && dustDensity <= 15.4)
{
  Serial.println("AQI - GOOD");
}

else if(dustDensity >= 15.5 && dustDensity <= 40.4)
{
  Serial.println("AQI - MODERATE");
}

else if(dustDensity >= 40.5 && dustDensity <= 65.4)
{
  Serial.println("AQI - USG");
}

else if(dustDensity >= 65.5 && dustDensity <= 150.4)
{
  Serial.println("AQI - UNHEALTHY!");
}

else if(dustDensity >= 150.5 && dustDensity <= 250.4)
{
  Serial.println("AQI - VERY UNHEALTHY");
}

else
{
  Serial.println("Don't live inside this Area!!!");
}

}
*/
