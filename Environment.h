//
// Created by Professional on 24.10.2021.
//

#ifndef ASSIGNMENT5_ENVIRONMENT_H
#define ASSIGNMENT5_ENVIRONMENT_H


class Environment {
private:
    char table[3][3];
public:
    Environment(){}
    void setTable(){
        int n = 1;
        int i = 0;
        int j = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                table[i][j] = '0' + n;
                n++;
            }
        }
    }
};


#endif //ASSIGNMENT5_ENVIRONMENT_H
