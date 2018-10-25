//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "MFUIMailbox.h"

@class MTMAccount, NSArray, NSColor, NSDictionary, NSEnumerator, NSFont, NSImage, NSMutableArray, NSMutableDictionary, NSString, NSURL;

@interface MTMMailbox : NSObject <MFUIMailbox>
{
    NSMutableArray *_subMailboxes;	// 8 = 0x8
    NSMutableArray *_messages;	// 16 = 0x10
    NSMutableArray *_pendingMessages;	// 24 = 0x18
    id <MTMMailboxControllerProtocol> _controller;	// 32 = 0x20
    NSMutableDictionary *_messageColumnAttributes;	// 40 = 0x28
    BOOL _messagesLoaded;	// 48 = 0x30
    BOOL _updatePaused;	// 49 = 0x31
    NSDictionary *_mailboxDict;	// 56 = 0x38
    MTMMailbox *_parentMailbox;	// 64 = 0x40
    NSEnumerator *_messageEnumerator;	// 72 = 0x48
}

+ (id)keyPathsForValuesAffectingType;	// IMP=0x000000010024e701
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;	// IMP=0x000000010024deac
+ (Class)mailboxClassForMailboxDictionary:(id)arg1;	// IMP=0x000000010024de1e
+ (void)setSectionOrder:(id)arg1;	// IMP=0x000000010024d9a4
@property(nonatomic) BOOL updatePaused; // @synthesize updatePaused=_updatePaused;
@property(retain, nonatomic) NSEnumerator *messageEnumerator; // @synthesize messageEnumerator=_messageEnumerator;
@property(nonatomic) BOOL messagesLoaded; // @synthesize messagesLoaded=_messagesLoaded;
@property(readonly, nonatomic) __weak MTMMailbox *parentMailbox; // @synthesize parentMailbox=_parentMailbox;
@property(readonly, copy, nonatomic) NSDictionary *mailboxDict; // @synthesize mailboxDict=_mailboxDict;
- (void).cxx_destruct;	// IMP=0x0000000100251769
- (unsigned long long)numberOfMessage:(id)arg1;	// IMP=0x0000000100251632
- (void)discardMailbox;	// IMP=0x000000010025148e
- (void)resumeMailboxUpdate;	// IMP=0x000000010025143a
- (void)pauseMailboxUpdate;	// IMP=0x0000000100251423
- (void)loadNextMessagesWithControllingMailbox:(id)arg1 andFetcher:(id)arg2;	// IMP=0x0000000100250c10
- (void)_updateMessagesWhilePaused:(id)arg1;	// IMP=0x0000000100250b54
- (void)_updateMessages:(id)arg1;	// IMP=0x00000001002509ce
@property(readonly, nonatomic) BOOL needsToLoadMessagesInBackground;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSFont *messageListFont;
@property(readonly, nonatomic) NSColor *messageListColor;
@property(readonly, copy, nonatomic) NSString *subRestoreString;
@property(readonly, copy, nonatomic) NSString *restoreString;
@property(readonly, copy, nonatomic) NSString *defaultMessageColumnAttributesKey;
@property(readonly, copy, nonatomic) NSDictionary *messageColumnAttributes;
- (BOOL)_addAttributesFromInfo:(id)arg1;	// IMP=0x00000001002500b7
@property(readonly, copy, nonatomic) NSString *messageColumnConfiguration;
@property(readonly, copy, nonatomic) NSString *restoreMode;
@property(readonly, copy, nonatomic) NSString *displayMode;
@property(readonly, nonatomic) BOOL canCollapse;
@property(readonly, nonatomic) BOOL showSender;
@property(readonly, copy, nonatomic) NSString *senderTitleString;
@property(readonly, copy, nonatomic) NSString *dateTitleString;
- (long long)compareIndexInOutline:(id)arg1;	// IMP=0x000000010024ffbf
- (long long)_compareName:(id)arg1;	// IMP=0x000000010024ff20
- (void)sortSubMailboxes;	// IMP=0x000000010024ff1a
@property(readonly, nonatomic) SEL sortSelector;
- (unsigned long long)indexInOutline;	// IMP=0x000000010024ff02
- (id)_messagesFolderPathFromMailboxFolderPath:(id)arg1;	// IMP=0x000000010024fee3
- (id)getMessageEnumerator;	// IMP=0x000000010024fe65
- (void)reloadMessages;	// IMP=0x000000010024fe08
- (id)messageWithIdentifier:(id)arg1;	// IMP=0x000000010024fc1b
- (void)addMessages:(id)arg1;	// IMP=0x000000010024fbfe
- (void)addMessagesObject:(id)arg1;	// IMP=0x000000010024fbe1
@property(copy, nonatomic) NSArray *messages;
- (void)_loadMessages;	// IMP=0x000000010024fb34
- (BOOL)isDescendantOfMailboxWithType:(int)arg1;	// IMP=0x000000010024faa4
- (void)_addSubMailbox:(id)arg1;	// IMP=0x000000010024f9ed
- (void)_addSubMailboxesFromDictionaries:(id)arg1;	// IMP=0x000000010024f7b0
- (id)_sortedMaiboxDictsForMailboxDicts:(id)arg1;	// IMP=0x000000010024f3a9
- (BOOL)_shouldSortMailboxes;	// IMP=0x000000010024f3a1
@property(readonly) BOOL hasChildren;
@property(readonly) unsigned long long numberOfChildren;
- (id)subMailboxWithIdentifier:(id)arg1;	// IMP=0x000000010024f154
@property(readonly, copy) NSArray *children;
@property(readonly, copy, nonatomic) NSArray *subMailboxes;
@property(readonly) BOOL isVisibleFlaggedMailbox;
@property(readonly, nonatomic) BOOL isPlaceholder;
@property(readonly, nonatomic) BOOL isSmartMailbox;
@property(readonly, nonatomic) BOOL isStore;
@property(readonly) unsigned long long displayCount;
@property(readonly, nonatomic) BOOL isContainer;
@property(readonly, copy, nonatomic) NSString *displayNameInMessageList;
@property(readonly, copy) NSString *displayNameInTitleBar;
@property(readonly, copy, nonatomic) NSString *severalMessagesFormatString;
@property(readonly, copy, nonatomic) NSString *oneMesageString;
@property(readonly, copy, nonatomic) NSString *extendedDisplayName;
@property(readonly, copy, nonatomic) NSString *displayNameForList;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSArray *paths;
@property(readonly, nonatomic) NSURL *timeMachineURL;
@property(readonly, copy, nonatomic) NSString *path;
@property(readonly, copy, nonatomic) NSString *accountURLString;
@property(readonly) MTMAccount *account;
@property(readonly, nonatomic) BOOL enabled;
@property(readonly, nonatomic) BOOL asyncLoading;
@property int mailboxType;
@property(readonly, nonatomic) long long backupType;
@property(readonly, nonatomic) id revisionID;
@property(readonly, copy, nonatomic) NSString *persistentID;
@property(readonly, nonatomic) id identifier;
- (id)mailboxWithMailboxPath:(id)arg1;	// IMP=0x000000010024e3d8
@property(readonly, copy, nonatomic) NSArray *mailboxPath;
- (id)mailboxWithIndexPath:(id)arg1;	// IMP=0x000000010024e185
- (id)indexPathFromMailbox:(id)arg1;	// IMP=0x000000010024e02f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010024e024
- (id)init;	// IMP=0x000000010024dff7
- (id)initWithDictionary:(id)arg1 controller:(id)arg2;	// IMP=0x000000010024df48
@property(nonatomic) __weak id <MTMMailboxControllerProtocol> controller;
@property(readonly, nonatomic) BOOL isAccountActive;
@property(readonly, nonatomic) NSImage *accountIcon;
@property(readonly, nonatomic) BOOL isLocal;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

