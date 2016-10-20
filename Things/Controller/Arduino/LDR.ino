#define CDS_INPUT A0
int LED_Value = 3; 

void setup() {
  Serial.begin(9600);
  pinMode(LED_Value, OUTPUT);
}

void loop() {

  int value = analogRead(CDS_INPUT);
  if(value < 50)
  {
    digitalWrite(LED_Value, HIGH);
   }
   else
   {
    digitalWrite(LED_Value, LOW);
    }
  Serial.println(value);

  delay(1000);
}
