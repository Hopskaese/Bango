#ifndef _CSKILLCHANT_
#define _CSKILLCHANT_

#include "CSkill.h"

class CSkillChant : public CSkill
{
	static SkillNameMap g_mSkillMap;
public:
	CSkillChant(CSkillInfo* pMacro);
	~CSkillChant();
	static CSkill* CreateSkill(CSkillInfo* m_pMacro);
};

#endif