#include "common.h"

class DataBaseHandler{
public:
    static void initialize();
    static DataBaseHandler* instance();

protected:
    DataBaseHandler(){};
    static DataBaseHandler* _instance;
};