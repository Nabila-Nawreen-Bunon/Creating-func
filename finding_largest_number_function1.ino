// C++ code
//
int findMax(int a,int b,int c);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0){
  int n1=Serial.parseInt();
  int n2=Serial.parseInt();
  int n3=Serial.parseInt();
  int MaxNum=findMax(n1,n2,n3);
  Serial.print(MaxNum);
  }}
int findMax(int a,int b,int c){
  if(a>b&&a>c){
    return a;
  }
  else if(b>a&&b>c){
    return b;
  }
  else if(c>a&&c>b){
 return c;
  }}
  
    
