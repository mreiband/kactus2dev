//-----------------------------------------------------------------------------
// File: IGeneratorPlugin.h
//-----------------------------------------------------------------------------
// Project: Kactus 2
// Author: Joni-Matti M��tt�
// Date: 27.6.2012
//
// Description:
// Interface for plugins that are used to generate content for different
// IP-XACT documents.
//-----------------------------------------------------------------------------

#ifndef IGENERATORPLUGIN_H
#define IGENERATORPLUGIN_H

#include <QSharedPointer>

class LibraryInterface;
class LibraryComponent;

//-----------------------------------------------------------------------------
//! Interface for plugins that are used to generate content for different
//! IP-XACT documents.
//-----------------------------------------------------------------------------
class IGeneratorPlugin
{
public:
    /*!
     *  Destructor.
     */
    virtual ~IGeneratorPlugin() {}

    /*!
     *  Checks whether the generator supports generation for the given library component.
     *
     *      @param [in] libComp The library component for which to check support.
     *
     *      @return True, if the generator supports the given component. Otherwise false.
     */
    virtual bool checkGeneratorSupport(QSharedPointer<LibraryComponent> libComp) const = 0;

    /*!
     *  Runs the generator.
     *
     *      @param [in,out] libComp       The library component for which the generator is run.
     *      @param [in]     libInterface  The library interface to get access to the library.
     */
    virtual void runGenerator(QSharedPointer<LibraryComponent> libComp,
                              LibraryInterface const* libInterface) = 0;
};

Q_DECLARE_INTERFACE(IGeneratorPlugin, "com.tut.Kactus2.IGeneratorPlugin/1.0")

//-----------------------------------------------------------------------------

#endif // IGENERATORPLUGIN_H