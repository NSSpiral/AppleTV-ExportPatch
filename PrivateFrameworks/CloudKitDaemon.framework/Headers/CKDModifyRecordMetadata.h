/* Runtime dump - CKDModifyRecordMetadata
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyRecordMetadata : NSObject
{
    char _isDelete;
    CKRecord * _record;
    CKRecordID * _recordID;
    CKRecord * _serverRecord;
    NSString * _etag;
    unsigned int _uploadState;
    NSError * _error;
    CKDProgressTracker * _progressTracker;
}

@property (retain, nonatomic) CKRecord * record;
@property (retain, nonatomic) CKRecordID * recordID;
@property (retain, nonatomic) CKRecord * serverRecord;
@property (nonatomic) char isDelete;
@property (retain, nonatomic) NSString * etag;
@property (nonatomic) unsigned int uploadState;
@property (retain, nonatomic) NSError * error;
@property (retain, nonatomic) CKDProgressTracker * progressTracker;

+ (NSObject *)_stringForUploadState:(unsigned int)arg0;
+ (NSObject *)modifyMetadataWithRecord:(CKRecord *)arg0;
+ (NSObject *)modifyMetadataForDeleteWithRecordID:(CKRecordID *)arg0;

- (NSString *)description;
- (void).cxx_destruct;
- (void)setEtag:(NSString *)arg0;
- (NSString *)etag;
- (NSError *)error;
- (CKRecord *)record;
- (CKRecordID *)recordID;
- (void)setRecordID:(CKRecordID *)arg0;
- (void)setRecord:(CKRecord *)arg0;
- (CKDProgressTracker *)progressTracker;
- (void)setProgressTracker:(CKDProgressTracker *)arg0;
- (char)isDelete;
- (void)setIsDelete:(char)arg0;
- (void)setUploadState:(unsigned int)arg0;
- (unsigned int)uploadState;
- (CKRecord *)serverRecord;
- (void)setServerRecord:(CKRecord *)arg0;
- (void)setError:(NSError *)arg0;

@end
