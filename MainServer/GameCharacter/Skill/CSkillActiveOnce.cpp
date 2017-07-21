#include "CSkillActiveOnce.h"

SkillNameMap CSkillActiveOnce::g_mSkillMap = {

};

CSkillActiveOnce::CSkillActiveOnce(CSkillInfo* pMacro) : CSkill(pMacro)
{

}

CSkill* CSkillActiveOnce::CreateSkill(CSkillInfo* m_pMacro)
{
	return NULL;
}