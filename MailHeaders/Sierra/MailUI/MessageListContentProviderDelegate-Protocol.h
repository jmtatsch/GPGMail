//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class MessageListContentProvider, MessageListContentProviderTaskInfo, NSNumber;

@protocol MessageListContentProviderDelegate <NSObject>
- (void)messageListContentProviderConversationsUpdated:(MessageListContentProvider *)arg1;
- (void)messageListContentProviderDidFinishLoading:(MessageListContentProvider *)arg1;
- (void)messageListContentProvider:(MessageListContentProvider *)arg1 didFinishTaskWithInfo:(MessageListContentProviderTaskInfo *)arg2 taskID:(NSNumber *)arg3;
@end

