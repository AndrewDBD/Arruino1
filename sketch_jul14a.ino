// Листинг 6.1
int r = 0;
void setup()
{
 randomSeed(analogRead(0));
 Serial.begin(9600);
}
void loop()
{
 Serial.print("Случайное число между 0 и 1000: ");
 r = random(0, 1001);
 Serial.println(r);
 Serial.print("Случайное число между 10 и 50: ");
 r = random(10, 51);
 Serial.println(r);
 delay(1000);
}