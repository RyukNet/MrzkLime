#include "DataBaseHandler.h"

DataBaseHandler* DataBaseHandler::_instance = nullptr;

void DataBaseHandler::initialize(){

}

DataBaseHandler* DataBaseHandler::instance(){
    if(_instance == nullptr){
        _instance = new DataBaseHandler();
    }
    return _instance;
}