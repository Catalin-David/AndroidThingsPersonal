const int sensor = A0;
const int pump = 6;
float humidity;
void setup() 
{
  // put your setup code here, to run once:
  pinMode(sensor, INPUT);
  pinMode(pump, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  humidity=analogRead(sensor);
  Serial.print("Humidity before: ");
  Serial.println(humidity);
  humidity=humidity/1023*5.0;
  Serial.print("Humidity after: ");
  Serial.println(humidity);
  if(humidity < 2) //check if humidity is over 70%
  {
    digitalWrite(pump, HIGH);
    Serial.println("Pump HIGH");
    //Serial.println(humidity);
  }
  else
  {
    digitalWrite(pump, LOW);
    Serial.println("Pump LOW");
    //Serial.println(humidity);
  }
  delay(1000);
}
