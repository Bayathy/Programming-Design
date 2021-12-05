#include <cstddef>
class Vector {
    private:
        double* vec;
        size_t _size;
    public:
        Vector(size_t s=0){
            vec = nullptr;
            _size = s;
            vec = new double[_size];
        }
        Vector(const Vector& v){
            _size = v._size;
            vec = new double[_size];
            for (int i = 0; i < v._size; i++){
                vec[i] = v.vec[i];
            }
        }
        Vector& operator=(const Vector& v){
            if(this == &v){
                delete[] vec; 
                vec = new double[v._size];
                for (int i = 0; i < v._size; i++){
                    vec[i] = v.vec[i];
                }
            }
            return *this;
        }
        ~Vector(){ 
            delete[] vec;
        }
        size_t size() {
            return _size;
        }
        double& operator[](size_t i){
            return vec[i];
        }
};

int main()
{
    Vector vec1(10);
    for(size_t i = 0; i < vec1.size(); i++)
        vec1[i] = i;
        
    Vector vec2 = vec1;
    Vector vec3;
    vec3 = vec1;
}