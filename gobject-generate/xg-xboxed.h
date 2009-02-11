/*
 * This file is a part of XName
 *
 * Copyright (C) 2007 Michael Dominic K. <mdk@mdk.am>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; version 2.1 of
 * the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */

#ifndef ___XG_XBOXED___
#define ___XG_XBOXED___

#include <glib-object.h>

G_BEGIN_DECLS

#define XG_TYPE_XBOXED \
    (xg_xboxed_get_type ())

struct _XgXboxed
{
};

typedef _XgXboxed XgXboxed;

GType                           
xg_xboxed_get_type (void);

XgXboxed*             
xg_xboxed_copy (const XgXboxed *self);

void                            
xg_xboxed_free (XgXboxed *self);

G_END_DECLS

#endif                        
