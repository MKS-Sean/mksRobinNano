#if defined(MKS_ROBIN_LITE)		//robin_lite?�¡�?
  #include "main_Lite.h"
#elif defined(MKS_ROBIN) 		//MKS Robin?�¡�?
  #include "main_Robin.h"
#elif defined(MKS_ROBIN_MINI)	//MKS RobinMini?�¡�?
  #include "main_RobinMini.h"
#elif defined(MKS_ROBINPRO)		//MKS RobinPro?�¡�? (?����?F407?�¡�?)
  #include "main_RobinPro.h"
#elif defined(MKS_ROBIN2)		//MKS Robin2?�¡�?
  #include "main_Robin2.h"
#elif defined(MKS_ROBIN2MINI)	//MKS Robin2Mini?�¡�?
  #include "main_Robin2Mini.h"
#elif defined(MKS_ROBIN_NANO)	//MKS RobinNano?�¡�?
  #include "main_RobinNano.h"
#endif  

