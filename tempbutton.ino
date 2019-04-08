int TMP36 = A0;
int button = 7;
int buttons = 0;
int time1  = 1000;
int reading = analogRead(TMP36);
float temperatureC;  
 float voltage;

void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT);
  }

void loop() {
    buttons = digitalRead(button);
  if(buttons == HIGH){
    
  Serial.print("temperature:");
  reading = analogRead(TMP36);  
  voltage = (reading * 5.0)/1024;
 temperatureC = (voltage - 0.5) * 100 ;
 Serial.print(temperatureC); Serial.println(" degrees C");
 delay(time1);
 if (temperatureC > 20){
   Serial.println("High temperature");
 delay(time1);
 }else
 {
  Serial.println("High temperature");
   Serial.println("Low temperature");
  delay(time1);
  }
  }
}
