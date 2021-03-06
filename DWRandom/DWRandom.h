// DWRandom.h
// Copyright (c) 2016 David Westerhoff
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Availability.h>
#import <TargetConditionals.h>

#ifndef _DWRANDOM_
#define _DWRANDOM_

#import "NSArray+DWRandom.h"
#import "NSCountedSet+DWRandom.h"
#import "NSData+DWRandom.h"
#import "NSDictionary+DWRandom.h"
#import "NSMutableArray+DWRandom.h"
#import "NSMutableDictionary+DWRandom.h"
#import "NSMutableSet+DWRandom.h"
#import "NSMutableString+DWRandom.h"
#import "NSNumber+DWRandom.h"
#import "NSOrderedSet+DWRandom.h"
#import "NSSet+DWRandom.h"
#import "NSString+DWRandom.h"

#if TARGET_OS_IOS || TARGET_OS_TV
// UIKit available
#import "UIColor+DWRandom.h"
#endif

#if TARGET_OS_MAC
// AppKit available
#endif

/**-----------------------------------------------------------------------------
 * @name Class Method Proxies
 * -----------------------------------------------------------------------------
 */

#endif /* DWRandom_h */
