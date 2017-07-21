#ifndef _CSKILLINFO_
#define _CSKILLINFO_

#include <string.h>
#include "CMacro.h"

struct CSkillInfo : public CMacro
{
	BYTE m_byIndex;
	BYTE m_byMaxLevel;
	BYTE m_byClass;
	BYTE m_bySubClass;
	std::string m_szName;

	CSkillInfo() 
	:
		m_byIndex(0),
		m_byClass(0),
		m_byMaxLevel(0),
		m_bySubClass(0),
		m_szName("")
	{		
	}
};

#endif