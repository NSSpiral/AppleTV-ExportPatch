/* Runtime dump - CKDRecordResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDRecordResponse : NSObject
{
    CKRecordID * _recordID;
    NSString * _etag;
    CKRecord * _record;
}

@property (retain, nonatomic) CKRecordID * recordID;
@property (retain, nonatomic) NSString * etag;
@property (retain, nonatomic) CKRecord * record;

- (NSString *)description;
- (void).cxx_destruct;
- (void)setEtag:(NSString *)arg0;
- (NSString *)etag;
- (CKRecord *)record;
- (CKRecordID *)recordID;
- (void)setRecordID:(CKRecordID *)arg0;
- (void)setRecord:(CKRecord *)arg0;
- (NSString *)CKPropertiesDescription;

@end
