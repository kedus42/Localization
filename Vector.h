#include <cmath>
template <typename T>
class Vector{
    public:
        T data[2];
        int position;
        Vector(){
            position= 0;
        }
        Vector(T a, T b){
            data[0]=a;
            data[1]=b;
            position=2;
        }
        void push_back(T a){
            data[position]=a;
            position++;
        }
        T dot(Vector a, Vector b){
            Vector result(a[0]*b[0], a[1]*b[1]);
            T rresult;
            int i=0;
            i=1;
            while(i<a.position){
                rresult=result[i-1]+result[i];
                i++;
            }
            return rresult;
        }
        float cross(Vector a, Vector b){
            return a.data[0]*b.data[1]-a.data[1]*b.data[0];
        }
        int size(){
            return position;
        }
        T operator [](int idx){
            return data[idx];
        }
        Vector operator -(Vector A){
            int i=0;
            Vector result;
            while(i<position){
                result.data[i]=this->data[i]-A.data[i];
                i++;
            }
            result.position=this->position;
            return result;
        }
        Vector operator +(Vector A){
            int i=0;
            Vector result;
            while(i<position){
                result.data[i]=this->data[i]+A.data[i];
                i++;
            }
            result.position=this->position;
            return result;
        }
        void operator =(Vector A){
            int i=0;
            while(i<this->position){
                this->data[i]=A.data[i];
                i++;
            }
            this->position=A.position;
        }
        void rotate(float a){
            float x;
            x=data[0]*cos(a)-data[1]*sin(a);
            data[1]=data[0]*sin(a)+data[1]*cos(a);
            data[0]=x;
        }
        void normalize(){
            int i=0;
            float norm=sqrt(data[0]*data[0]+data[1]*data[1]);
            while(i<position){
                data[i]=data[i]/norm;
                i++;
            }
        }
};