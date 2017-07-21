#ifndef _CSKILL_
#define _CSKILL_

#include <minwindef.h>

#include <map>
#include <unistd.h>
#include <mutex>

#include <access.h>

#include "../../Macro/CMacroDB.h"

class CSkill 
{
protected:
	CSkillInfo* m_pMacro;
	BYTE m_byLevel;

	static int FindKey(std::string szKey, std::map<std::string, int>&mSkills);
public:
	Access m_Access;

	CSkill(CSkillInfo* pMacro);
	virtual ~CSkill();

	static CSkill* CreateSkill(BYTE byIndex);

	BYTE GetIndex() const { return m_pMacro->m_byIndex; }
	BYTE GetLevel() const { return m_byLevel; }
	void SkillUp() { m_byLevel += 1; }
	//ToDo check for level requirements.
	bool CanSkillUp() { return m_pMacro->m_byMaxLevel > m_byLevel; }
};

typedef std::map<BYTE, CSkill*>SkillMap;
typedef std::map<std::string, int>SkillNameMap;

#endif