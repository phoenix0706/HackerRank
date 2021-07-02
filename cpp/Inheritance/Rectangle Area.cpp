
/*
 * Create classes Rectangle and RectangleArea
 */
 class Rectangle{
     public:
     int width;
     int height;
     void read_input(){
         cin>>width;
         cin>>height;
     }
     void display(){
         cout<<width<<" "<<height<<endl;
     }
  
 };
 class RectangleArea:public Rectangle{
     public:
     void display(){
         cout<<width*height;
     }
     
 };

