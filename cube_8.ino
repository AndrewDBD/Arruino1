void setup() {
  Serial.begin(115200);
  randomSeed(analogRead(0));  // начальное число для
  // генератора случайных чисел
  for (int z = 1; z < 7; z++)  // настроить контакты 1-6
  {                            // на работу в режиме выходов
    pinMode(z, OUTPUT);
  }
  delay(5000);
}


void randomLED(int del) {
  int r;
  r = random(1, 9);  // получить случайное число от 1 до 7
  Serial.println(r);
  colorLight(r, 1);  // включить соответствующий светодиод
  if (del > 0) {
    delay(del);  // оставить включенным в течение
  }              // указанного времени
  else if (del == 0) {
    do  // указана нулевая задержка, оставить
    {
    }  // светодиод включенным "навсегда"
    while (1);
  }
  colorLight(r, 0);
  ;  // выключить светодиод
}

void colorLight(int arg, int level) {
  if (arg == 1) {
    digitalWrite(11, level == 0 ? LOW : HIGH);
  } else if (arg == 2) {
    digitalWrite(12, level == 0 ? LOW : HIGH);
  } else if (arg == 3) {
    digitalWrite(13, level == 0 ? LOW : HIGH);
  } else if (arg == 4) {
    digitalWrite(12, level == 0 ? LOW : HIGH);
    digitalWrite(11, level == 0 ? LOW : HIGH);
  } else if (arg == 5) {
    digitalWrite(12, level == 0 ? LOW : HIGH);
    digitalWrite(13, level == 0 ? LOW : HIGH);
  } else if (arg == 6) {
    digitalWrite(13, level == 0 ? LOW : HIGH);
    digitalWrite(11, level == 0 ? LOW : HIGH);
  } else if (arg == 7) {
    digitalWrite(11, level == 0 ? LOW : HIGH);
    digitalWrite(12, level == 0 ? LOW : HIGH);
    digitalWrite(13, level == 0 ? LOW : HIGH);
  } else if (arg == 8) {

    digitalWrite(10, level == 0 ? LOW : HIGH);
  }
}

void loop() {
  int cube1;
  int a;
  // создать эффект выбора светодиода
  for (a = 0; a < 20; a++) {
    randomLED(150);
  }
  // постепенно замедлить эффект
  for (a = 1; a <= 10; a++) {
    randomLED(a * 100);
  }
  // и остановиться на случайно выбранном светодиоде
  randomLED(0);
}
