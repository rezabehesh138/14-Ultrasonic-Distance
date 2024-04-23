#define BUZZER_PIN  8
#define BTN_PIN     7
  
void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(BTN_PIN, INPUT_PULLUP);
}
  
void loop() {
  if(digitalRead(BTN_PIN))
  {
    digitalWrite(BUZZER_PIN, LOW);
  }
  else
  {
    digitalWrite(BUZZER_PIN, HIGH);
  }
}