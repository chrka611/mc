.//============================================================================
.// $RCSfile: t.smt_sr.declare_set.c,v $
.//
.// Notice:
.// (C) Copyright 1998-2012 Mentor Graphics Corporation
.//     All rights reserved.
.//
.// This document contains confidential and proprietary information and
.// property of Mentor Graphics Corp.  No part of this document may be
.// reproduced without the express written permission of Mentor Graphics Corp.
.//============================================================================
.assign b = b + "${te_set.scope}${te_set.base_class} ${te_select_related.result_var}_space={0}; ${te_set.scope}${te_set.base_class} * ${te_select_related.result_var} = &${te_select_related.result_var}_space; /* ${te_select_related.result_var_OAL} (${te_class.Key_Lett}) */\n"