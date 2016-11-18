//-----------------------------------------------------------------------------
// File: MakeParametersDialog.cpp
//-----------------------------------------------------------------------------
// Project: Kactus2
// Author: Janne Virtanen
// Date: 15.10.2015
//
// Description:
// Dialog for presenting parameters, which may be chosen for makefile generation.
//-----------------------------------------------------------------------------

#ifndef MAKEPARAMETERSDIALOG_H
#define MAKEPARAMETERSDIALOG_H

#include <QDialog>
#include <QVBoxLayout>
#include <QTableWidget>

#include "MakefileParser.h"
#include <Plugins/PluginSystem/GeneratorPlugin/FileOutputWidget.h>

class MakeConfiguration;

//-----------------------------------------------------------------------------
//! MakeParametersDialog class.
//-----------------------------------------------------------------------------
class MakeParametersDialog : public QDialog
{
    Q_OBJECT

public:
    /*!
     *  Constructor.
     */
    MakeParametersDialog(QSharedPointer<MakeConfiguration> configuration,
        QSharedPointer<QList<QSharedPointer<MakeFileData> > > parsedData, QWidget* parent);

    /*!
     *  Destructor.
     */
    ~MakeParametersDialog();

    public slots:

        virtual void accept();

private slots:

    void onLauncherGenerationStateChanged(int state);

private:
    // Disable copying.
    MakeParametersDialog(MakeParametersDialog const& rhs);
    MakeParametersDialog& operator=(MakeParametersDialog const& rhs);

    void createConflictTable(QVBoxLayout* instanceLayout, QSharedPointer<MakeFileData> makeData);

    //-----------------------------------------------------------------------------
    // Data.
    //-----------------------------------------------------------------------------

    //! The configuration for the generation.
    QSharedPointer<MakeConfiguration> configuration_;

    //! Widget for output file information.
    FileOutputWidget* fileOutput_;

    //! General warnings are displayed here.
    QLabel* generalWarningLabel_;
};

//-----------------------------------------------------------------------------

#endif // MAKEPARAMETERSDIALOG_H
