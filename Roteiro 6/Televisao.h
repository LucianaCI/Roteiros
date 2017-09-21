#ifndef TELEVISAO_H
#define TELEVISAO_H

class Televisao{

private:
	int  volume;
	int canal;

public:

	Televisao(int volume, int canal);

	void setVolume(int volume);
	void setCanal(int canal);

	int getVolume();
	int getCanal();

	int aumentarVolume();
	int diminuirVolume();

	int aumentarCanal();
	int diminuirCanal();

	void trocarCanal(int canal);

};

#endif
