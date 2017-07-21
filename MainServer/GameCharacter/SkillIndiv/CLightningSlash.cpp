#include "CLightningSlash.h"

CLightningSlash::CLightningSlash(CSkillInfo* pMacro) : CSkillActiveUse(pMacro)
{

}

int CLightningSlash::GetAttack()
{
	return 5;
}