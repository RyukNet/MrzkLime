#include "common.h"

class DataBaseHandler{
public:
    static void initialize();
    static DataBaseHandler* instance();
    static void uninitialize();
protected:
    DataBaseHandler(){};
    static DataBaseHandler* _instance;
};