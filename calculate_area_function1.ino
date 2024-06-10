// C++ code
//
float calculateArea(float length,float B);

void setup()
{
  Serial.begin(9600);

}

void loop()
{
  if(Serial.available()>0){
    float length=Serial.parseFloat();
    float B=Serial.parseFloat();
    if(length>0&&B>0){
      float area=calculateArea(length,B);
      Serial.print(area);
     
    }
    else{"Invalid Input";
    
        }}}
  float calculateArea(float length,float B){
    return length*B;
    
}