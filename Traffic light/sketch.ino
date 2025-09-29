int ledg=4;
int ledr=1;
int ledy=7;

void setup() {//تنفيذ مرة وحدة
  // put your setup code here, to run once:
pinMode(ledg, OUTPUT);
pinMode(ledr, OUTPUT);
pinMode(ledy, OUTPUT);

}

void loop() {//تنفيذ اكثر من مرة
  // put your main code here, to run repeatedly:
digitalWrite(ledg,HIGH);//high =1
delay(1000);//1s رح تضوي كل ثانية
digitalWrite(ledg,LOW);//low=0
delay(500);
digitalWrite(ledr,HIGH);//high =1
delay(1000);//1s رح تضوي كل ثانية
digitalWrite(ledr,LOW);//low=0
delay(500);
digitalWrite(ledy,HIGH);//high =1
delay(1000);//1s رح تضوي كل ثانية
digitalWrite(ledy,LOW);//low=0
delay(500);
}
