//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

////#import "NSObject.h"

@interface EAEmailAddressParser : NSObject
{
}

+ (id)displayNameFromAddress:(id)arg1;	// IMP=0x0000000000004d17
+ (void)_componentsForFullAddress:(id)arg1 rawAddress:(id *)arg2 localPart:(id *)arg3 domain:(id *)arg4;	// IMP=0x000000000000457b
+ (id)addressDomainFromAddress:(id)arg1;	// IMP=0x0000000000004537
+ (id)localPartFromAddress:(id)arg1;	// IMP=0x00000000000044f3
+ (id)rawAddressRespectingGroupsFromFullAddress:(id)arg1;	// IMP=0x0000000000004434
+ (id)rawAddressFromFullAddress:(id)arg1;	// IMP=0x0000000000004297
+ (BOOL)addressIsEmptyGroup:(id)arg1;	// IMP=0x000000000000417b
+ (BOOL)isLegalEmailAddress:(id)arg1;	// IMP=0x00000000000039d8
+ (id)unsafeAddressLocalPartCharacterSet;	// IMP=0x00000000000038ec

@end

