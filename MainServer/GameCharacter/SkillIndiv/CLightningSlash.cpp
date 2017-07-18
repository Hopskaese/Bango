#include "CLightningSlash.h"

CLightningSlash::CLightningSlash(CSkillInfo* pMacro) : CSkillActiveUse(pMacro)
{

}

CLightningSlash::~CLightningSlash()
{

}

int CLightningSlash::GetAttack()
{
	return 5;
}