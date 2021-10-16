#pragma once

//warning C4996: 'sscanf': This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
#pragma warning(disable : 4996)

// warning C4251: 'Property<SetType,GetType>::_getFun' : class 'std::tr1::function<_Fty>' needs to have dll-interface to be used by clients of class 'Property<SetType,GetType>'
#pragma warning(disable : 4251)

#define _CRT_SECURE_NO_WARNINGS
//----------------------------------------------------------------------------------------------

#define MAX_TMP_STR_BUFFER_SIZE		256


#define X_NEW new
#define X_DELETE delete

