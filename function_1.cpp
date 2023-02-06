#include "easy_list.h"

void itc_even_index_list (const vector <int> &mass, vector <int> &mass2){
    int i;
    for(i = 0; i < mass.size(); i+=2){
        mass2.push_back(mass[i]);
    }
}

void itc_even_parts_list(const vector <int> &mass, vector <int> &mass2){
    int i;
    for(i = 0; i < mass.size(); i++){
        if(mass[i] % 2 == 0){
            mass2.push_back(mass[i]);
        }
    }
}

int itc_positive_list(const vector <int> &mass){
    int kol;
    for(int i = 0; i < mass.size(); i++){
        if(mass[i] > 0){
            kol++;
        }
    }
    return kol;
}

int itc_sl_list(const vector <int> &mass){
    int kol = 0;
    for(int i = 1; i < mass.size(); i++){
        if(mass[i] > mass[i-1]){
            kol++;
        }
    }
    return kol;
}

bool itc_same_parts_list(const vector <int> &mass){
    int kol;
    for(int i = 0; i < mass.size(); i++){
        if((mass[i] > 0 && mass[i+1] > 0) || (mass[i] < 0 && mass[i+1] < 0) || (mass[i] == 0 && mass[i+1] == 0)){
            kol++;
        }
    }
    if (kol > 0){
        return true;
    }
    else{
        return false;
    }
}
