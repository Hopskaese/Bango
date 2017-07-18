#ifndef _CSKILLACTIVEONCE_
#define _CSKILLACTIVEONCE_

#include "CSkill.h"

class CSkillActiveOnce : public CSkill
{
	static SkillNameMap g_mSkillMap;
public:
	CSkillActiveOnce(CSkillInfo* pMacro);
	~CSkillActiveOnce();
	static CSkill* CreateSkill(CSkillInfo* m_pMacro);
};

#endif