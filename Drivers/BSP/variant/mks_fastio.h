#if defined(MKS_ROBIN_LITE)		//robin_lite����
  #include "fastio_Lite.h"
#elif defined(MKS_ROBIN) 		//MKS Robin����
  #include "fastio_Robin.h"
#elif defined(MKS_ROBIN_MINI)	//MKS RobinMini����
  #include "fastio_RobinMini.h"
#elif defined(MKS_ROBINPRO)		//MKS RobinPro���� (�ɵ�F407����)
  #include "fastio_RobinPro.h"
#elif defined(MKS_ROBIN2)		//MKS Robin2����
  #include "fastio_Robin2.h"
#elif defined(MKS_ROBIN2MINI)	//MKS Robin2Mini����
  #include "fastio_Robin2Mini.h"
#elif defined(MKS_ROBIN_NANO)	//MKS Robin_nano����
  #include "fastio_RobinNano.h"
#endif  


