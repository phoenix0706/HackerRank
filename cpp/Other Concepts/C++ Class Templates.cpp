

/*Write the class AddElements here*/

struct Optimizer{
    Optimizer(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    }
};
Optimizer opt;
template <class T>
class AddElements{
    private :
    T a;
    public :
    AddElements(T &b){
        a=b;
        
    }
    const T& add(T &n){
        a=a+n;
        return a;
    }
    
};
template<>
class AddElements<string>{
    private:
    string a;
    public :
    AddElements(string & b){
        a=b ;
    }
    const string &concatenate(string & s){
        a.append(s);
        return a;
   
    }
};
