#include "CSkillActiveUse.h"
#include "../SkillIndiv/CLightningSlash.h"

SkillNameMap CSkillActiveUse::g_mSkillMap = {
	{"Lightning Slash", S_LIGHTNINGSLASH }
};

CSkillActiveUse::CSkillActiveUse(CSkillInfo* pMacro): CSkill(pMacro)
{

}

CSkill* CSkillActiveUse::CreateSkill(CSkillInfo* pMacro)
{
	CSkill* pSkill = NULL;
	int nKey = FindKey(pMacro->m_szName, g_mSkillMap);

	if (nKey > -1)
	{
		switch(nKey)
		{
			case S_LIGHTNINGSLASH:
				pSkill = new CLightningSlash(pMacro);
				pSkill->m_Access.Grant();
				break;
		}
	}
	return pSkill;
}