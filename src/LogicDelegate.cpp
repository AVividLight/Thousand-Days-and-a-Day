#include "LogicDelegate.h"


void LogicDelegate::Initialize ()
{
	
	m_distrobution = std::uniform_int_distribution<> (0, 9);
}


int LogicDelegate::PLACEHOLDERFUNCTION (RenderManager &renderManager)
{
	
	sprintf (m_RANDOMCSTRING, "%d", RandomInt ());
	return 0;
}


int LogicDelegate::RandomInt ()
{

	return m_distrobution (m_generator);
}