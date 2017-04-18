#include "PlayEventCardController.h"

void PlayEventCardController::play(CommandActionCards * command, Player * player, Card * card)
{
	player->discardCard(card);
	command->execute();
}