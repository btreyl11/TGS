#ifndef CHARACTERSHEETPLUGIN_GLOBAL_H
#define CHARACTERSHEETPLUGIN_GLOBAL_H

#if defined(CHARACTERSHEETPLUGIN_LIBRARY)
#  define CHARACTERSHEETPLUGIN_EXPORT Q_DECL_EXPORT
#else
#  define CHARACTERSHEETPLUGIN_EXPORT Q_DECL_IMPORT
#endif

#endif // CHARACTERSHEETPLUGIN_GLOBAL_H
