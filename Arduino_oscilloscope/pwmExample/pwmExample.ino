
//https://www.youtube.com/watch?v=kzVXf_oiHeE
#define led 13
#define pwm 3


void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(pwm, OUTPUT);

  // turn on analogWrite()
  // PWM at 50% duty cycle
  // ha ha. I wrote "cycle"
  analogWrite(pwm, 128);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(100);
  digitalWrite(led, LOW);
  delay(100);
}
