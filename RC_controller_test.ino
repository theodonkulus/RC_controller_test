

int ch1; // Here's where we'll keep our channel values
int ch2;
int ch3;
int ch4;
int ch5;
int ch6;

void setup() {
  // put your setup code here, to run once:
  pinMode(4, INPUT); //Elev
  pinMode(5, INPUT); //Rudd
  pinMode(6, INPUT); //Gear 
  pinMode(7, INPUT); //AUX1 
  pinMode(3, INPUT); //Aile
  pinMode(2, INPUT); //Throt

  Serial.begin(9600); // Pour a bowl of Serial
}

void loop() {
  // put your main code here, to run repeatedly:
  ch1 = pulseIn(2, HIGH, 25000);//throt
  ch2 = pulseIn(3, HIGH, 25000);//Aile
  ch3 = pulseIn(4, HIGH, 25000);//Elev
  ch4 = pulseIn(5, HIGH, 25000);//Rudd
  ch5 = pulseIn(6, HIGH, 25000);//Gear
  ch6 = pulseIn(7, HIGH, 25000);//AUX1

   Serial.print("Ch1:");
  //Serial.println(ch1); //  
  Serial.println(map(ch1, 1000,2000,-500,500)); // center at 0

  Serial.print("Ch2:"); // 
  //Serial.println(ch2);
  Serial.println(map(ch2, 1000,2000,-500,500)); // center at 0

  Serial.print("CH3:"); //  
  //Serial.println(ch3);
  Serial.println(map(ch3, 1000,2000,-500,500)); // center at 0

  Serial.print("Ch4:"); // 
  //Serial.println(ch4);
  Serial.println(map(ch4, 1000,2000,-500,500)); // center at 0

  Serial.print("CH5:"); //  
  //Serial.println( ch5);
  Serial.println(map(ch5, 1000,2000,-500,500)); // center at 0

  Serial.print("Ch6:"); // 
  //Serial.println(ch6);
  Serial.println(map(ch6, 1000,2000,-500,500)); // center at 0
  
  
  Serial.println(); //make some room
  delay(100);// I put this here just to make the terminal 
           // window happier
}
