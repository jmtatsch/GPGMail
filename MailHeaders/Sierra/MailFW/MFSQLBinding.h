//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@interface MFSQLBinding : NSObject
{
}

+ (id)newNullSQLBinding;	// IMP=0x0000000000271702
+ (id)newSQLBindingWithDouble:(double)arg1;	// IMP=0x00000000002716c6
+ (id)newSQLBindingWithInteger:(long long)arg1;	// IMP=0x000000000027168e
+ (id)newSQLBindingWithData:(id)arg1;	// IMP=0x0000000000271631
+ (id)newSQLBindingWithString:(id)arg1;	// IMP=0x00000000002715d4
- (void)bindTo:(struct sqlite3_stmt *)arg1 withSQLIndex:(int)arg2;	// IMP=0x0000000000271903
- (void)bindToStatement:(id)arg1 usingName:(id)arg2;	// IMP=0x00000000002717f9
- (void)bindToStatement:(id)arg1 usingIndex:(unsigned long long)arg2;	// IMP=0x000000000027171b

@end

