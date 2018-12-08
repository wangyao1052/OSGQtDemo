/********************************************************************************
** Form generated from reading UI file 'osgqtdemo.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSGQTDEMO_H
#define UI_OSGQTDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OSGQtDemoClass
{
public:
    QAction *action_newproject;
    QAction *actionNewWarScene;
    QAction *actionLight_test;
    QAction *actionClearScene;
    QAction *actionSequence_test;
    QAction *actionBoomEffect;
    QAction *actionParticleEffect;
    QAction *actionAnisotropic_light;
    QAction *actionCartoon_render;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QMenuBar *menuBar;
    QMenu *menuNew;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OSGQtDemoClass)
    {
        if (OSGQtDemoClass->objectName().isEmpty())
            OSGQtDemoClass->setObjectName(QStringLiteral("OSGQtDemoClass"));
        OSGQtDemoClass->resize(879, 673);
        action_newproject = new QAction(OSGQtDemoClass);
        action_newproject->setObjectName(QStringLiteral("action_newproject"));
        actionNewWarScene = new QAction(OSGQtDemoClass);
        actionNewWarScene->setObjectName(QStringLiteral("actionNewWarScene"));
        actionLight_test = new QAction(OSGQtDemoClass);
        actionLight_test->setObjectName(QStringLiteral("actionLight_test"));
        actionClearScene = new QAction(OSGQtDemoClass);
        actionClearScene->setObjectName(QStringLiteral("actionClearScene"));
        actionSequence_test = new QAction(OSGQtDemoClass);
        actionSequence_test->setObjectName(QStringLiteral("actionSequence_test"));
        actionBoomEffect = new QAction(OSGQtDemoClass);
        actionBoomEffect->setObjectName(QStringLiteral("actionBoomEffect"));
        actionParticleEffect = new QAction(OSGQtDemoClass);
        actionParticleEffect->setObjectName(QStringLiteral("actionParticleEffect"));
        actionAnisotropic_light = new QAction(OSGQtDemoClass);
        actionAnisotropic_light->setObjectName(QStringLiteral("actionAnisotropic_light"));
        actionCartoon_render = new QAction(OSGQtDemoClass);
        actionCartoon_render->setObjectName(QStringLiteral("actionCartoon_render"));
        centralWidget = new QWidget(OSGQtDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));

        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        OSGQtDemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(OSGQtDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 879, 23));
        menuNew = new QMenu(menuBar);
        menuNew->setObjectName(QStringLiteral("menuNew"));
        OSGQtDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(OSGQtDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        OSGQtDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(OSGQtDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        OSGQtDemoClass->setStatusBar(statusBar);

        menuBar->addAction(menuNew->menuAction());
        menuNew->addAction(action_newproject);
        menuNew->addAction(actionNewWarScene);
        menuNew->addAction(actionLight_test);
        menuNew->addAction(actionSequence_test);
        menuNew->addAction(actionBoomEffect);
        menuNew->addAction(actionParticleEffect);
        menuNew->addAction(actionAnisotropic_light);
        menuNew->addAction(actionCartoon_render);
        menuNew->addAction(actionClearScene);

        retranslateUi(OSGQtDemoClass);

        QMetaObject::connectSlotsByName(OSGQtDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *OSGQtDemoClass)
    {
        OSGQtDemoClass->setWindowTitle(QApplication::translate("OSGQtDemoClass", "OSGQtDemo", 0));
        action_newproject->setText(QApplication::translate("OSGQtDemoClass", "\346\226\260\345\273\272Cow", 0));
#ifndef QT_NO_TOOLTIP
        action_newproject->setToolTip(QApplication::translate("OSGQtDemoClass", "\346\226\260\345\273\272Cow\346\250\241\345\236\213", 0));
#endif // QT_NO_TOOLTIP
        actionNewWarScene->setText(QApplication::translate("OSGQtDemoClass", "\346\226\260\345\273\272\346\210\230\344\272\211\345\234\272\346\231\257", 0));
        actionLight_test->setText(QApplication::translate("OSGQtDemoClass", "\345\205\211\347\205\247\346\265\213\350\257\225", 0));
        actionClearScene->setText(QApplication::translate("OSGQtDemoClass", "\346\270\205\351\231\244\345\234\272\346\231\257", 0));
        actionSequence_test->setText(QApplication::translate("OSGQtDemoClass", "\345\270\247\345\212\250\347\224\273", 0));
        actionBoomEffect->setText(QApplication::translate("OSGQtDemoClass", "\347\210\206\347\202\270\346\225\210\346\236\234", 0));
        actionParticleEffect->setText(QApplication::translate("OSGQtDemoClass", "\350\207\252\345\256\232\344\271\211\344\276\213\345\255\220\347\263\273\347\273\237", 0));
        actionAnisotropic_light->setText(QApplication::translate("OSGQtDemoClass", "\345\274\202\346\200\247\345\205\211\347\205\247", 0));
        actionCartoon_render->setText(QApplication::translate("OSGQtDemoClass", "\345\215\241\351\200\232\346\270\262\346\237\223", 0));
        menuNew->setTitle(QApplication::translate("OSGQtDemoClass", "\346\226\207\344\273\266", 0));
    } // retranslateUi

};

namespace Ui {
    class OSGQtDemoClass: public Ui_OSGQtDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSGQTDEMO_H
