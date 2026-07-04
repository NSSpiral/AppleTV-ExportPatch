/* Runtime dump - BRCPrivateLocalContainer
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPrivateLocalContainer : BRCLocalContainer
{
    NSMutableArray * _syncBarriers;
    char _containerMetadataNeedsSyncUp;
    BRContainer * _containerMetadata;
    NSString * _containerMetadataEtag;
}

@property (readonly, nonatomic) char isSharedContainer;
@property (readonly, nonatomic) char isPrivateContainer;
@property (readonly, nonatomic) BRCPrivateServerZone * privateZone;
@property (readonly, nonatomic) BRCRelativePath * documentsPath;
@property (readonly, nonatomic) BRContainer * containerMetadata;
@property (retain, nonatomic) NSString * containerMetadataEtag;
@property (nonatomic) char containerMetadataNeedsSyncUp;

- (void)resume;
- (void).cxx_destruct;
- (char)isPrivateContainer;
- (char)isSharedContainer;
- (NSDictionary *)plist;
- (char)dumpActivityToContext:(NSObject *)arg0 error:(id *)arg1;
- (char)dumpTablesToContext:(NSObject *)arg0 error:(id *)arg1;
- (NSObject *)asPrivateContainer;
- (id)resolveClashOfAlias:(id)arg0 atPath:(NSString *)arg1 withAlias:(CKDPUserAlias *)arg2 atPath:(NSString *)arg3;
- (NSObject *)serverItemByParentID:(NSObject *)arg0 andName:(id *)arg1;
- (NSObject *)itemByParentID:(NSObject *)arg0 andName:(id *)arg1;
- (NSString *)pathRelativeToRoot;
- (NSObject *)faultByParentID:(NSObject *)arg0 andDisplayName:(NSString *)arg1;
- (NSObject *)reservedItemByParentID:(NSObject *)arg0 andDisplayName:(NSString *)arg1;
- (void)signalFaultingWatchers:(id)arg0;
- (NSData *)aliasByUnsaltedBookmarkData:(NSData *)arg0;
- (BRCPrivateServerZone *)privateZone;
- (char)validateItemsLoggingToFile:(struct __sFILE *)arg0 db:(int)arg1;
- (char)validateStructureLoggingToFile:(struct __sFILE *)arg0 db:(int)arg1;
- (char)printStatusLoggingToFile:(struct __sFILE *)arg0 db:(int)arg1;
- (char)itemID:(unsigned long long)arg0 isStrictChildOfItemID:(NSObject *)arg1;
- (NSString *)containerMetadataEtag;
- (void)setContainerMetadataEtag:(NSString *)arg0;
- (void)setContainerMetadataNeedsSyncUp:(char)arg0;
- (BRContainer *)containerMetadata;
- (void)_updateContainerMetadataFromRecord:(NSObject *)arg0;
- (char)recomputeSyncBlockState;
- (void)setServerZone:(BRCServerZone *)arg0;
- (BRCPrivateLocalContainer *)initWithContainerID:(NSString *)arg0 dbRowID:(unsigned long long)arg1 db:(struct sqlite3 *)arg2 session:(BRCAccountSession *)arg3 initialCreation:(char)arg4;
- (void)updateWithPlist:(NSMutableDictionary *)arg0;
- (unsigned int)_activateState:(unsigned int)arg0 origState:(unsigned int)arg1;
- (NSData *)serverAliasByUnsaltedBookmarkData:(NSData *)arg0;
- (char)containerMetadataNeedsSyncUp;
- (void)_checkResultSetIsEmpty:(id)arg0 logToFile:(struct __sFILE *)arg1 reason:(int)arg2 result:(void *)arg3;
- (void)scheduleContainerMetadataSyncUp;
- (void)notifyClient:(NSObject *)arg0 whenFaultingIsDone:(id)arg1;
- (BRCRelativePath *)documentsPath;
- (char)existsByParentID:(NSObject *)arg0 andName:(id *)arg1;
- (void)performBlock:(id /* block */)arg0 whenSyncDownCompletesLookingForAliasWithBookmarkData:(/* block */ id)arg1;
- (char)removeSyncDownForAliasData:(NSData *)arg0;

@end
