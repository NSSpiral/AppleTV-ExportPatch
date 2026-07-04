/* Runtime dump - NSFileVersion
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileVersion : NSObject
{
    NSURL * _fileURL;
    id _addition;
    id _deadVersionIdentifier;
    id _nonLocalVersion;
    NSURL * _contentsURL;
    char _isBackup;
    NSString * _localizedName;
    NSString * _localizedComputerName;
    NSDate * _modificationDate;
    char _isResolved;
    char _contentsURLIsAccessed;
    NSString * _clientID;
    NSString * _name;
    char _discardable;
}

@property (readonly, copy) NSString * originatorName;
@property (readonly) unsigned long long size;
@property (readonly) char ubiquitous;
@property (readonly, copy) NSString * originalPOSIXName;
@property (readonly, copy) NSString * etag;
@property (readonly) char _isBackup;
@property (readonly, copy) NSURL * URL;
@property (readonly, copy) NSString * localizedName;
@property (readonly, copy) NSString * localizedNameOfSavingComputer;
@property (readonly, copy) NSDate * modificationDate;
@property (readonly, retain) <NSCoding> * persistentIdentifier;
@property (readonly) char conflict;
@property char resolved;
@property char discardable;
@property (readonly) char hasLocalContents;
@property (readonly) char hasThumbnail;

+ (char)removeOtherVersionsOfItemAtURL:(NSURL *)arg0 error:(id *)arg1;
+ (NSURL *)_versionOfItemAtURL:(NSURL *)arg0 forClientID:(NSObject *)arg1 name:(NSString *)arg2 temporaryStorageIdentifier:(NSString *)arg3 evenIfDeleted:(char)arg4;
+ (NSURL *)_ubiquityOnlyVersionsOfItemAtURL:(NSURL *)arg0 includeSaved:(char)arg1;
+ (NSURL *)_otherVersionsOfItemAtURL:(NSURL *)arg0 temporaryStorageIdentifier:(NSString *)arg1;
+ (void)getNonlocalVersionsOfItemAtURL:(NSURL *)arg0 options:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
+ (NSURL *)_versionOfItemAtURL:(NSURL *)arg0 forPersistentIdentifier:(NSString *)arg1 temporaryStorageIdentifier:(NSString *)arg2;
+ (NSURL *)versionOfItemAtURL:(NSURL *)arg0 forPersistentIdentifier:(NSString *)arg1;
+ (char)_removeOtherVersionsOfItemAtURL:(NSURL *)arg0 temporaryStorageIdentifier:(NSString *)arg1 error:(id *)arg2;
+ (NSFileVersion *)currentVersionOfItemAtURL:(NSURL *)arg0;
+ (NSURL *)otherVersionsOfItemAtURL:(NSURL *)arg0;
+ (void)getNonlocalVersionsOfItemAtURL:(NSURL *)arg0 completionHandler:(id /* block */)arg1;
+ (NSURL *)addVersionOfItemAtURL:(NSURL *)arg0 withContentsOfURL:(NSURL *)arg1 options:(unsigned int)arg2 error:(id *)arg3;
+ (NSURL *)temporaryDirectoryURLForNewVersionOfItemAtURL:(NSURL *)arg0;
+ (NSFileVersion *)_autosaveDirectoryURLCreateIfNecessary:(char)arg0;
+ (char)_isTemporaryStorageRequiredForGSError:(NSError *)arg0 andURL:(NSURL *)arg1;
+ (NSString *)_makeTemporaryStorageIdentifier;
+ (NSString *)_temporaryStorageLocationForIdentifier:(NSString *)arg0;
+ (NSURL *)_makePermanentStorageLibraryForURL:(NSURL *)arg0 temporaryStorageRequired:(char *)arg1 error:(id *)arg2;
+ (struct NSObject *)_existingLibraryForURL:(NSURL *)arg0 temporaryStorageIdentifier:(NSString *)arg1;
+ (NSURL *)_otherVersionsOfItemAtURL:(NSURL *)arg0 temporaryStorageIdentifier:(NSString *)arg1 withoutOptions:(unsigned long long)arg2;
+ (struct NSObject *)_libraryForURL:(NSURL *)arg0 temporaryStorageIdentifier:(id *)arg1;
+ (NSURL *)_addVersionOfItemAtURL:(NSURL *)arg0 withContentsOfURL:(NSURL *)arg1 options:(unsigned int)arg2 userInfo:(NSDictionary *)arg3 temporaryStorageIdentifier:(id *)arg4 error:(id *)arg5;
+ (void)discoverUbiquitousVersionsOfItemAtURL:(NSURL *)arg0 completionHandler:(id /* block */)arg1;
+ (NSFileVersion *)_supportedGenerationalStorageClientIDs;
+ (char)_permanentVersionStorageSupportedForURL:(NSURL *)arg0 temporaryStorageIdentifier:(id *)arg1 error:(id *)arg2;
+ (NSURL *)_otherNonpurgeableVersionsOfItemAtURL:(NSURL *)arg0 temporaryStorageIdentifier:(NSString *)arg1;
+ (NSURL *)_addVersionOfItemAtURL:(NSURL *)arg0 withContentsOfURL:(NSURL *)arg1 options:(unsigned int)arg2 temporaryStorageIdentifier:(id *)arg3 error:(id *)arg4;
+ (NSURL *)_temporaryDirectoryURLForNewVersionOfItemAtURL:(NSURL *)arg0 temporaryStorageIdentifier:(NSString *)arg1;
+ (char)unresolvedConflictsExistForItemAtURL:(NSURL *)arg0;
+ (NSURL *)versionsOfItemAtURL:(NSURL *)arg0;
+ (char)_conflictsExistForItemAtURL:(NSURL *)arg0;
+ (void)_markConflicts:(id)arg0 asHandledForItemAtURL:(NSURL *)arg1;
+ (void *)_addConflictObserverForItemAtURL:(NSURL *)arg0 statusChangedHandler:(id /* block */)arg1;
+ (void)_removeConflictObserver:(void *)arg0;
+ (NSURL *)unresolvedConflictVersionsOfItemAtURL:(NSURL *)arg0;
+ (void)_removeTemporaryDirectoryAtURL:(NSURL *)arg0;
+ (NSString *)keyPathsForValuesAffectingValueForKey:(NSString *)arg0;

- (NSURL *)replaceItemAtURL:(NSURL *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (void)setResolved:(char)arg0;
- (char)removeAndReturnError:(id *)arg0;
- (char)isDiscardable;
- (void)setDiscardable:(char)arg0;
- (NSURL *)_initWithFileURL:(NSURL *)arg0 library:(NSObject *)arg1 clientID:(NSString *)arg2 name:(NSString *)arg3 contentsURL:(NSURL *)arg4 isBackup:(char)arg5 revision:(TSPDocumentRevision *)arg6;
- (NSFileVersion *)_initWithAddition:(GSAddition *)arg0;
- (char)isConflict;
- (char)hasLocalContents;
- (NSURL *)_oldReplaceItemAtURL:(NSURL *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (NSString *)localizedNameOfSavingComputer;
- (NSString *)originatorName;
- (char)_isBackup;
- (NSDictionary *)_documentInfo;
- (NSURL *)_initWithFileURL:(NSURL *)arg0 nonLocalVersion:(NSString *)arg1;
- (char)_setDocumentInfo:(NSDictionary *)arg0;
- (void)_overrideModificationDateWithDate:(NSDate *)arg0;
- (char)_preserveConflictVersionLocally;
- (NSURL *)restoreOverItemAtURL:(NSURL *)arg0 error:(id *)arg1;
- (<NSCoding> *)persistentIdentifier;
- (void)dealloc;
- (unsigned long long)size;
- (NSFileVersion *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSDate *)modificationDate;
- (NSString *)localizedName;
- (NSURL *)URL;
- (char)isUbiquitous;
- (NSString *)etag;
- (char)hasThumbnail;
- (NSString *)originalPOSIXName;
- (char)isResolved;

@end
