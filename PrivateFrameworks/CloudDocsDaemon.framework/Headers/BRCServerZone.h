/* Runtime dump - BRCServerZone
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCServerZone : NSObject <BRCContainer>
{
    BRCServerChangeState * _changeState;
    BRCAccountSession * _session;
    PQLConnection * _db;
    NSString * _zoneName;
    NSNumber * _dbRowID;
    BRCLocalContainer * _localContainer;
    BRCSyncContext * _syncContext;
    char _needsSave;
    NSString * _containerMetadataEtag;
}

@property (readonly, nonatomic) char isSyncingDownForTheFirstTime;
@property (readonly) BRCServerChangeState * changeState;
@property (readonly, nonatomic) NSString * containerMetadataEtag;
@property (nonatomic) BRCLocalContainer * localContainer;
@property (retain, nonatomic) BRCAccountSession * session;
@property (readonly, nonatomic) NSString * zoneName;
@property (readonly, nonatomic) NSString * ownerName;
@property (readonly, nonatomic) CKRecordZoneID * zoneID;
@property (readonly, nonatomic) BRCSyncContext * syncContext;
@property (nonatomic) char needsSave;
@property (retain, nonatomic) NSNumber * dbRowID;
@property (readonly, nonatomic) char isSharedContainer;
@property (readonly, nonatomic) char isPrivateContainer;
@property (readonly, nonatomic) PQLConnection * db;
@property (readonly, nonatomic) NSMutableDictionary * plist;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void).cxx_destruct;
- (void)setNeedsSave:(char)arg0;
- (BRCSyncContext *)syncContext;
- (BRCAccountSession *)session;
- (NSString *)ownerName;
- (NSString *)zoneName;
- (PQLConnection *)db;
- (char)isPrivateContainer;
- (char)isSharedContainer;
- (NSObject *)itemByItemID:(NSObject *)arg0;
- (NSNumber *)dbRowID;
- (NSMutableDictionary *)plist;
- (void)setDbRowID:(NSNumber *)arg0;
- (BRCServerZone *)initWithZoneName:(NSString *)arg0 dbRowID:(NSNumber *)arg1 plist:(NSMutableDictionary *)arg2 session:(BRCAccountSession *)arg3;
- (BRCLocalContainer *)localContainer;
- (char)needsSave;
- (NSString *)descriptionWithContext:(NSObject *)arg0;
- (char)dumpTablesToContext:(NSObject *)arg0 error:(id *)arg1;
- (BRCServerChangeState *)changeState;
- (void)setSession:(BRCAccountSession *)arg0;
- (char)validateItemsLoggingToFile:(struct __sFILE *)arg0 db:(int)arg1;
- (char)validateStructureLoggingToFile:(struct __sFILE *)arg0 db:(int)arg1;
- (char)resetServerTruth;
- (void)deleteAllContentsOnServerWithCompletionBlock:(id /* block */)arg0;
- (NSString *)containerMetadataEtag;
- (CKRecordZoneID *)zoneID;
- (char)_saveItemID:(NSObject *)arg0 stat:(id)arg1 record:(NSObject *)arg2 origName:(NSString *)arg3 base:(unsigned char)arg4 no:(id)arg5 ext:(NSString *)arg6;
- (char)_saveItemID:(NSObject *)arg0 stat:(id)arg1 record:(NSObject *)arg2;
- (char)_saveEditedDirOrDocStructureRecord:(NSObject *)arg0;
- (char)_saveEditedAliasRecord:(NSObject *)arg0;
- (char)_saveEditedDocumentContentRecord:(NSObject *)arg0;
- (char)_saveEditedRecord:(NSObject *)arg0 syncStatus:(int)arg1;
- (char)_markItemIDDead:(id)arg0 recordID:(NSObject *)arg1;
- (struct PQLResultSet *)_enumeratePendingFetchRecords;
- (struct PQLResultSet *)_enumeratePendingFetchDeletedRecordIDs;
- (char)_saveEditedStructureRecords:(NSArray *)arg0 deletedRecordIDs:(NSMutableArray *)arg1 syncStatus:(int)arg2;
- (char)_saveEditedContentRecords:(NSArray *)arg0 syncStatus:(int)arg1;
- (char)allocateRanks;
- (void)_collectTombstoneForRank:(unsigned long long)arg0;
- (NSObject *)asPrivateZone;
- (NSObject *)asSharedZone;
- (char)hasXattrWithSignature:(NSObject *)arg0;
- (char)storeXattr:(id)arg0;
- (NSObject *)xattrForSignature:(NSObject *)arg0;
- (void)handleBrokenStructure;
- (unsigned long long)didSyncDownRequestID:(unsigned long long)arg0 serverChangeToken:(NSString *)arg1 editedRecords:(NSArray *)arg2 deletedRecordIDs:(NSMutableArray *)arg3 syncStatus:(int)arg4;
- (void)collectTombstoneRanks:(id)arg0;
- (BRCZonePurgeOperation *)deleteAllContentsOperation;
- (struct PQLResultSet *)itemsEnumeratorWithDB:(double)arg0;
- (void)setLocalContainer:(BRCLocalContainer *)arg0;
- (char)isSyncingDownForTheFirstTime;

@end
