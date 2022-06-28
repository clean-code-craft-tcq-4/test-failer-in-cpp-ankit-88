#ifndef TEST_ALERTER_HPP
#define TEST_ALERTER_HPP
#include "alerter.hpp"
static void testNetworkAlertStubImpl(float celcius, int expectedReturnValue);
static void testNetworkAlertImpl(float celcius, int expectedReturnValue);
static void testAlertInCelciusImpl(float farenheit, networkFuncPtr testAssignedNetworkFunction, int expectedAlertCount);
static void testConvertFarenheitToCelciusImpl(float farenheit, float expectedCelciusValue);

//Implememtation functions for test
void testNetworkAlertStub(void);
void testNetworkAlert(void);
void testAlertInCelcius(networkFuncPtr testAssignedNetworkFunction);
void testConvertFarenheitToCelcius(void);
#endif