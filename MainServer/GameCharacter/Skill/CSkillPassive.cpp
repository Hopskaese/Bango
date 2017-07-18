#include "CSkillPassive.h"

SkillNameMap CSkillPassive::g_mSkillMap = {

};

CSkillPassive::CSkillPassive(CSkillInfo* pMacro) : CSkill(pMacro)
{

}

CSkillPassive::~CSkillPassive()
{

}

CSkill* CSkillPassive::CreateSkill(CSkillInfo* m_pMacro)
{
	return NULL;
}