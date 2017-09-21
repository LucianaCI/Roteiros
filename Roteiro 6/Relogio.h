#ifndef RELOGIO_H
#define RELOGIO_H

class Relogio{

private:
	int hora, minuto, segundo;

public:
	void setHorario(int h, int min, int s);
	int getHora();
	int getMinuto();
	int getSegundo();
	void avancarHorario(int h, int min, int s);

Relogio(int h, int min, int s);

};

#endif
