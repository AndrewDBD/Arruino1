#define BUTTON 8
int d = 1500;
int dd = 5;

// Проект 1 - Эффект бегущей волны из светодиодов
void setup() {
  pinMode(9, OUTPUT);
  pinMode(0, INPUT);
  pinMode(BUTTON, INPUT);
  Serial.begin(115200);
  pinMode(13, OUTPUT);           // настроить контакты,
  pinMode(LED_BUILTIN, OUTPUT);  // управляющие светодиодами,
  pinMode(3, OUTPUT);            // на работу в режиме
  delay(500);                    // ждать полсекунды
  Serial.println("Hello Kitty!");
  Serial.print("Мяу!");
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  //  pinMode(13, OUTPUT);
  digitalWrite(2, LOW);
  digitalWrite(BUTTON, LOW);
  digitalWrite(9, LOW);
}
void loop() {

  Serial.println("digitalRead = HIGH");
  //for (int a = 2; a < 7; a++) {
  for (int a = 0; a < 256; a++) {
    if (digitalRead(BUTTON) == HIGH && digitalRead(0) == LOW) {
      analogWrite(13, a);
      delay(dd);
    }
        else
    {
      analogWrite(13, 0);
    }
  }
  for (int a = 255; a >= 0; a--) {
    if (digitalRead(BUTTON) == HIGH && digitalRead(0) == LOW) {
      analogWrite(13, a);
      delay(dd);
    }
        else
    {
      analogWrite(13, 0);
    }
  }
  delay(200);
  /*
    digitalWrite(13, HIGH);
    Serial.println("включил светодиод внешн.");  // Включить светодиод 1
    delay(d);                                    // ждать полсекунды
    digitalWrite(13, LOW);
    Serial.println("выключил светодиод внешн.");  // Выключить светодиод 1
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("включил светодиод внутренн.");  // и повторить то же самое
    delay(d);                                       // для светодиодов со 2-го по 5-й
    */

  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("выключил светодиод внутренн.");
  for (int a = 0; a < 256; a++) {
    if (digitalRead(BUTTON) == HIGH && digitalRead(0) == LOW) {
      analogWrite(3, a);
      delay(dd);
    }
        else
    {
      analogWrite(3, 0);
    }
  }
  for (int a = 255; a >= 0; a--) {
    if (digitalRead(BUTTON) == HIGH && digitalRead(0) == LOW) {
      analogWrite(3, a);
      delay(dd);
    }
    else
    {
      analogWrite(3, 0);
    }
  }
  delay(200);
  /* digitalWrite(3, HIGH);
    Serial.println("включил светодиод 3.");
    delay(d);
    digitalWrite(3, LOW);
    Serial.println("выключил светодиод 3.");
    delay(d);
    */
  if (digitalRead(BUTTON) == HIGH && digitalRead(0) == LOW) {
    digitalWrite(4, HIGH);
  }
      else
    {
     digitalWrite(4, LOW);
    }
  Serial.println("выключил светодиод 4.");
  delay(d);
  digitalWrite(4, LOW);
  Serial.println("выключил светодиод 4.");
  //}

}
