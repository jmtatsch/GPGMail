//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSDictionary;

@interface _MFRedundantTextIdentifierSolutionGenerator : NSObject
{
    CDStruct_f9502b4c *_replyBuffer;	// 8 = 0x8
    CDStruct_f9502b4c *_originalBuffer;	// 16 = 0x10
    long long _replyLength;	// 24 = 0x18
    long long _originalLength;	// 32 = 0x20
    NSDictionary *_replyAttachmentContextsByURL;	// 40 = 0x28
    NSDictionary *_originalAttachmentContextsByURL;	// 48 = 0x30
}

@property(readonly, copy, nonatomic) NSDictionary *originalAttachmentContextsByURL; // @synthesize originalAttachmentContextsByURL=_originalAttachmentContextsByURL;
@property(readonly, copy, nonatomic) NSDictionary *replyAttachmentContextsByURL; // @synthesize replyAttachmentContextsByURL=_replyAttachmentContextsByURL;
@property(readonly, nonatomic) long long originalLength; // @synthesize originalLength=_originalLength;
@property(readonly, nonatomic) long long replyLength; // @synthesize replyLength=_replyLength;
@property(readonly, nonatomic) CDStruct_f9502b4c *originalBuffer; // @synthesize originalBuffer=_originalBuffer;
@property(readonly, nonatomic) CDStruct_f9502b4c *replyBuffer; // @synthesize replyBuffer=_replyBuffer;
- (void).cxx_destruct;	// IMP=0x0000000000239883
- (id)generateBestSolutionInForwardDirection:(BOOL)arg1 replyStartIndex:(long long)arg2 originalStartIndex:(long long)arg3;	// IMP=0x0000000000238f20
- (id)generateBestSolution;	// IMP=0x0000000000238a27
- (id)init;	// IMP=0x0000000000238958
- (id)initWithReply:(CDStruct_f9502b4c *)arg1 replyLength:(long long)arg2 replyAttachmentContextsByURL:(id)arg3 original:(CDStruct_f9502b4c *)arg4 originalLength:(long long)arg5 originalAttachmentContextsByURL:(id)arg6;	// IMP=0x0000000000238848

@end

