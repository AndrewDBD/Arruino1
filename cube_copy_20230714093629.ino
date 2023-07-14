// Листинг 6.1
int cube1 = 0;
int cube2 = 0;
String output = "";
void setup() {
  randomSeed(analogRead(0));
  Serial.begin(9600);
}
void loop() {
  Serial.print("бросаем первый кубик:");
  cube1 = random(1, 7);
  Serial.println(cube1);
  delay(1500);
  Serial.print("бросаем второй кубик:");
  cube2 = random(1, 7);
  Serial.println(cube2);
  delay(1500);
  Serial.print("сумма кубиков равна ");
  Serial.println(cube1 + cube2);
  Serial.println("====================================================================\n");
  delay(3000);
}
