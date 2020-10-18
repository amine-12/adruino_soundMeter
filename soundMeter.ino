void setup() {
  pinMode(A0, INPUT);
  for(int z = 0; z < 10; z++){
    pinMode(z, OUTPUT);
  }
}
void loop() {
  int volume = analogRead(A0);
  volume = map(volume, 0, 700, 0, 10);
  for(int a = 0; a < 10; a++){  
   if(volume >= a){
    digitalWrite(a, HIGH);
   }else{
    digitalWrite(a, LOW);
   }
}
}
