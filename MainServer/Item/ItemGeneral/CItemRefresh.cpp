#include "CItemRefresh.h"

#include "../../GameCharacter/CPlayer.h"

bool CItemRefresh::Use(CPlayer *pPlayer)
{
	if (!CanUse(pPlayer))
		return false;

	pPlayer->Lock();

	pPlayer->UpdateProperty(P_CURHP, m_pMacro->m_nRefresh[CItemInfo::R_HP]);
	pPlayer->UpdateProperty(P_CURMP, m_pMacro->m_nRefresh[CItemInfo::R_MP]);

	pPlayer->Unlock();

	if (m_pMacro->m_byEffect)
		pPlayer->WriteInSight(S2C_EFFECT, "db", pPlayer->GetID(), m_pMacro->m_byEffect);

	return true;
}

