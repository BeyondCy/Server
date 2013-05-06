/*
 * This file was generated automatically by xsubpp version 1.9508 from the
 * contents of tmp. Do not edit this file, edit tmp instead.
 *
 *		ANY CHANGES MADE HERE WILL BE LOST!
 *
 */


/*  EQEMu:  Everquest Server Emulator
	Copyright (C) 2001-2004  EQEMu Development Team (http://eqemulator.net)

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; version 2 of the License.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY except by those people which sell it, which
		are required to give you total support for your newly bought product;
		without even the implied warranty of MERCHANTABILITY or FITNESS FOR
		A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

typedef const char Const_char;

#ifdef EMBPERL
#include "../common/debug.h"
#include "EQWParser.h"
#include "HTTPRequest.h"

#ifdef seed
#undef seed
#endif

#ifdef THIS	 /* this macro seems to leak out on some systems */
#undef THIS		
#endif


XS(XS_HTTPRequest_get); /* prototype to pass -Wmissing-prototypes */
XS(XS_HTTPRequest_get)
{
	dXSARGS;
	if (items < 2 || items > 3)
		Perl_croak(aTHX_ "Usage: HTTPRequest::get(THIS, name, default_value= \"\")");
	{
		HTTPRequest *		THIS;
		Const_char *		RETVAL;
		dXSTARG;
		Const_char *		name = (Const_char *)SvPV_nolen(ST(1));
		Const_char *		default_value;

		if (sv_derived_from(ST(0), "HTTPRequest")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(HTTPRequest *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type HTTPRequest");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		if (items < 3)
			default_value = "";
		else {
			default_value = (Const_char *)SvPV_nolen(ST(2));
		}

		RETVAL = THIS->get(name, default_value);
		sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
	}
	XSRETURN(1);
}

XS(XS_HTTPRequest_getInt); /* prototype to pass -Wmissing-prototypes */
XS(XS_HTTPRequest_getInt)
{
	dXSARGS;
	if (items < 2 || items > 3)
		Perl_croak(aTHX_ "Usage: HTTPRequest::getInt(THIS, name, default_value= 0)");
	{
		HTTPRequest *		THIS;
		int		RETVAL;
		dXSTARG;
		Const_char *		name = (Const_char *)SvPV_nolen(ST(1));
		int		default_value;

		if (sv_derived_from(ST(0), "HTTPRequest")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(HTTPRequest *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type HTTPRequest");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		if (items < 3)
			default_value = 0;
		else {
			default_value = (int)SvIV(ST(2));
		}

		RETVAL = THIS->getInt(name, default_value);
		XSprePUSH; PUSHi((IV)RETVAL);
	}
	XSRETURN(1);
}

XS(XS_HTTPRequest_getFloat); /* prototype to pass -Wmissing-prototypes */
XS(XS_HTTPRequest_getFloat)
{
	dXSARGS;
	if (items < 2 || items > 3)
		Perl_croak(aTHX_ "Usage: HTTPRequest::getFloat(THIS, name, default_value= 0.0)");
	{
		HTTPRequest *		THIS;
		float		RETVAL;
		dXSTARG;
		Const_char *		name = (Const_char *)SvPV_nolen(ST(1));
		float		default_value;

		if (sv_derived_from(ST(0), "HTTPRequest")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(HTTPRequest *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type HTTPRequest");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		if (items < 3)
			default_value = 0.0;
		else {
			default_value = (float)SvNV(ST(2));
		}

		RETVAL = THIS->getFloat(name, default_value);
		XSprePUSH; PUSHn((double)RETVAL);
	}
	XSRETURN(1);
}

XS(XS_HTTPRequest_getEscaped); /* prototype to pass -Wmissing-prototypes */
XS(XS_HTTPRequest_getEscaped)
{
	dXSARGS;
	if (items < 2 || items > 3)
		Perl_croak(aTHX_ "Usage: HTTPRequest::getEscaped(THIS, name, default_value= \"\")");
	{
		HTTPRequest *		THIS;
		Const_char *		RETVAL;
		dXSTARG;
		Const_char *		name = (Const_char *)SvPV_nolen(ST(1));
		Const_char *		default_value;

		if (sv_derived_from(ST(0), "HTTPRequest")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(HTTPRequest *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type HTTPRequest");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		if (items < 3)
			default_value = "";
		else {
			default_value = (Const_char *)SvPV_nolen(ST(2));
		}

		RETVAL = THIS->getEscaped(name, default_value);
		sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
	}
	XSRETURN(1);
}

XS(XS_HTTPRequest_get_all); /* prototype to pass -Wmissing-prototypes */
XS(XS_HTTPRequest_get_all)
{
	dXSARGS;
	if (items != 1)
		Perl_croak(aTHX_ "Usage: HTTPRequest::get_all(THIS)");
	{
		HTTPRequest *		THIS;
		map<string,string>		RETVAL;

		if (sv_derived_from(ST(0), "HTTPRequest")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(HTTPRequest *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type HTTPRequest");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->get_all();
		ST(0) = sv_newmortal();
		if (RETVAL.begin()!=RETVAL.end())
		{		
				//NOTE: we are leaking the original ST(0) right now
				HV *hv = newHV();
				sv_2mortal((SV*)hv);
				ST(0) = newRV((SV*)hv);
				
				map<string,string>::const_iterator cur, end;
				cur = RETVAL.begin();
				end = RETVAL.end();
				for(; cur != end; cur++) {
						/* get the element from the hash, creating if needed (will be needed) */
						SV**ele = hv_fetch(hv, cur->first.c_str(), cur->first.length(), TRUE);
						if(ele == nullptr) {
								Perl_croak(aTHX_ "Unable to create a hash element for RETVAL");
								break;
						}
						/* put our string in the SV associated with this element in the hash */
						sv_setpvn(*ele, cur->second.c_str(), cur->second.length());
				}
		}

















	}
	XSRETURN(1);
}

XS(XS_HTTPRequest_redirect); /* prototype to pass -Wmissing-prototypes */
XS(XS_HTTPRequest_redirect)
{
	dXSARGS;
	if (items != 2)
		Perl_croak(aTHX_ "Usage: HTTPRequest::redirect(THIS, URL)");
	{
		HTTPRequest *		THIS;
		Const_char *		URL = (Const_char *)SvPV_nolen(ST(1));

		if (sv_derived_from(ST(0), "HTTPRequest")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(HTTPRequest *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type HTTPRequest");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		THIS->redirect(URL);
	}
	XSRETURN_EMPTY;
}

XS(XS_HTTPRequest_SetResponseCode); /* prototype to pass -Wmissing-prototypes */
XS(XS_HTTPRequest_SetResponseCode)
{
	dXSARGS;
	if (items != 2)
		Perl_croak(aTHX_ "Usage: HTTPRequest::SetResponseCode(THIS, code)");
	{
		HTTPRequest *		THIS;
		Const_char *		code = (Const_char *)SvPV_nolen(ST(1));

		if (sv_derived_from(ST(0), "HTTPRequest")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(HTTPRequest *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type HTTPRequest");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		THIS->SetResponseCode(code);
	}
	XSRETURN_EMPTY;
}

XS(XS_HTTPRequest_header); /* prototype to pass -Wmissing-prototypes */
XS(XS_HTTPRequest_header)
{
	dXSARGS;
	if (items != 3)
		Perl_croak(aTHX_ "Usage: HTTPRequest::header(THIS, name, value)");
	{
		HTTPRequest *		THIS;
		Const_char *		name = (Const_char *)SvPV_nolen(ST(1));
		Const_char *		value = (Const_char *)SvPV_nolen(ST(2));

		if (sv_derived_from(ST(0), "HTTPRequest")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(HTTPRequest *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type HTTPRequest");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		THIS->header(name, value);
	}
	XSRETURN_EMPTY;
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_HTTPRequest); /* prototype to pass -Wmissing-prototypes */
XS(boot_HTTPRequest)
{
	dXSARGS;
	char file[256];
	strncpy(file, __FILE__, 256);
	file[255] = 0;
	
	if(items != 1)
		fprintf(stderr, "boot_quest does not take any arguments.");
	char buf[128];

	//add the strcpy stuff to get rid of const warnings....



	XS_VERSION_BOOTCHECK ;

		newXSproto(strcpy(buf, "get"), XS_HTTPRequest_get, file, "$$;$");
		newXSproto(strcpy(buf, "getInt"), XS_HTTPRequest_getInt, file, "$$;$");
		newXSproto(strcpy(buf, "getFloat"), XS_HTTPRequest_getFloat, file, "$$;$");
		newXSproto(strcpy(buf, "getEscaped"), XS_HTTPRequest_getEscaped, file, "$$;$");
		newXSproto(strcpy(buf, "get_all"), XS_HTTPRequest_get_all, file, "$");
		newXSproto(strcpy(buf, "redirect"), XS_HTTPRequest_redirect, file, "$$");
		newXSproto(strcpy(buf, "SetResponseCode"), XS_HTTPRequest_SetResponseCode, file, "$$");
		newXSproto(strcpy(buf, "header"), XS_HTTPRequest_header, file, "$$$");
	XSRETURN_YES;
}

#endif //EMBPERL_XS_CLASSES

