#ifndef _CITEMYINYANG_
#define _CITEMYINYANG_

#include "CItem.h"

class CItemYinyang: public CItem
{
public:
	CItemYinyang(ITEMINFO_DESC& desc, CItemInfo* pMacro);

	void PutOn(CPlayer *pPlayer);
	void PutOff(CPlayer *pPlayer);
};

#endif
