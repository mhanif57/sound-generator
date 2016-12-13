/*MELODI INDONESIA RAYA*/

int speaker=3;
void setup() {
 // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
mi(); delay(400); diam();delay(50);
fa(); delay(200); diam();delay(50);
sol(); delay(300); diam();delay(400);
mii(); delay(800); diam();delay(100);

mi(); delay(200); diam();delay(50); 
re(); delay(330); diam();delay(50);
re(); delay(270); diam();delay(50);
doo(); delay(550); diam();delay(50);
sol(); delay(600); diam();delay(527);

sol(); delay(300); diam();delay(70);
sol(); delay(270); diam();delay(30);
la(); delay(650); diam();delay(80);

sol(); delay(500); diam();delay(80);
fa(); delay(500); diam();delay(100);
mi(); delay(500); diam();delay(50);
re(); delay(800); diam();delay(1000);


 
}

void diam()
{noTone(speaker);}

void doo()
{tone(speaker, 262);}

void re()
{tone(speaker, 294);}

void mi()
{tone(speaker, 330);}

void fa()
{tone(speaker,349 );}
void sol()
{tone(speaker,395 );}
void la()
{tone(speaker,440 );}
void si()
{tone(speaker, 495);}

void mii()
{tone (speaker,659);}

