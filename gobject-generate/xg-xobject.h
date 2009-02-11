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

#ifndef ___XG_XOBJECT_H___
#define ___XG_XOBJECT_H___

#include <glib-object.h>

G_BEGIN_DECLS

#define XG_TYPE_XOBJECT \
        (xg_xobject_get_type ())

#define XG_XOBJECT_GET_CLASS(obj) \
        ((XgXobjectClass *) G_OBJECT_GET_CLASS(obj))

#define XG_IS_XOBJECT(obj) \
        (G_TYPE_CHECK_INSTANCE_TYPE ((obj), XG_TYPE_XOBJECT))

#define XG_XOBJECT(obj) \
        (G_TYPE_CHECK_INSTANCE_CAST ((obj), XG_TYPE_XOBJECT, XgXobject))

typedef struct _XgXobject XgXobject;

typedef struct _XgXobjectClass XgXobjectClass;

struct _XgXobject {
    XgXobjectParent parent;
};

struct _XgXobjectClass {
    XgXobjectParentClass parent_class;
};

GType                           
xg_xobject_get_type (void);

G_END_DECLS

#endif /* ___XG_XOBJECT_H___ */
