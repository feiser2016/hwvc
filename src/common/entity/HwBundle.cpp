/*
 * Copyright (c) 2018-present, lmyooyo@gmail.com.
 *
 * This source code is licensed under the GPL license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "../include/HwBundle.h"

HwBundle::HwBundle() : Object() {

}

HwBundle::~HwBundle() {
    int32Map.clear();
    int64Map.clear();
    strMap.clear();
}

void HwBundle::putInt32(string key, int32_t value) {
    int32Map.insert(pair<string, int32_t>(key, value));
}

void HwBundle::putInt64(string key, int64_t value) {
    int64Map.insert(pair<string, int32_t>(key, value));
}

void HwBundle::putString(string key, string value) {
    strMap.insert(pair<string, string>(key, value));
}

void HwBundle::putObject(string key, Object *value) {
    objMap.insert(pair<string, Object *>(key, value));
}

int32_t HwBundle::getInt32(string key) {
    if (int32Map.end() == int32Map.find(key)) {
        return INT32_MIN;
    }
    return int32Map[key];
}

int64_t HwBundle::getInt64(string key) {
    if (int64Map.end() == int64Map.find(key)) {
        return INT64_MIN;
    }
    return int64Map[key];
}

string HwBundle::getString(string key) {
    if (strMap.end() == strMap.find(key)) {
        return "";
    }
    return strMap[key];
}

Object *HwBundle::getObject(string key) {
    if (objMap.end() == objMap.find(key)) {
        return nullptr;
    }
    return objMap[key];
}