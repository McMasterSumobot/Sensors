#define IR 8 //define what pin the sensor is connected to on the Arduino Nano

void setup() {
  // put your setup code here, to run once:
  pinMode(IR, INPUT);  //define this pin as an INPUT
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val;  //create a variable or container that holds integers
  
  val = digitalRead(IR);  //save the value gotten from the sensor in our variable that holds integers

  Serial.println(val);  //print out the value saved in our variable on the Serial monitor 
}
