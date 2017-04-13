/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



@class ActivityMonitor, NSProgressIndicator, NSString, NSTextField, NSView;

@interface LoadingOverlay : NSObject
{
    NSView *_overlayView;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_statusMessageField;
    ActivityMonitor *_monitor;
    id _modalDelegate;
}

- (id)initWithModalDelegate:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)displayInSuperview:(id)arg1;
- (void)displayInSuperviewAfterDelay:(id)arg1;
@property(retain, nonatomic) ActivityMonitor *activityMonitor;
@property(retain) NSString *statusMessage;
- (void)_activityEnded:(id)arg1;
@property id modalDelegate; // @synthesize modalDelegate=_modalDelegate;
@property(readonly) NSView *overlayView; // @synthesize overlayView=_overlayView;

@end
