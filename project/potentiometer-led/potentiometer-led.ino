float entrada;
int led=13;
float saida;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop()
{
  entrada = analogRead(A0);
  saida = map(entrada, 0,1023,0,255);
  analogWrite(led, saida);
  Serial.print("Entrada: ");
  Serial.print(entrada);
  Serial.print("Saida: ");
  Serial.println(saida);
  delay(1000);
}