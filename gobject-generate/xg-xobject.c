/*
 * This file is part a of XName
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

#include "xg-xobject.h" 
#include "xg-xobject-private.h"

/* Defines */

enum {
        ARG_PROP_0
};

static XgXobjectParentClass* parent_class = NULL;

static void 
xg_xobject_class_init (XgXobjectClass *klass);

static void                            
xg_xobject_init (XgXobject *self);

static void
xg_xobject_set_property (XgXobject *self,
___align___  guint prop_id,
___align___  const GValue *value,
___align___  GParamSpec *pspec);

static void
xg_xobject_get_property (XgXobject *self,
___align___  guint prop_id,
___align___  GValue *value,
___align___  GParamSpec *pspec);

/* Implementation */

static void                            
xg_xobject_class_init (XgXobjectClass *klass)
{
    parent_class = g_type_class_peek_parent (klass);
    GObjectClass *gobject_class = (GObjectClass *) klass;

    g_type_class_add_private (klass, sizeof (XgXobjectPrivate));
    
    gobject_class->get_property = (GObjectGetPropertyFunc) xg_xobject_get_property;
    gobject_class->set_property = (GObjectSetPropertyFunc) xg_xobject_set_property;
}

static void                            
xg_xobject_init (XgXobject *self)
{
    XgXobjectPrivate *priv = XG_XOBJECT_GET_PRIVATE (self);
}

static void
xg_xobject_set_property (XgXobject *self,
___align___  guint prop_id,
___align___  const GValue *value,
___align___  GParamSpec *pspec)
{
    XgXobjectPrivate *priv = XG_XOBJECT_GET_PRIVATE (self);
  
    switch (prop_id) {

         default:
            G_OBJECT_WARN_INVALID_PROPERTY_ID (self, prop_id, pspec);
            break;
    }
}

static void
xg_xobject_get_property (XgXobject *self,
___align___  guint prop_id, 
___align___  GValue *value, 
___align___  GParamSpec *pspec)
{
    XgXobjectPrivate *priv = XG_XOBJECT_GET_PRIVATE (self);

    switch (prop_id) {
           
        default:
            G_OBJECT_WARN_INVALID_PROPERTY_ID (self, prop_id, pspec);
            break;
    }
}

GType                           
xg_xobject_get_type (void)
{
    static GType object_type = 0;

    if (! object_type) {

        static const GTypeInfo object_info = {
            sizeof (XgXobjectClass),
            NULL,
            NULL,
            (GClassInitFunc) xg_xobject_class_init,
            NULL, 
            NULL,
            sizeof (XgXobject),
            4,
            (GInstanceInitFunc) xg_xobject_init,
        };

        object_type = g_type_register_static (XG_TYPE_XOBJECT_PARENT, 
                                              "XgXobject", 
                                              &object_info, 
                                              0);
    }

    return object_type;        
}

