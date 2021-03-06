/*
 * Bittorrent Client using Qt and libtorrent.
 * Copyright (C) 2012  Christophe Dumez
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * In addition, as a special exception, the copyright holders give permission to
 * link this program with the OpenSSL project's "OpenSSL" library (or with
 * modified versions of it that use the same license as the "OpenSSL" library),
 * and distribute the linked executables. You must obey the GNU General Public
 * License in all respects for all of the code used other than "OpenSSL".  If you
 * modify file(s), you may extend this exception to your version of the file(s),
 * but you are not obligated to do so. If you do not wish to do so, delete this
 * exception statement from your version.
 *
 * Contact : chris@qbittorrent.org
 */

#ifndef UTILS_FS_H
#define UTILS_FS_H

/**
 * Utility functions related to file system.
 */

#include <QString>

namespace Utils
{
    namespace Fs
    {
        QString toNativePath(const QString& path);
        QString fromNativePath(const QString& path);
        QString fileExtension(const QString& filename);
        QString fileName(const QString& file_path);
        QString folderName(const QString& file_path);
        qint64 computePathSize(const QString& path);
        bool sameFiles(const QString& path1, const QString& path2);
        QString toValidFileSystemName(const QString &name, bool allowSeparators = false);
        bool isValidFileSystemName(const QString& name, bool allowSeparators = false);
        qlonglong freeDiskSpaceOnPath(QString path);
        QString branchPath(const QString& file_path, QString* removed = 0);
        bool sameFileNames(const QString& first, const QString& second);
        QString expandPath(const QString& path);
        QString expandPathAbs(const QString& path);

        bool smartRemoveEmptyFolderTree(const QString& path);
        bool forceRemove(const QString& file_path);
        void removeDirRecursive(const QString& dirName);

        /* Ported from Qt4 to drop dependency on QtGui */
        QString QDesktopServicesDataLocation();
        QString QDesktopServicesCacheLocation();
        QString QDesktopServicesDownloadLocation();
        /* End of Qt4 code */

        QString cacheLocation();
    }
}

#endif // UTILS_FS_H
