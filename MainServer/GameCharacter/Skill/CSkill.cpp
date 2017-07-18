#include "CSkill.h"
#include "CSkillActiveUse.h"
#include "CSkillActiveOnce.h"
#include "CSkillChant.h"
#include "CSkillPassive.h"

CSkill::CSkill(CSkillInfo* pMacro)
{
	m_pMacro = pMacro;
	m_byLevel = 1;
}

CSkill::~CSkill()
{
	
}

CSkill* CSkill::CreateSkill(BYTE byIndex)
{
	CSkillInfo* pMacro = (CSkillInfo*) CMacroDB::FindMacro(CMacro::MT_SKILL, byIndex);
	CSkill* pSkill = NULL;

	if (!pMacro) {
		printf(KRED "Wrong skill index: %d\n" KNRM, byIndex);
		return NULL;
	}

	switch (pMacro->m_byClass)
	{
		case SC_ACTIVE:
		{
			if(pMacro->m_bySubClass == SSC_USE)
				pSkill = CSkillActiveUse::CreateSkill(pMacro);
			else if (pMacro->m_bySubClass == SSC_ONCE)
				pSkill = CSkillActiveOnce::CreateSkill(pMacro);
			break;
		}
		case SC_PASSIVE:
			pSkill = CSkillPassive::CreateSkill(pMacro);
		break;

		case SC_CHANT:
			pSkill = CSkillChant::CreateSkill(pMacro);
		break;
	}

	return pSkill;
}

int CSkill::FindKey(std::string szKey, SkillNameMap &mSkills)
{
	if (szKey.size() == 0)
		return -1;

	SkillNameMap::iterator it = mSkills.find(szKey);
	if (it != mSkills.end())
		return (*it).second;

	return -1;
}
