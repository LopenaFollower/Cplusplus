void setup(){
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}
int d=1000;
int colormap[7][3]={{255,0,0},{0,255,0},{0,0,255},{255,255,0},{255,0,255},{0,255,255},{255,255,255}};
void loop(){
  for(int i=0;i<7;i++){
    digitalWrite(11,colormap[i][0]);
    digitalWrite(10,colormap[i][1]);
    digitalWrite(9,colormap[i][2]);
    delay(d);
    digitalWrite(11,0);
    digitalWrite(10,0);
    digitalWrite(9,0);
    delay(d);
  }
}