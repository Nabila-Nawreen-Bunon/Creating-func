// C++ code
//
int isPrime(int n);
void setup()
{
  Serial.begin(9600);
  int num=20;
  int m=isPrime(num);
  Serial.print(m);
  

}

void loop()
{
  
}
int isPrime(int n){
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
      Serial.print("Not a Prime num.");
    }}
    
      Serial.print("A Prime Num");
  
}