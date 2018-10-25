//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSOperationQueue;

@interface RedundantContentIdentificationManager : NSObject
{
    NSOperationQueue *_workQueue;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain) NSOperationQueue *workQueue; // @synthesize workQueue=_workQueue;
//- (void).cxx_destruct;
- (id)_messageWithMessageIDHeaderString:(id)arg1 inConversation:(id)arg2;
- (id)mostRecentAncestorForRedundantTextComparisonForMessage:(id)arg1 inConversation:(id)arg2 fetchingHeaders:(BOOL)arg3;
- (id)redundantContentMarkupForMessage:(id)arg1 inConversation:(id)arg2;
- (void)dealloc;
- (id)init;

@end

