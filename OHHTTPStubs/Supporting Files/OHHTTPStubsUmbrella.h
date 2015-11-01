/***********************************************************************************
 *
 * Copyright (c) 2012 Olivier Halligon
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 ***********************************************************************************/

#import "Compatibility.h"
#import "OHHTTPStubs.h"
#import "OHHTTPStubsResponse.h"

/* When building with CocoaPods, we need to check for #import using __has_include
 *   because some subspecs may not have been selected by the user.
 * But when building with Xcode, using __has_include here will generate a compile error (don't
 *   ask me why, Xcode ¯\_(ツ)_/¯) so let's always #import as they will always be there anyway
 */
#if COCOAPODS
  #define has_subspec_header(x) __has_include(x)
#else
  #define has_subspec_header(x) 1
#endif

#if has_subspec_header("OHHTTPStubsResponse+JSON.h")
  #import "OHHTTPStubsResponse+JSON.h"
#endif
#if has_subspec_header("OHHTTPStubsResponse+HTTPMessage.h")
  #import "OHHTTPStubsResponse+HTTPMessage.h"
#endif
#if has_subspec_header("OHHTTPStubs+Mocktail.h")
  #import "OHHTTPStubs+Mocktail.h"
#endif
#if has_subspec_header("OHPathHelpers.h")
  #import "OHPathHelpers.h"
#endif
