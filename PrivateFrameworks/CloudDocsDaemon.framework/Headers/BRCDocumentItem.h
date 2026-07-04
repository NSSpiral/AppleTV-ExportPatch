/* Runtime dump - BRCDocumentItem
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDocumentItem : BRCLocalItem
{
    BRCLocalVersion * _currentVersion;
    BRCDesiredVersion * _desiredVersion;
    NSMutableSet * _liveConflictLoserEtags;
    NSMutableSet * _resolvedConflictLoserEtags;
}

@property (readonly, nonatomic) NSString * unsaltedBookmarkData;
@property (readonly, nonatomic) NSString * bookmarkData;
@property (readonly, nonatomic) BRCAliasItem * asAlias;
@property (readonly, nonatomic) BRCDirectoryItem * asDirectory;
@property (readonly, nonatomic) BRCDocumentItem * asDocument;
@property (readonly, nonatomic) char hasLocalContent;
@property (readonly, nonatomic) char isOfEvictableSize;
@property (readonly, nonatomic) char isDownloadRequested;
@property (readonly, nonatomic) unsigned int queryItemStatus;
@property (readonly, nonatomic) unsigned int downloadStatus;
@property (readonly, nonatomic) unsigned int uploadStatus;
@property (readonly, nonatomic) char isInTransfer;
@property (readonly, nonatomic) BRCLocalVersion * currentVersion;
@property (readonly, nonatomic) BRCDesiredVersion * desiredVersion;
@property (readonly, nonatomic) BRCItemID * aliasItemID;
@property (retain, nonatomic) NSSet * liveConflictLoserEtags;
@property (readonly, nonatomic) NSSet * resolvedConflictLoserEtags;
@property (readonly, nonatomic) NSDictionary * conflictLoserState;

+ (char)supportsSecureCoding;
+ (char)parseBookmarkData:(NSData *)arg0 inAccountSession:(NSObject *)arg1 docID:(id *)arg2 itemID:(id *)arg3 mangledID:(id *)arg4 unsaltedBookmarkData:(id *)arg5 error:(id *)arg6;
+ (NSString *)bookmarkDataWithRelativePath:(NSString *)arg0;
+ (NSString *)unsaltedBookmarkDataWithRelativePath:(NSString *)arg0;
+ (struct PQLResultSet *)reverseAliasEnumeratorWithUnsaltedBookmarkData:(NSString *)arg0 session:(NSObject *)arg1;
+ (struct PQLResultSet *)reverseAliasEnumeratorWithRelativePath:(NSString *)arg0;
+ (NSString *)unsaltedBookmarkDataWithItemResolutionString:(NSString *)arg0 serverZone:(NSObject *)arg1;
+ (NSString *)itemResolutionStringWithRelativePath:(NSString *)arg0;
+ (NSString *)bookmarkDataWithItemResolutionString:(NSString *)arg0 serverZone:(NSObject *)arg1;

- (BRCDocumentItem *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (char)isDocument;
- (char)isFault;
- (BRCDocumentItem *)asDocument;
- (BRCLocalVersion *)currentVersion;
- (BRCDesiredVersion *)desiredVersion;
- (NSSet *)liveConflictLoserEtags;
- (unsigned int)downloadStatus;
- (unsigned int)uploadStatus;
- (char)isDownloadRequested;
- (NSString *)unsaltedBookmarkData;
- (struct PQLResultSet *)reverseAliasEnumerator;
- (NSString *)descriptionWithContext:(NSObject *)arg0;
- (char)changedAtRelativePath:(NSString *)arg0 scanPackage:(char)arg1;
- (char)_insertInDB:(id)arg0 dbRowID:(unsigned long long)arg1;
- (char)_updateInDB:(id)arg0 diffs:(unsigned long long)arg1;
- (BRCItemID *)aliasItemID;
- (void)learnItemID:(NSObject *)arg0 ownerKey:(NSNumber *)arg1 path:(NSString *)arg2 markLost:(char)arg3;
- (void)markNeedsUploadOrSyncingUpWithAliasTarget:(NSObject *)arg0;
- (void)markDead;
- (char)updateXattrInfoFromPathPath:(NSString *)arg0 error:(id *)arg1;
- (char)isPackage;
- (unsigned long long)diffAgainstServerItem:(NSObject *)arg0;
- (NSString *)bookmarkData;
- (void)handleUnknownItemError;
- (void)setLiveConflictLoserEtags:(NSSet *)arg0;
- (NSSet *)resolvedConflictLoserEtags;
- (void)learnThumbnailSignatureFromVersion:(NSString *)arg0;
- (NSString *)_initWithRelativePath:(NSString *)arg0 parentID:(NSObject *)arg1;
- (NSObject *)_initWithLocalItem:(char)arg0;
- (NSSet *)_initFromPQLResultSet:(NSSet *)arg0 container:(BRCLocalContainer *)arg1 error:(id *)arg2;
- (char)_isInterestingUpdateForNotifs;
- (NSMutableSet *)setOfContainersIDsWithReverseAliases;
- (char)_deleteFromDB:(id)arg0 diffs:(unsigned long long)arg1 keepAliases:(char)arg2;
- (unsigned long long)diffAgainstLocalItem:(NSObject *)arg0;
- (char)updateFromFSAtPath:(NSString *)arg0 parentID:(NSObject *)arg1;
- (void)updateVersionMetadataFromServerItem:(NSObject *)arg0 preventVersionDiffs:(char)arg1;
- (void)markNeedsReading;
- (void)clearFromStage;
- (char)validateLoggingToFile:(struct __sFILE *)arg0;
- (char)isSharedByMe;
- (char)isSharedByMeWithAShareID;
- (NSObject *)_initWithServerItem:(BRCServerItem *)arg0 dbRowID:(unsigned long long)arg1;
- (char)updateLocationAndMetaFromFSAtPath:(NSString *)arg0 parentID:(NSObject *)arg1;
- (void)markForceNeedsSyncUp;
- (void)markLatestSyncRequestRejected;
- (void)markLatestRequestAcknowledged;
- (void)markLiveFromStage;
- (char)evictWithGroup:(NSObject *)arg0 error:(id *)arg1;
- (void)startDownloadWithOptions:(unsigned int)arg0 group:(NSObject *)arg1;
- (NSObject *)contentsRecordID;
- (char)hasLocalContent;
- (unsigned int)queryItemStatus;
- (void)refreshLosersListIfNeededAtPath:(NSString *)arg0;
- (void)updateContentsCKInfoAndDeviceIDFromServerItem:(NSObject *)arg0;
- (void)stageFaultForCreation:(char)arg0 serverItem:(BRCServerItem *)arg1;
- (void)_updateLiveConflictLoserFromFSAtPath:(NSString *)arg0;
- (void)removeLiveConflictLoserEtag:(id)arg0;
- (void)addResolvedConflictLoserEtag:(id)arg0;
- (void)clearVersionSignatures:(unsigned int)arg0 isPackage:(char)arg1;
- (void)markForceUpload;
- (NSDictionary *)conflictLoserState;
- (void)_updateReadThrottleIfNeededForRowID:(unsigned long long)arg0 forCreation:(char)arg1;
- (char)_nukeVersionsFromDB:(id)arg0;
- (void)_updateUploadThrottleIfNeededWithDiffs:(unsigned long long)arg0;
- (char)isOfEvictableSize;
- (int)setVersionToStage:(NSObject *)arg0 diffsWithServerItem:(unsigned long long)arg1 options:(unsigned int)arg2 needsSave:(char *)arg3;
- (char)isInTransfer;
- (void)clearDesiredVersion;
- (void)forceiWorkConflictEtag:(id)arg0;
- (void)forceVersionConflictByClearkingCKInfo;
- (void)appDidResolveConflictLoserWithEtag:(NSString *)arg0;
- (void)markUploadedWithRecord:(NSObject *)arg0;
- (void)markOverQuotaWithError:(NSError *)arg0;
- (float)prepareDeletionSyncUpWithOperation:(NSObject *)arg0 defaults:(SBFWallpaperDefaults *)arg1;
- (float)prepareEditSyncUpWithOperation:(NSObject *)arg0 defaults:(SBFWallpaperDefaults *)arg1;
- (NSString *)itemResolutionString;

@end
