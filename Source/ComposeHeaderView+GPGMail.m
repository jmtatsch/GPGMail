/* ComposeHeaderView+GPGMail.h created by Lukas Pitschl (@lukele) on Wed 03-Aug-2011 */

/*
 * Copyright (c) 2000-2011, GPGToolz Project Team <gpgtoolz-devel@lists.gpgtoolz.org>
 * All rights reserved.
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of GPGToolz Project Team nor the names of GPGMail
 *       contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE GPGToolz Project Team ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE GPGToolz Project Team BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#import <AppKit/AppKit.h>
#import <ComposeBackEnd.h>
#import <Libmacgpg/Libmacgpg.h>
#import "CCLog.h"
#import "NSObject+LPDynamicIvars.h"
#import "ComposeBackEnd+GPGMail.h"
#import "ComposeHeaderView+GPGMail.h"

@implementation ComposeHeaderView_GPGMail

// TODO: Remove? No longer exists afaik.
//- (void)MAAwakeFromNib {
//    if(![[GPGOptions sharedOptions] boolForKey:@"UseOpenPGPToSend"])
//        return [self MAAwakeFromNib];
//    ComposeBackEnd *backEnd = [(DocumentEditor *)[[((ComposeHeaderView *)self) delegate] valueForKey:@"_documentEditor"] backEnd];
//    [backEnd setIvar:@"PGPEnabled" value:@YES];
//
//    [self MAAwakeFromNib];
//}

@end
