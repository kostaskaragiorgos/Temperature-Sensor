int TMP36 = A0;
int time  = 1000;
int reading = analogRead(TMP36);
float temperatureC;  
 float voltage;

void setup() {
  Serial.begin(9600);
  }

void loop() {
  Serial.print("temperature:");
  reading = analogRead(TMP36);  
  voltage = (reading * 5.0)/1024;
 temperatureC = (voltage - 0.5) * 100 ;
 Serial.print(temperatureC); Serial.println(" degrees C");
 delay(time);
 if (temperatureC > 20){
   Serial.println("High temperature");
 delay(time);
 }else
 {
   Serial.println("Low temperature");
  delay(time);
  }
}
