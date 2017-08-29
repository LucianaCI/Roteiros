#ifndef MINHADATA_H
#define MINHADATA_H

#include<iostream>


class MinhaData{

public:  

int dia, mes, ano;   

MinhaData(int dia, int mes, int ano);

	int getDia();
        int getMes();    
    	int getAno();    
        void setDia(int dia);    
     	void setMes(int mes);        
     	void setAno(int ano);     
    	void avancarDia();
        
};

#endif













