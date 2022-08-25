#include"genericArray.cpp"



int main() {
    coordenada* co;
    genericArray<coordenada,9>* genArr = new genericArray<coordenada,9>;
    for(int i = 0, j = 8 ; i<=8 && j>=0;  i++,j--){
        co = new coordenada(i,j);
        genArr->addObject(co);
    }
    cout<<genArr->toString()<<endl;
    return 0;
}
