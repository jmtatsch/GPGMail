//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RemoteStoreQuota.h"

@class MFIMAPSizeEngine, NSPopUpButton, NSTextField, NSView, QuotaBar;

@interface IMAPQuota : RemoteStoreQuota
{
    NSPopUpButton *_quotaPopup;	// 8 = 0x8
    NSTextField *_quotaPopupLabel;	// 16 = 0x10
    NSView *_quotaContainerView;	// 24 = 0x18
    QuotaBar *_quotaBar;	// 32 = 0x20
    NSTextField *_capacityField;	// 40 = 0x28
    NSTextField *_statusField;	// 48 = 0x30
    double _spaceUnderQuotaPopup;	// 56 = 0x38
}

@property(readonly, nonatomic) double spaceUnderQuotaPopup; // @synthesize spaceUnderQuotaPopup=_spaceUnderQuotaPopup;
@property(nonatomic) __weak NSTextField *statusField; // @synthesize statusField=_statusField;
@property(nonatomic) __weak NSTextField *capacityField; // @synthesize capacityField=_capacityField;
@property(nonatomic) __weak QuotaBar *quotaBar; // @synthesize quotaBar=_quotaBar;
@property(nonatomic) __weak NSView *quotaContainerView; // @synthesize quotaContainerView=_quotaContainerView;
@property(nonatomic) __weak NSTextField *quotaPopupLabel; // @synthesize quotaPopupLabel=_quotaPopupLabel;
@property(nonatomic) __weak NSPopUpButton *quotaPopup; // @synthesize quotaPopup=_quotaPopup;
- (void).cxx_destruct;	// IMP=0x00000001001aa43b
- (id)_stringForSize:(unsigned long long)arg1 andCount:(long long)arg2 isCapacity:(BOOL)arg3;	// IMP=0x00000001001aa0b6
- (void)_updateUIForQuotaName:(id)arg1 updateTable:(BOOL)arg2;	// IMP=0x00000001001a998e
- (void)engineUpdated:(id)arg1;	// IMP=0x00000001001a983e
- (void)engineDidFinish;	// IMP=0x00000001001a9779
- (void)_updateQuotaPopupWithQuotaNames:(id)arg1;	// IMP=0x00000001001a9118
- (void)_engineStatusChanged:(id)arg1;	// IMP=0x00000001001a90c0
- (void)_updateStatusField;	// IMP=0x00000001001a8c32
- (void)_updateQuotaBarWithSize:(unsigned long long)arg1 maxSize:(unsigned long long)arg2 count:(unsigned long long)arg3 maxCount:(unsigned long long)arg4;	// IMP=0x00000001001a8ab9
- (id)_selectedQuotaName;	// IMP=0x00000001001a8a27
- (void)quotaPopupChanged:(id)arg1;	// IMP=0x00000001001a8976
- (BOOL)tableShouldIncludeMailbox:(id)arg1;	// IMP=0x00000001001a88d6
- (void)dealloc;	// IMP=0x00000001001a8860
- (void)awakeFromNib;	// IMP=0x00000001001a873d
- (id)initWithSizeEngine:(id)arg1;	// IMP=0x00000001001a8614

// Remaining properties
@property(readonly, nonatomic) MFIMAPSizeEngine *sizeEngine; // @dynamic sizeEngine;

@end

