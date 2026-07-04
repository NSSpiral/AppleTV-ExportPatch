/* Runtime dump - CKPublishAssetsOperationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKPublishAssetsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    NSArray * _recordIDs;
    NSDictionary * _fileNamesByAssetFieldNames;
    unsigned int _requestedTTL;
    unsigned int _URLOptions;
}

@property (retain, nonatomic) NSArray * recordIDs;
@property (retain, nonatomic) NSDictionary * fileNamesByAssetFieldNames;
@property (nonatomic) unsigned int requestedTTL;
@property (nonatomic) unsigned int URLOptions;

+ (char)supportsSecureCoding;

- (CKPublishAssetsOperationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (void)setFileNamesByAssetFieldNames:(NSDictionary *)arg0;
- (void)setRequestedTTL:(unsigned int)arg0;
- (void)setURLOptions:(unsigned int)arg0;
- (void)setRecordIDs:(NSArray *)arg0;
- (NSArray *)recordIDs;
- (NSDictionary *)fileNamesByAssetFieldNames;
- (unsigned int)requestedTTL;
- (unsigned int)URLOptions;

@end
