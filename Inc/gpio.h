#if defined(MKS_ROBIN_LITE)		//robin_lite����
  #include "gpio_Lite.h"
#elif defined(MKS_ROBIN) 		//MKS Robin����
  #include "gpio_Robin.h"
#elif defined(MKS_ROBIN_MINI)	//MKS RobinMini����
  #include "gpio_RobinMini.h"
#elif defined(MKS_ROBINPRO)		//MKS RobinPro���� (�ɵ�F407����)
  #include "gpio_RobinPro.h"
#elif defined(MKS_ROBIN2)		//MKS Robin2����
  #include "gpio_Robin2.h"
#elif defined(MKS_ROBIN2MINI)	//MKS Robin2Mini����
  #include "gpio_Robin2Mini.h"
#elif defined(MKS_ROBIN_NANO)	//MKS Robin_Nano����
  #include "gpio_Robin_nano.h"
#endif  
