#include "CSkillChant.h"

SkillNameMap CSkillChant::g_mSkillMap = {

};

CSkillChant::CSkillChant(CSkillInfo* pMacro) : CSkill(pMacro)
{

}

CSkill* CSkillChant::CreateSkill(CSkillInfo* m_pMacro)
{
	return NULL;
}