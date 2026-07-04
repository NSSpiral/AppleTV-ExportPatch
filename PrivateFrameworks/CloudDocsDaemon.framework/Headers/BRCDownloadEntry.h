/* Runtime dump - BRCDownloadEntry
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDownloadEntry : NSObject <BRCTransferEntry>
{
    long long _throttleID;
    unsigned long long _totalSize;
    NSString * _etag;
    BRCItemID * _itemID;
    NSString * _stageID;
    BRCProgress * _progress;
    CKRecord * _record;
    CKRecordID * _recordID;
    unsigned long long _doneSize;
}

@property (readonly, nonatomic) int kind;
@property (readonly, nonatomic) CKRecordID * recordID;
@property (readonly, nonatomic) CKRecordID * secondaryRecordID;
@property (readonly, nonatomic) BRCItemID * itemID;
@property (readonly, nonatomic) NSString * stageID;
@property (readonly, nonatomic) NSNumber * transferID;
@property (readonly, nonatomic) NSString * etag;
@property (readonly, nonatomic) unsigned long long totalSize;
@property (readonly, nonatomic) BRCProgress * progress;
@property (nonatomic) unsigned long long doneSize;
@property (retain, nonatomic) CKRecord * record;
@property (retain, nonatomic) CKRecord * secondaryRecord;

- (BRCProgress *)progress;
- (void).cxx_destruct;
- (int)kind;
- (NSString *)etag;
- (BRCItemID *)itemID;
- (NSNumber *)transferID;
- (NSString *)stageID;
- (CKRecord *)record;
- (BRCDownloadEntry *)initWithDocument:(NSObject *)arg0 stageID:(NSString *)arg1;
- (CKRecordID *)recordID;
- (CKRecordID *)secondaryRecordID;
- (unsigned long long)totalSize;
- (unsigned long long)doneSize;
- (void)setDoneSize:(unsigned long long)arg0;
- (void)setRecord:(CKRecord *)arg0;
- (CKRecord *)secondaryRecord;
- (void)setSecondaryRecord:(CKRecord *)arg0;

@end
