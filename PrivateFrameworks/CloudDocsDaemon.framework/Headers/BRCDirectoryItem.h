/* Runtime dump - BRCDirectoryItem
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDirectoryItem : BRCLocalItem

@property (readonly, nonatomic) BRCAliasItem * asAlias;
@property (readonly, nonatomic) BRCDirectoryItem * asDirectory;
@property (readonly, nonatomic) BRCDocumentItem * asDocument;

- (char)changedAtRelativePath:(NSString *)arg0 scanPackage:(char)arg1;
- (char)_insertInDB:(id)arg0 dbRowID:(unsigned long long)arg1;
- (char)_updateInDB:(id)arg0 diffs:(unsigned long long)arg1;
- (char)isDirectory;
- (char)_deleteFromDB:(id)arg0 diffs:(unsigned long long)arg1 keepAliases:(char)arg2;
- (char)updateFromFSAtPath:(NSString *)arg0 parentID:(NSObject *)arg1;
- (BRCDirectoryItem *)asDirectory;
- (void)markLostDirectoryAsAlmostDead;
- (char)updateLocationAndMetaFromFSAtPath:(NSString *)arg0 parentID:(NSObject *)arg1;
- (char)evictWithGroup:(NSObject *)arg0 error:(id *)arg1;
- (void)startDownloadWithOptions:(unsigned int)arg0 group:(NSObject *)arg1;
- (float)prepareEditSyncUpWithOperation:(NSObject *)arg0 defaults:(SBFWallpaperDefaults *)arg1;
- (char)hasDeadChildren;
- (unsigned int)markChildrenLost;
- (char)hasLostChildren;
- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)arg0;
- (char)hasLiveChildren;

@end
