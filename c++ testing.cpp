int pinNum = 13;
void setup(){
  pinMode(pinNum, OUTPUT);
}
void a(){sh();ln();};void b(){ln();sh();sh();sh();};void c(){ln();sh();ln();sh();};void d(){ln();sh();sh();};void e(){sh();};void f(){sh();sh();ln();sh();};void g(){ln();ln();sh();};void h(){sh();sh();sh();sh();};void i(){sh();sh();};void j(){sh();ln();ln();ln();};void k(){ln();sh();ln();};void l(){sh();ln();sh();sh();};void m(){ln();ln();};void n(){ln();sh();};void o(){ln();ln();ln();};void p(){sh();ln();ln();sh();};void q(){ln();ln();sh();ln();};void r(){sh();ln();sh();};void s(){sh();sh();sh();};void t(){ln();};void u(){sh();sh();ln();};void v(){sh();sh();sh();ln();};void w(){sh();ln();ln();};void x(){ln();sh();sh();ln();};void y(){ln();sh();ln();ln();};void z(){ln();ln();sh();sh();};
void sh(){
  digitalWrite(pinNum,HIGH);
  delay(350);
  digitalWrite(pinNum,LOW);
  delay(300);
}
void ln(){
  digitalWrite(pinNum,HIGH);
  delay(700);
  digitalWrite(pinNum,LOW);
  delay(300);
}
void loop(){
  delay(1000);
}
