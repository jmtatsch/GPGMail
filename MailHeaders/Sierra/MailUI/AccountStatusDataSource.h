//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "NSMenuDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class MFAccount, MFAccountStatus, NSArray, NSMutableDictionary, NSPopUpButton, NSString, NSTableView;

@interface AccountStatusDataSource : NSObject <NSMenuDelegate, NSTableViewDataSource, NSTableViewDelegate>
{
    NSMutableDictionary *_progressIndicators;	// 8 = 0x8
    MFAccountStatus *_statusProvider;	// 16 = 0x10
    NSArray *_accounts;	// 24 = 0x18
    MFAccount *_selectedAccount;	// 32 = 0x20
    MFAccount *_dynamicAccount;	// 40 = 0x28
    BOOL _allowNone;	// 48 = 0x30
    BOOL _allowEditServerList;	// 49 = 0x31
    BOOL _omitStatus;	// 50 = 0x32
    BOOL _selectedAccountIsLocked;	// 51 = 0x33
    BOOL _delegateWantsTableDataSourceInvocations;	// 52 = 0x34
    BOOL _allowAccountLocking;	// 53 = 0x35
    BOOL _beConservative;	// 54 = 0x36
    BOOL _disabled;	// 55 = 0x37
    BOOL _usesOfflineStatusString;	// 56 = 0x38
    id <AccountStatusDataSourceDelegate> _delegate;	// 64 = 0x40
    NSPopUpButton *_popUp;	// 72 = 0x48
    NSTableView *_table;	// 80 = 0x50
    unsigned long long _accountFlags;	// 88 = 0x58
}

+ (id)keyPathsForValuesAffectingTotalNumberOfAccounts;	// IMP=0x00000001000cb14f
@property(nonatomic) BOOL usesOfflineStatusString; // @synthesize usesOfflineStatusString=_usesOfflineStatusString;
@property(nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
@property(nonatomic) unsigned long long accountFlags; // @synthesize accountFlags=_accountFlags;
@property(retain, nonatomic) NSTableView *table; // @synthesize table=_table;
@property(retain, nonatomic) NSPopUpButton *popUp; // @synthesize popUp=_popUp;
@property(nonatomic) __weak id <AccountStatusDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL beConservative; // @synthesize beConservative=_beConservative;
@property BOOL allowAccountLocking; // @synthesize allowAccountLocking=_allowAccountLocking;
@property BOOL delegateWantsTableDataSourceInvocations; // @synthesize delegateWantsTableDataSourceInvocations=_delegateWantsTableDataSourceInvocations;
@property BOOL selectedAccountIsLocked; // @synthesize selectedAccountIsLocked=_selectedAccountIsLocked;
@property BOOL omitStatus; // @synthesize omitStatus=_omitStatus;
@property BOOL allowEditServerList; // @synthesize allowEditServerList=_allowEditServerList;
@property BOOL allowNone; // @synthesize allowNone=_allowNone;
- (void).cxx_destruct;	// IMP=0x00000001000cc711
- (void)_updateUIWithAccountState:(id)arg1;	// IMP=0x00000001000cc432
- (void)_updateUI;	// IMP=0x0000000100062e64
- (void)_removeUI:(id)arg1;	// IMP=0x0000000100075865
- (void)_addUI:(id)arg1;	// IMP=0x00000001000a0b1e
- (void)_reloadAccounts:(id)arg1;	// IMP=0x00000001000623e3
- (void)_accountInfoDidChange:(id)arg1;	// IMP=0x00000001000cc36a
- (void)_didUpdateAccountStatus:(id)arg1;	// IMP=0x00000001000cc1fa
- (void)_willRefreshStatusForAllAccounts:(id)arg1;	// IMP=0x00000001000cc0e4
- (void)_tableViewDoubleClickAction:(id)arg1;	// IMP=0x00000001000cc04a
- (void)_removeAllIndicators:(id)arg1;	// IMP=0x0000000100062d89
- (id)_accountForTableRow:(long long)arg1;	// IMP=0x00000001000cbf9e
- (void)tableViewSelectionDidChange:(id)arg1;	// IMP=0x00000001000cbe91
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;	// IMP=0x00000001000cbb3f
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;	// IMP=0x00000001000cb750
- (unsigned long long)tableRowIndexOfAccount:(id)arg1;	// IMP=0x00000001000cb680
- (long long)numberOfRowsInTableView:(id)arg1;	// IMP=0x00000001000cb65c
- (void)tableViewWillHide:(id)arg1;	// IMP=0x00000001000cb5f3
- (void)tableViewWillBecomeVisible:(id)arg1;	// IMP=0x00000001000cb508
- (void)configureTable:(id)arg1 handleDoubleClick:(BOOL)arg2 useOfflineStatusString:(BOOL)arg3;	// IMP=0x00000001000cb480
- (void)toggleAccountLock:(id)arg1;	// IMP=0x00000001000cb3f3
- (void)editServerList:(id)arg1;	// IMP=0x00000001000cb33d
- (void)_selectAccount:(id)arg1;	// IMP=0x00000001000cb22d
- (void)_synchronizePopUpWithSelectedAccount;	// IMP=0x0000000100062ef2
- (void)_popUpButtonWillPopUp:(id)arg1;	// IMP=0x00000001000a0c80
- (void)_configureMenuItem:(id)arg1 forAccount:(id)arg2;	// IMP=0x00000001000a145d
- (BOOL)menu:(id)arg1 updateItem:(id)arg2 atIndex:(long long)arg3 shouldCancel:(BOOL)arg4;	// IMP=0x00000001000a0fea
- (unsigned long long)menuItemIndexOfAccount:(id)arg1;	// IMP=0x00000001000a183f
- (long long)numberOfItemsInMenu:(id)arg1;	// IMP=0x00000001000a0e67
- (void)configurePopUpButton:(id)arg1;	// IMP=0x00000001000a095c
- (void)disable;	// IMP=0x0000000100062fe4
- (void)enable;	// IMP=0x000000010006255b
- (void)refresh;	// IMP=0x00000001000cb17b
- (id)_displayStringWithOfflineStatusForAccount:(id)arg1;	// IMP=0x00000001000a19f2
- (void)_resetObservedAccounts;	// IMP=0x0000000100062137
@property(readonly, nonatomic) unsigned long long totalNumberOfAccounts;
- (void)selectAnyAccount;	// IMP=0x00000001000cb050
@property(retain) MFAccount *selectedAccount;
@property(retain) MFAccount *dynamicAccount;
@property(copy) NSArray *accounts;
@property(retain) MFAccountStatus *statusProvider;
- (void)dealloc;	// IMP=0x0000000100075788
- (id)init;	// IMP=0x00000001000caf81
- (id)initWithDelegate:(id)arg1 forAccounts:(unsigned long long)arg2;	// IMP=0x0000000100061e9d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

