//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFAccount.h>

@class MFMailAccount, NSArray;

@interface MFDeliveryAccount : MFAccount
{
    unsigned long long _maximumMessageBytes;	// 8 = 0x8
}

+ (id)accountWithHostname:(id)arg1 username:(id)arg2 lookForExistingAccounts:(BOOL)arg3 addToDeliveryAccountsIfNeeded:(BOOL)arg4;	// IMP=0x00000000000622d0
+ (id)accountWithHostname:(id)arg1 username:(id)arg2;	// IMP=0x000000000006226c
+ (id)existingAccountWithHostname:(id)arg1 username:(id)arg2;	// IMP=0x0000000000061fd9
+ (id)accountWithDomain:(id)arg1;	// IMP=0x0000000000061d87
+ (id)accountWithParentIdentifier:(id)arg1;	// IMP=0x0000000000061b9a
+ (id)_accountFromCollection:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00000000000619a1
+ (id)accountWithIdentifier:(id)arg1;	// IMP=0x00000000000618a1
+ (void)saveAccountInfoToDefaults;	// IMP=0x00000000000617ca
+ (void)_postDeliveryAccountsHaveChanged;	// IMP=0x00000000000616d1
+ (void)unregisterDynamicAccount:(id)arg1;	// IMP=0x0000000000061642
+ (void)registerDynamicAccount:(id)arg1;	// IMP=0x00000000000615b3
+ (void)removeDeliveryAccount:(id)arg1;	// IMP=0x00000000000614a9
+ (void)insertObjectInDeliveryAccounts:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000613c2
+ (void)addDeliveryAccount:(id)arg1;	// IMP=0x00000000000611dd
+ (void)setDeliveryAccounts:(id)arg1;	// IMP=0x0000000000060e22
+ (id)deliveryAccounts;	// IMP=0x0000000000060d80
+ (id)_deliveryAccounts;	// IMP=0x0000000000060d53
+ (void)reloadDeliveryAccounts;	// IMP=0x0000000000060905
+ (void)initialize;	// IMP=0x0000000000060898
@property(nonatomic) unsigned long long maximumMessageBytes; // @synthesize maximumMessageBytes=_maximumMessageBytes;
@property(readonly, copy, nonatomic) NSArray *remoteMailAccountsEmployedBy;
- (void)setShouldUseAuthentication:(BOOL)arg1;	// IMP=0x00000000000625dd
- (BOOL)shouldUseAuthentication;	// IMP=0x000000000006256f
@property __weak MFMailAccount *associatedAccount;
@property(readonly, nonatomic) BOOL isDynamic;
- (void)setNilValueForKey:(id)arg1;	// IMP=0x00000000000624dc

@end

