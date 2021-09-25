#include<iostream>
using namespace std;

class Array2D{
    int rows,cols;
    int *element;
    public:
    Array2D(int r,int c){
        try{
            if(r<=0||c<=0){
                throw "Bad Initializers";
            }
        }
        catch(char const *str){
            cout<<str<<endl;
        }
        rows=r;
        cols=c;
        element=new int[r*c];
    }
    Array2D(const Array2D& m);
    ~Array2D(){
        delete []element;
    }
    void input(){
        for(int i=0;i<rows*cols;i++){
            cin>>element[i];
        }
    }
    int Rows()const{
        return rows;
    }
    int Cols()const{
        return cols;
    }
    int& operator()(int i,int j)const;
    friend istream& operator>>(istream& in,const Array2D& m);
    // friend ostream& operator<<(ostream& out,const Array2D& m);
};

Array2D::Array2D(const Array2D& m){
    rows=m.rows;
    cols=m.cols;
    element=new int[rows*cols];
    for(int i=0;i<rows*cols;i++){
        element[i]=m.element[i];
    }
}

int& Array2D::operator()(int i,int j)const{
    try{
        if(i<0||i>=rows||j<0||j>=cols)
        throw "Out of bound Exception";
    }
    catch(char const* str){
        cout<<str<<endl;
    }
    
    //row major
    int k=i*cols+j;
    //Column major
    // k=j*rows+i;
    return(element[k]);
}
// istream& operator>>(istream& in,Array2D& m){
//     for(int i=0;i<m.rows;i++){
//         for(int j=0;j<m.cols;j++){
//             in>>m(i,j);
//         }
//     }
//     return in;
// }
// ostream& operator<<(ostream& in,const Array2D& m){
//     for(int i=0;i<m.rows;i++){
//         for(int j=0;j<m.cols;j++){
//             out<<m(i,j);
//         }
//     }
//         return out;
// } 
int main(){
    // parametrised constructor
    Array2D ob(3,3);
    ob.input();
    int ele=ob(1,1);    
    cout<<ele<<endl;

    //Check the destructor
    // ob.~Array2D();
    // ele=ob(0,1);    
    // cout<<ele<<endl;

    //Copy constructor
    // Array2D ob1(ob);
    // ele=ob1(2,2);    
    // cout<<ele<<endl;
}