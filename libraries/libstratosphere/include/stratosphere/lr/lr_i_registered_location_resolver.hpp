/*
 * Copyright (c) Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#include <stratosphere/lr/lr_types.hpp>

#define AMS_LR_I_REGISTERED_LOCATION_RESOLVER_INTERFACE_INFO(C, H)                                                                                                                                            \
    AMS_SF_METHOD_INFO(C, H, 0, Result, ResolveProgramPath,                 (sf::Out<lr::Path> out, ncm::ProgramId id),                         (out, id))                                                    \
    AMS_SF_METHOD_INFO(C, H, 1, Result, RegisterProgramPathDeprecated,      (const lr::Path &path, ncm::ProgramId id),                          (path, id),           hos::Version_1_0_0, hos::Version_8_1_1) \
    AMS_SF_METHOD_INFO(C, H, 1, Result, RegisterProgramPath,                (const lr::Path &path, ncm::ProgramId id, ncm::ProgramId owner_id), (path, id, owner_id), hos::Version_9_0_0)                     \
    AMS_SF_METHOD_INFO(C, H, 2, Result, UnregisterProgramPath,              (ncm::ProgramId id),                                                (id))                                                         \
    AMS_SF_METHOD_INFO(C, H, 3, Result, RedirectProgramPathDeprecated,      (const lr::Path &path, ncm::ProgramId id),                          (path, id),           hos::Version_1_0_0, hos::Version_8_1_1) \
    AMS_SF_METHOD_INFO(C, H, 3, Result, RedirectProgramPath,                (const lr::Path &path, ncm::ProgramId id, ncm::ProgramId owner_id), (path, id, owner_id), hos::Version_9_0_0)                     \
    AMS_SF_METHOD_INFO(C, H, 4, Result, ResolveHtmlDocumentPath,            (sf::Out<lr::Path> out, ncm::ProgramId id),                         (out, id),            hos::Version_2_0_0)                     \
    AMS_SF_METHOD_INFO(C, H, 5, Result, RegisterHtmlDocumentPathDeprecated, (const lr::Path &path, ncm::ProgramId id),                          (path, id),           hos::Version_2_0_0, hos::Version_8_1_1) \
    AMS_SF_METHOD_INFO(C, H, 5, Result, RegisterHtmlDocumentPath,           (const lr::Path &path, ncm::ProgramId id, ncm::ProgramId owner_id), (path, id, owner_id), hos::Version_9_0_0)                     \
    AMS_SF_METHOD_INFO(C, H, 6, Result, UnregisterHtmlDocumentPath,         (ncm::ProgramId id),                                                (id),                 hos::Version_2_0_0)                     \
    AMS_SF_METHOD_INFO(C, H, 7, Result, RedirectHtmlDocumentPathDeprecated, (const lr::Path &path, ncm::ProgramId id),                          (path, id),           hos::Version_2_0_0, hos::Version_8_1_1) \
    AMS_SF_METHOD_INFO(C, H, 7, Result, RedirectHtmlDocumentPath,           (const lr::Path &path, ncm::ProgramId id, ncm::ProgramId owner_id), (path, id, owner_id), hos::Version_9_0_0)                     \
    AMS_SF_METHOD_INFO(C, H, 8, Result, Refresh,                            (),                                                                 (),                   hos::Version_7_0_0)                     \
    AMS_SF_METHOD_INFO(C, H, 9, Result, RefreshExcluding,                   (const sf::InArray<ncm::ProgramId> &ids),                           (ids),                hos::Version_9_0_0)

AMS_SF_DEFINE_INTERFACE(ams::lr, IRegisteredLocationResolver, AMS_LR_I_REGISTERED_LOCATION_RESOLVER_INTERFACE_INFO)
