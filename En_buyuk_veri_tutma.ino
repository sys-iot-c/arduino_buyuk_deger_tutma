


int pot = A0;
int tepe = 0;
int cukur = 0;


void setup() {
  Serial.begin(115200);

  pinMode(pot, INPUT);

}

void loop() {


  pot = analogRead(pot); // pot okudu


  if (pot > tepe) {

    tepe=max(pot, cukur); // en büyühünü gösterdi
    cukur = pot; // önceki degeri yeniledi
  }


Serial.println(tepe);



if(pot <10)
{
  tepe=0;  //veri 10'dan küçük ise sıfırlanır.
}



}
