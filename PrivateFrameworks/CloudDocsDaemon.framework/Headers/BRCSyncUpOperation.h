/* Runtime dump - BRCSyncUpOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSyncUpOperation : _BRCOperation <BRCOperationSubclass>
{
    unsigned long long _requestID;
    NSMutableArray * _recordsToSave;
    NSMutableArray * _deletedRecordIDs;
    NSMutableArray * _deletedShareIDs;
    NSMutableArray * _recordsNeedingSharingInfo;
    NSMutableDictionary * _recordIDsToDeleteToEtags;
    NSMutableDictionary * _conflictLosersToResolveByRecordID;
    NSString * _stageID;
    id _syncUpCompletionBlock;
    float _cost;
    BRCServerZone * _serverZone;
}

@property (readonly, nonatomic) float cost;
@property (copy, nonatomic) id syncUpCompletionBlock;
@property (retain, nonatomic) BRCServerZone * serverZone;
@property (retain, nonatomic) NSMutableArray * recordsToSave;
@property (retain, nonatomic) NSMutableArray * deletedRecordIDs;
@property (retain, nonatomic) NSMutableArray * deletedShareIDs;
@property (retain, nonatomic) NSMutableArray * recordsNeedingSharingInfo;
@property (retain, nonatomic) NSMutableDictionary * recordIDsToDeleteToEtags;
@property (retain, nonatomic) NSMutableDictionary * conflictLosersToResolveByRecordID;
@property (retain, nonatomic) NSString * stageID;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)syncUpOperationForZone:(NSObject *)arg0 maxCost:(float)arg1 retryAfter:(unsigned long long *)arg2;

- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:(NSObject *)arg0 error:(NSError *)arg1;
- (char)shouldRetryForError:(NSError *)arg0;
- (BRCServerZone *)serverZone;
- (NSString *)stageID;
- (NSMutableArray *)deletedRecordIDs;
- (NSMutableDictionary *)recordIDsToDeleteToEtags;
- (NSMutableArray *)recordsToSave;
- (NSMutableArray *)deletedShareIDs;
- (NSMutableDictionary *)conflictLosersToResolveByRecordID;
- (NSMutableArray *)recordsNeedingSharingInfo;
- (BRCSyncUpOperation *)initWithZone:(NSObject *)arg0;
- (char)prepareWithMaxCost:(float)arg0 retryAfter:(unsigned long long *)arg1;
- (void)setRecordsToSave:(NSMutableArray *)arg0;
- (void)setRecordIDsToDeleteToEtags:(NSMutableDictionary *)arg0;
- (void)setConflictLosersToResolveByRecordID:(NSMutableDictionary *)arg0;
- (void)_scheduleModifyRecordsOperation;
- (void)setDeletedRecordIDs:(NSMutableArray *)arg0;
- (void)setDeletedShareIDs:(NSMutableArray *)arg0;
- (void)setRecordsNeedingSharingInfo:(NSMutableArray *)arg0;
- (void)setStageID:(NSString *)arg0;
- (id /* block */)syncUpCompletionBlock;
- (void)setSyncUpCompletionBlock:(id /* block */)arg0;
- (float)cost;
- (void)setServerZone:(BRCServerZone *)arg0;

@end
