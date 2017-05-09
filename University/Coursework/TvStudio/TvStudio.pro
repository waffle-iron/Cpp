TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Adjustments.cpp \
    Agreement.cpp

HEADERS += \
    Customer.h \
    Order.h \
    Agreement.h \
    Operator.h
