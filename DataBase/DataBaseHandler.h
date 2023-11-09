#include "common.h"

class DataBaseHandler{
public:
    static void initialize();
    static DataBaseHandler* instance();
    static void setUpdateMode(bool tracking);

    static void uninitialize();
protected:
    DataBaseHandler(){};
    static DataBaseHandler* _instance;
};