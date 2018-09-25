String comdata ="";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()>0){
    comdata+=char(Serial.read());
    delay(2);
  }
  if(comdata.length()>0&&comdata =="I am Gonzalo Han"){
    Serial.println("OK");
  }
  comdata="";
}
