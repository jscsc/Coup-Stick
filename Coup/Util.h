#pragma once

// Namespace to hold enums used by the game
namespace Util
{
	enum PlayerType { PLAYER_ONE, PLAYER_TWO, NEUTRAL };
	enum GameState { MAIN_MENU, ABILITY_SETUP, POSITION_SETUP, GAMEPLAY, GAME_OVER };
	enum MovementType { FORWARD, BACK, LEFT_OR_RIGHT, DIAGONAL, SUPER, LEFT_OR_RIGHT_SUPER, DIAGONAL_SUPER, BACK_DIAGONAL_SUPER, BACK_DIAGONAL, STAY };
	enum AbilityType { MOVEMENT, MOD };

}