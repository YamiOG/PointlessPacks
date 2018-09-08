#include "pack.h"

pack::pack()
{
	cardAmount = 5;
}


pack::~pack()
{

}

void pack::SetCards(SDL_Renderer *renderer)
{
	srand(SDL_GetTicks());
	cards.resize(cardAmount);
	for (int num = 0; num < cardAmount; num++)
	{
		int randNum = rand() % 8 + 1;
		card cardClass;
		cardClass.SetCardNum(randNum);
		cardClass.SetCardTexture(renderer);
		cardClass.SetPos( 0, 0, 300, 400 );
		cardClass.SetCrop(0, 0, 600, 800);
		cards.push_back(cardClass);
		cardClass.~card();
	}
}