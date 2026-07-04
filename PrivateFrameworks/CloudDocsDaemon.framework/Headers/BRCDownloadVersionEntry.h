/* Runtime dump - BRCDownloadVersionEntry
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDownloadVersionEntry : BRCDownloadEntry
{
    CKRecordID * _secondaryRecordID;
    CKRecord * _secondaryRecord;
    char _sharedZone;
    char _isLoser;
    GSPermanentStorage * _storage;
    NSError * _gsError;
}

@property (readonly, nonatomic) GSPermanentStorage * storage;
@property (retain, nonatomic) BRCProgress * progress;
@property (readonly, nonatomic) NSError * gsError;
@property (readonly, nonatomic) char isLoser;

- (NSString *)description;
- (void)setProgress:(BRCProgress *)arg0;
- (BRCProgress *)progress;
- (void).cxx_destruct;
- (int)kind;
- (BRCDownloadVersionEntry *)initWithDocument:(NSObject *)arg0 stageID:(NSString *)arg1 etag:(NSString *)arg2 isLoser:(char)arg3;
- (GSPermanentStorage *)storage;
- (NSError *)gsError;
- (CKRecordID *)secondaryRecordID;
- (CKRecord *)secondaryRecord;
- (void)setSecondaryRecord:(CKRecord *)arg0;
- (NSObject *)_stageContentWithSession:(NSObject *)arg0 error:(id *)arg1;
- (NSObject *)_stageWithSession:(NSObject *)arg0 creationInfo:(id *)arg1 error:(id *)arg2;
- (char)isLoser;

@end
