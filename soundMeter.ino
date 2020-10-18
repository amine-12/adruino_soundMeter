void setup() {
  pinMode(A0, INPUT);
  for(int z = 0; z < 10; z++){
    pinMode(z, OUTPUT);
  }
}
void loop() {
  int volume = analogRead(A0);
  //max value for analog read is 1023 but it must be very very loud to reach this value
  //so I lower it down in map function to 700
  //mapping volume value to make it easier to turn LEDs on
  volume = map(volume, 0, 700, 0, 10);
  for(int a = 0; a < 10; a++){  
   if(volume >= a){
   //if it is bigger we can turn on the LED
    digitalWrite(a, HIGH);
   }else{
   //if it is smaller we can turn the LED off
    digitalWrite(a, LOW);
   }
}
}
