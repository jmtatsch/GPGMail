//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSTextViewDelegate-Protocol.h"

@class MessageTextView, NSEvent, NSMenu, NSMenuItem;

@protocol MessageTextViewDelegate <NSTextViewDelegate>
- (void)saveAs:(id)arg1;
- (void)showPrintPanel:(id)arg1;
- (void)toggleShowControlCharacters:(id)arg1;
- (BOOL)validateMenuItem:(NSMenuItem *)arg1;
- (NSMenu *)messageTextView:(MessageTextView *)arg1 willReturnMenu:(NSMenu *)arg2 forEvent:(NSEvent *)arg3;
@end

