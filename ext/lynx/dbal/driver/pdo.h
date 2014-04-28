
extern zend_class_entry *lynx_dbal_driver_pdo_ce;

ZEPHIR_INIT_CLASS(Lynx_DBAL_Driver_Pdo);

PHP_METHOD(Lynx_DBAL_Driver_Pdo, setEventsManager);
PHP_METHOD(Lynx_DBAL_Driver_Pdo, getEventsManager);
PHP_METHOD(Lynx_DBAL_Driver_Pdo, __construct);
PHP_METHOD(Lynx_DBAL_Driver_Pdo, connect);

ZEND_BEGIN_ARG_INFO_EX(arginfo_lynx_dbal_driver_pdo_seteventsmanager, 0, 0, 1)
	ZEND_ARG_INFO(0, eventsManager)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lynx_dbal_driver_pdo___construct, 0, 0, 1)
	ZEND_ARG_INFO(0, dsn)
	ZEND_ARG_INFO(0, username)
	ZEND_ARG_INFO(0, password)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lynx_dbal_driver_pdo_connect, 0, 0, 4)
	ZEND_ARG_INFO(0, dsn)
	ZEND_ARG_INFO(0, username)
	ZEND_ARG_INFO(0, password)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(lynx_dbal_driver_pdo_method_entry) {
	PHP_ME(Lynx_DBAL_Driver_Pdo, setEventsManager, arginfo_lynx_dbal_driver_pdo_seteventsmanager, ZEND_ACC_PUBLIC)
	PHP_ME(Lynx_DBAL_Driver_Pdo, getEventsManager, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Lynx_DBAL_Driver_Pdo, __construct, arginfo_lynx_dbal_driver_pdo___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Lynx_DBAL_Driver_Pdo, connect, arginfo_lynx_dbal_driver_pdo_connect, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
