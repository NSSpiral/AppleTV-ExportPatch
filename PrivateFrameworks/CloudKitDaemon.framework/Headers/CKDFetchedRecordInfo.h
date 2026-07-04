/* Runtime dump - CKDFetchedRecordInfo
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchedRecordInfo : NSObject
{
    CKRecord * _record;
    NSError * _error;
}

@property (retain, nonatomic) CKRecord * record;
@property (retain, nonatomic) NSError * error;

+ (NSObject *)infoWithRecord:(CKRecord *)arg0 error:(NSError *)arg1;
+ (NSObject *)infoWithRecord:(CKRecord *)arg0;

- (void).cxx_destruct;
- (NSError *)error;
- (CKRecord *)record;
- (void)setRecord:(CKRecord *)arg0;
- (void)setError:(NSError *)arg0;

@end
