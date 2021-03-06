// Copyright (c) 2017-2018 Scash developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BLOCKEXPLORER_SERVER_H
#define BLOCKEXPLORER_SERVER_H

#include <string>

namespace BlockExplorerServer
{
    extern bool fBlockExplorerServerEnabled;
    extern bool fBalanceCheckerServerEnabled;
    extern int fBlockExplorerServerPort;

    void ThreadBlockServer(void* parg);
}

#endif // BLOCKEXPLORER_SERVER_H

