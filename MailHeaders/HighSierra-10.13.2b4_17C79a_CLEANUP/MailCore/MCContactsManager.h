//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class CNAvatarCache, CNContact, CNContactStore, NSMutableDictionary, NSOperationQueue;

@interface MCContactsManager : NSObject
{
    NSMutableDictionary *_contactsCache;
    NSObject *_contactsCacheLock;
    CNAvatarCache *_avatarCache;
    CNContactStore *_contactStore;
    NSOperationQueue *_contactsUpdateQueue;
}

+ (id)_defaultKeyDescriptors;
+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSOperationQueue *contactsUpdateQueue; // @synthesize contactsUpdateQueue=_contactsUpdateQueue;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(readonly, nonatomic) CNAvatarCache *avatarCache; // @synthesize avatarCache=_avatarCache;
//- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CNContact *meContact;
//- (void)fetchContactForAddress:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)contactForAddress:(id)arg1;
- (void)_contactsChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

