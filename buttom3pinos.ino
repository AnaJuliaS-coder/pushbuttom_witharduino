//   Projeto 5 - Interruptor de luz
//int counter = 1; 
int botaovalue1 = 0;
int botaovalue2 = 0;
int botaovalue3 = 0; 
int botao1 = 6;
int botao2 = 4;
int botao3 = 2;
int led = 13;
bool estadoLed = 0;
char comma = ', ';
 
void setup()
{
  pinMode(botao1, INPUT_PULLUP); 
  pinMode(botao2, INPUT_PULLUP);
  pinMode(botao3, INPUT_PULLUP);// define o pino do botao como entrada "INPUT"
  //pinMode(led, OUTPUT);
  Serial.begin(9600);
}
 
void loop()
{
  //if(digitalRead(botao1) == LOW) // Se o botão for pressionado
  //{
    //estadoLed = !estadoLed; // troca o estado do LED
    //digitalWrite(led, HIGH); //estadoLed);
//
    //while(digitalRead(botao) == LOW);      
  //}  

//  if (counter >= 4) {
//    digitalWrite(led, LOW);
//    counter = 0;
//  }
  botaovalue1 = digitalRead(botao1);
  Serial.print("botvl:");
  Serial.print(botaovalue1);
  Serial.print(comma);
  botaovalue2 = digitalRead(botao2);
  Serial.print("botv2:");
  Serial.print(botaovalue2);
  Serial.print(comma);
  botaovalue3 = digitalRead(botao3);
  Serial.print("botv3:");
  Serial.print(botaovalue3);
  //Serial.print(comma);
  //Serial.print("cont:");
  //Serial.print(counter);
  Serial.print("\n");
  delay(100);
}
