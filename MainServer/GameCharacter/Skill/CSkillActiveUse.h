#ifndef _CSKILLACTIVEUSE_
#define _CSKILLACTIVEUSE_

#include "CSkill.h"

enum Skills
{
	S_LIGHTNINGSLASH
};

class CSkillActiveUse : public CSkill
{
	static SkillNameMap g_mSkillMap;
protected:
	int m_nCooldown;
	BYTE m_byType;
public:
	CSkillActiveUse(CSkillInfo* pMacro);
	static CSkill* CreateSkill(CSkillInfo* m_pMacro);
	virtual int GetAttack() = 0;
};

#endif