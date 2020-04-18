  int analogPin = A0;
int moisture;
int percentage;

int map_low = 686;
int map_high = 350;



void setup() {
  Serial.begin(9600);
}

void loop() {
  moisture = analogRead(analogPin);
  
  Serial.print("Raw: ");
  Serial.print(moisture);

  percentage = map(moisture, map_low, map_high, 0, 100);

  Serial.print(" | Percentage: ");
  Serial.print(percentage);

  Serial.println("%");

  if (percentage > 10){
    Serial.print("you have a heathy plant\n");
  }
  if (percentage < 9){
    Serial.print("your plant needs to drink some more water\n"); 
   }
  delay(1000);
}
