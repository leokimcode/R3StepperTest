//defining pin numbers
//using step/dir 1, 3, 5, 7
const int step1 = 0;
const int step3 = 4;
const int step5 = 8;
const int step7 = 12;

const int dir1 = 1;
const int dir3 = 5;
const int dir5 = 9;
const int dir7 = 24;
 
void setup() 
{
  pinMode (step1, OUTPUT);
  pinMode (step3, OUTPUT);
  pinMode (step5, OUTPUT);
  pinMode (step7, OUTPUT);
  
  pinMode (dir1, OUTPUT);
  pinMode (dir3, OUTPUT);
  pinMode (dir5, OUTPUT);
  pinMode (dir7, OUTPUT);
}

void loop() 
{
  dirAllHigh();
  allMove(400); //two full rotations 

  delay(2000); //wait 2s

  dirAllLow();
  allMove(400); //two full rotations
  
  delay(1000);
}

/*Useful functions
 * dirAllHigh() sets direction pinds 1-4 to high
 * dirallLow() sets direction pinds 1-4 to low
 * allMove(int steps) moves all 4 in set direction for 'steps' number of steps, 200 steps = 360 deg
 */

void dirAllHigh()
{
  digitalWrite(dir1, HIGH);
  digitalWrite(dir3, HIGH);
  digitalWrite(dir5, HIGH);
  digitalWrite(dir7, HIGH);
}

void dirAllLow()
{
  digitalWrite(dir1, LOW);
  digitalWrite(dir3, LOW);
  digitalWrite(dir5, LOW);
  digitalWrite(dir7, LOW);
}

void allmove(int steps)
{
  for(int i = 0; i<steps; y++) //200 steps is 360 degs
  {
    digitalWrite(step1, HIGH);
    digitalWrite(step3, HIGH);
    digitalWrite(step5, HIGH);
    digitalWrite(step7, HIGH);

    delay(100);
    
    digitalWrite(step1, LOW);
    digitalWrite(step3, LOW);
    digitalWrite(step5, LOW);
    digitalWrite(step7, HIGH);

    delay(100);
  }
  
}
