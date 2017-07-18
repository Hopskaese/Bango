#include "CSkillActiveUse.h"
#include "../SkillIndiv/CLightningSlash.h"

SkillNameMap CSkillActiveUse::g_mSkillMap = {
	{"Lightning Slash", S_LIGHTNINGSLASH }
};

CSkillActiveUse::CSkillActiveUse(CSkillInfo* pMacro): CSkill(pMacro)
{

}

CSkillActiveUse::~CSkillActiveUse()
{

}

CSkill* CSkillActiveUse::CreateSkill(CSkillInfo* m_pMacro)
{
	CSkill* pSkill = NULL;
	int nKey = FindKey(m_pMacro->m_szName, g_mSkillMap);

	if (nKey > -1)
	{
		switch(nKey)
		{
			case S_LIGHTNINGSLASH:
				pSkill = new CLightningSlash(m_pMacro);
				break;
		}
	}
	return pSkill;
}