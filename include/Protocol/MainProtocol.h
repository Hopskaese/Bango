#ifndef _MAINPROTOCOL_
#define _MAINPROTOCOL_

enum S2C_PROTOCOL
{
	S2C_SECOND_LOGIN = 37,
	S2C_ANS_LOGIN = 149,
	S2C_CODE = 125,
	S2C_CLOSE = 66,
	S2C_EVENT_FISHING = 80,
	S2C_RESULT_CODE = 99,
	S2C_STORAGEINFO = 1,
	S2C_GIVEUP_QUEST = 18,
	S2C_QUESTINFO = 0,
	S2C_SHOWOFFITEM = 16,
	S2C_CLOSETRADE = 4,
	S2C_PLAYERINFO = 114,
	S2C_ANS_LOAD = 104,
	S2C_ANS_START = 21,
	S2C_ACTION = 137,
	S2C_PLAYER_ANIMATION = 168,
	S2C_PROPERTY = 145,
	S2C_CREATEPLAYER = 107,
	S2C_ANS_NEWPLAYER = 161,
	S2C_ANS_RESTART = 116,
	S2C_ANS_GAMEEXIT = 46,
	S2C_RIDING = 198,
};

enum C2S_PROTOCOL
{
	C2S_CONNECT = 8,
	C2S_ANS_CODE = 3,
	C2S_LOGIN = 7,
	C2S_SECOND_LOGIN = 9,
	C2S_LOADPLAYER = 4,
	C2S_DELPLAYER = 2,
	C2S_NEWPLAYER = 5,
	C2S_RESTOREPLAYER = 6,
	C2S_START = 13,
	C2S_GETSTALLINFO = 118,
	C2S_RESTART = 140,
	C2S_GAMEEXIT = 55,
	C2S_CHATTING = 41,
};

enum S2D_PROTOCOL
{
	S2D_LOGIN,
	S2D_CREATE_SECONDARY,
	S2D_CHANGE_SECONDARY,
	S2D_SECONDARY_LOGIN,
	S2D_DISCONNECT,
	S2D_DELPLAYER,
	S2D_NEWPLAYER,
	S2D_LOADPLAYER,
	S2D_SELECT_CHARACTER,
};

enum D2S_PROTOCOL
{
	D2S_LOGIN,
	D2S_SEC_LOGIN,
	D2S_PLAYER_INFO,
	D2S_ANS_NEWPLAYER,
	D2S_LOADPLAYER,
};

#endif
