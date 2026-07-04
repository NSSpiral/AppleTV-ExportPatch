/* Runtime dump - BRCAliasItem
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCAliasItem : BRCLocalItem

@property (readonly, nonatomic) BRCAliasItem * asAlias;
@property (readonly, nonatomic) BRCDirectoryItem * asDirectory;
@property (readonly, nonatomic) BRCDocumentItem * asDocument;
@property (readonly, nonatomic) BRCLocalContainer * targetLocalContainer;
@property (readonly, nonatomic) NSString * targetContainerID;
@property (readonly, nonatomic) BRCItemID * targetItemID;

- (char)isAlias;
- (BRCAliasItem *)asAlias;
- (BRCItemID *)targetItemID;
- (BRCLocalContainer *)targetLocalContainer;
- (NSString *)targetContainerID;
- (char)changedAtRelativePath:(NSString *)arg0 scanPackage:(char)arg1;
- (char)_insertInDB:(id)arg0 dbRowID:(unsigned long long)arg1;
- (char)_updateInDB:(id)arg0 diffs:(unsigned long long)arg1;
- (void)learnTarget:(NSObject *)arg0;
- (void)rewriteAliasOnDiskWithTarget:(NSObject *)arg0;
- (void)markNeedsUploadOrSyncingUpWithAliasTarget:(NSObject *)arg0;
- (char)updateXattrInfoFromPathPath:(NSString *)arg0 error:(id *)arg1;
- (char)updateOnDiskWithAliasTarget:(NSObject *)arg0 forServerEdit:(char)arg1;
- (void)serverDidAckAliasTargetDeletion;
- (id)structureRecordBeingDeadInServerTruth:(char)arg0 stageID:(NSString *)arg1;
- (NSObject *)targetReference;
- (float)prepareEditSyncUpWithOperation:(NSObject *)arg0 defaults:(SBFWallpaperDefaults *)arg1;

@end
