#ifndef DATA_H
#define DATA_H

#include<iostream>


class Data{

private:  

int dia, mes, ano;   
public:

Data(int dia, int mes, int ano);

	int getDia();
        int getMes();    
    	int getAno();    
        void setDia(int dia);    
     	void setMes(int mes);        
     	void setAno(int ano);     
    	void avancarDia();
        
};

#endif













