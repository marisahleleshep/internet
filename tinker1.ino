//TRAFFIC LIGHT 1 
int red1 = 10;
//means exactly to stop,
//the red led light at the same time with the green light at the other side people to stop
int yellow1 = 9;
//to slow down
//the yellow led light at the same time after the green and the red one
int green1 = 8;
//means driving a head 
//the green led is the fast one to light after the red led
// traffic light 2 //
int red2 = 13;
int yellow2 = 12;
int green2 = 11;
void setup (){
  //light1//here we do any setup required before begining
  pinMode (red1, OUTPUT);
  pinMode (yellow1, OUTPUT);
  pinMode (green1, OUTPUT);
   //light2
  pinMode (red2, OUTPUT);
  pinMode (yellow2, OUTPUT);
  pinMode (green2, OUTPUT);
}
void loop () {
  changeLights ();
  delay(10000);
}
  void changeLights () {
    //both yellow turns on//here we give them directions on which one to light fast giving others space
    digitalWrite(green1, LOW);
    digitalWrite(yellow1, HIGH);
    digitalWrite(yellow2, HIGH);
    delay(7000);
    //TURNS OFF BOTH YELLOW AND TURNS ON RED1 AND GREEN2//
    digitalWrite(yellow1, LOW);
    digitalWrite(red1, HIGH);
    digitalWrite(yellow2, LOW);
     digitalWrite(red2, LOW);
    digitalWrite(green2, HIGH);
    delay(7000);
      //both of the yellow lights turns on
        digitalWrite(yellow1, HIGH);
    digitalWrite(yellow2, HIGH);
    digitalWrite(green2, LOW);
    delay(3000);
       //turns off both yellow light and turns on green1 and red2
      digitalWrite(green1, HIGH);
    digitalWrite(yellow1, LOW);
    digitalWrite(red1, LOW);
     digitalWrite(yellow2, LOW);
    digitalWrite(red2, HIGH);
    delay(7000);
  }
