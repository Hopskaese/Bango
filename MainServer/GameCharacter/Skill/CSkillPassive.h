#ifndef _CSKILLPASSIVE_
#define _CSKILLPASSIVE_

#include "CSkill.h"

class CSkillPassive : public CSkill
{
	static SkillNameMap g_mSkillMap;
public:
	CSkillPassive(CSkillInfo* pMacro);
	~CSkillPassive();
	static CSkill* CreateSkill(CSkillInfo* m_pMacro);
};

#endif