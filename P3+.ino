int led = 7;
int time = 20;

void setup() {
  pinMode(led,OUTPUT);
}
void loop() {
  for (int brightness = 0; brightness <= 255; brightness+=5)
  {
    analogWrite(led,brightness);
    delay(time);
  }
  for (int brightness = 255; brightness >= 0; brightness-=5)
  {
    analogWrite(led,brightness);
    delay(time);
  }
}