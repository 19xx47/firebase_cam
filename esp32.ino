#define magsens_PIN 2
#define pir_PIN 14
int magnet_switch = LOW;
int val = 0;
int pir_val = LOW;

void setup() {
  Serial.begin(9600);
  pinMode(magsens_PIN,INPUT);
  pinMode(pir_Pin, INPUT);
}

void loop() {
  val = digitalRead(inputPin);
  if(digitalRead(magsens_PIN)==LOW && val == HIGH){
    magnet_switch = HIGH;
    pir_val = HIGH;
  }
  else{
    magnet_switch = LOW;
    pir_val = LOW;
  }
}
