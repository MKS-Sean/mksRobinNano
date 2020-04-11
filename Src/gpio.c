#if defined(MKS_ROBIN_LITE)		//robin_lite����
  #include "gpio_Lite.c"
#elif defined(MKS_ROBIN) 		//MKS Robin����
  #include "gpio_Robin.c"
#elif defined(MKS_ROBIN_MINI)	//MKS RobinMini����
  #include "gpio_RobinMini.c"
#elif defined(MKS_ROBINPRO)		//MKS RobinPro���� (�ɵ�F407����)
  #include "gpio_RobinPro.c"
#elif defined(MKS_ROBIN2)		//MKS Robin2����
  #include "gpio_Robin2.c"
#elif defined(MKS_ROBIN2MINI)	//MKS Robin2Mini����
  #include "gpio_Robin2Mini.c"
#elif defined(MKS_ROBIN_NANO)   //MKS RobinNano����
  #include "gpio_RobinNano.c"
#endif  


