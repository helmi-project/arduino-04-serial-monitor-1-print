/*
   TUTORIAL SERIAL MONITOR 1
*/

int x = 1;
   
void setup() {
  Serial.begin(115200);//memulai inisiasi komunikasi serial dengan baud rate 115200 bps
  Serial.println("Mencoba Serial Monitor");
}

void loop() {
  Serial.print("Ini loop ke : ");
  Serial.println(x);
  x++;
  delay(2000);
}
