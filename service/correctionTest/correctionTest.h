#ifndef AIZO1_CORRECTIONTEST_H
#define AIZO1_CORRECTIONTEST_H


class CorrectionTest {
public:
    CorrectionTest();
    ~CorrectionTest();

    template<typename T>
    bool isRight(T tab[],int tabSize){
        for(int i = 0; i < tabSize; i++){
            if(i!=tabSize-1&&tab[i] > tab[i+1])return false;
        }
        return true;
    }
};


#endif //AIZO1_CORRECTIONTEST_H
