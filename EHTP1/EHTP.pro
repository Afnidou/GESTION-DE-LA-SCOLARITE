QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    absence.cpp \
    admin.cpp \
    controle1.cpp \
    controle2.cpp \
    controle3.cpp \
    controle4.cpp \
    controle5.cpp \
    eleve.cpp \
    etudiant1.cpp \
    etudiant2.cpp \
    etudiant3.cpp \
    etudiantprofile.cpp \
    etudiantrapport.cpp \
    evaluation_prof.cpp \
    main.cpp \
    acceuil.cpp \
    matiere.cpp \
    matiere1.cpp \
    matiere2.cpp \
    prof1.cpp \
    prof2.cpp \
    prof3.cpp \
    professeur.cpp \
    professeur_profile.cpp \
    rapportsaccademiques.cpp

HEADERS += \
    absence.h \
    acceuil.h \
    admin.h \
    controle1.h \
    controle2.h \
    controle3.h \
    controle4.h \
    controle5.h \
    eleve.h \
    etudiant1.h \
    etudiant2.h \
    etudiant3.h \
    etudiantprofile.h \
    etudiantrapport.h \
    evaluation_prof.h \
    matiere.h \
    matiere1.h \
    matiere2.h \
    prof1.h \
    prof2.h \
    prof3.h \
    professeur.h \
    professeur_profile.h \
    rapportsaccademiques.h

FORMS += \
    absence.ui \
    acceuil.ui \
    admin.ui \
    controle1.ui \
    controle2.ui \
    controle3.ui \
    controle4.ui \
    controle5.ui \
    eleve.ui \
    etudiant1.ui \
    etudiant2.ui \
    etudiant3.ui \
    etudiantprofile.ui \
    etudiantrapport.ui \
    evaluation_prof.ui \
    matiere.ui \
    matiere1.ui \
    matiere2.ui \
    prof1.ui \
    prof2.ui \
    prof3.ui \
    professeur.ui \
    professeur_profile.ui \
    rapportsaccademiques.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    IMAGES.qrc
