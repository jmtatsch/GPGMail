//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Importer.h"

@class NSArray, NSString, NSURL;

@interface EmailImporter : Importer
{
    NSArray *_sourceItems;
    NSString *_destinationFolderName;
    BOOL _errorsDuringImport;
    NSURL *_rootFolder;
    NSArray *_sourceFolders;
    char *_lineDelimiter;
    char *_fromSpaceSeparator;
    NSURL *_lastDirectoryFound;
}

+ (id)log;
@property(retain, nonatomic) NSURL *lastDirectoryFound; // @synthesize lastDirectoryFound=_lastDirectoryFound;
@property(nonatomic) BOOL errorsDuringImport; // @synthesize errorsDuringImport=_errorsDuringImport;
@property(nonatomic) char *fromSpaceSeparator; // @synthesize fromSpaceSeparator=_fromSpaceSeparator;
@property(nonatomic) char *lineDelimiter; // @synthesize lineDelimiter=_lineDelimiter;
@property(copy, nonatomic) NSArray *sourceFolders; // @synthesize sourceFolders=_sourceFolders;
@property(retain, nonatomic) NSURL *rootFolder; // @synthesize rootFolder=_rootFolder;
//- (void).cxx_destruct;
- (id)mailboxForImportItem:(id)arg1;
- (id)mailboxNameForImportItem:(id)arg1;
- (id)lastCommonParentForItems:(id)arg1;
- (id)uniqueDirectoriesForItems:(id)arg1;
//- (id)searchForValidItemsInsideDirectory:(id)arg1 limit:(unsigned long long)arg2 searchDepth:(long long)arg3 validityBlock:(CDUnknownBlockType)arg4;
- (id)validItemsFromItems:(id)arg1;
- (void)addMessagesToLibrary:(id)arg1 withMailbox:(id)arg2;
- (BOOL)isValidMailbox:(id)arg1;
@property(copy, nonatomic) NSArray *sourceList;
@property(readonly, copy, nonatomic) NSString *destinationFolderName;
- (void)importMailbox:(id)arg1;
- (void)cleanup;
- (id)statusLine;
- (id)importFinishedText;
- (void)importFinished;
- (void)_revealMailbox:(id)arg1;
- (void)performImport;
- (id)init;

@end

