/* Runtime dump - CKFetchRecordsOperationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    char _isFetchCurrentUserOperation;
    char _shouldFetchAssetContent;
    NSArray * _recordIDs;
    NSArray * _desiredKeys;
    NSDictionary * _recordIDsToVersionETags;
    NSDictionary * _desiredPackageFileIndices;
    NSDictionary * _signaturesOfAssetsByRecordIDAndKey;
    NSSet * _assetFieldNamesToPublishURLs;
    unsigned int _requestedTTL;
    unsigned int _URLOptions;
    NSDictionary * _webSharingIdentityDataByRecordID;
}

@property (retain, nonatomic) NSArray * recordIDs;
@property (nonatomic) char isFetchCurrentUserOperation;
@property (retain, nonatomic) NSArray * desiredKeys;
@property (retain, nonatomic) NSDictionary * recordIDsToVersionETags;
@property (retain, nonatomic) NSDictionary * desiredPackageFileIndices;
@property (nonatomic) char shouldFetchAssetContent;
@property (retain, nonatomic) NSDictionary * signaturesOfAssetsByRecordIDAndKey;
@property (retain, nonatomic) NSSet * assetFieldNamesToPublishURLs;
@property (nonatomic) unsigned int requestedTTL;
@property (nonatomic) unsigned int URLOptions;
@property (retain, nonatomic) NSDictionary * webSharingIdentityDataByRecordID;

+ (char)supportsSecureCoding;

- (void)setIsFetchCurrentUserOperation:(char)arg0;
- (CKFetchRecordsOperationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (void)setDesiredKeys:(NSArray *)arg0;
- (void)setRecordIDsToVersionETags:(NSDictionary *)arg0;
- (void)setShouldFetchAssetContent:(char)arg0;
- (void)setDesiredPackageFileIndices:(NSDictionary *)arg0;
- (void)setRequestedTTL:(unsigned int)arg0;
- (void)setURLOptions:(unsigned int)arg0;
- (char)isFetchCurrentUserOperation;
- (void)setRecordIDs:(NSArray *)arg0;
- (NSArray *)desiredKeys;
- (char)shouldFetchAssetContent;
- (NSArray *)recordIDs;
- (unsigned int)requestedTTL;
- (unsigned int)URLOptions;
- (void)setAssetFieldNamesToPublishURLs:(NSSet *)arg0;
- (NSDictionary *)recordIDsToVersionETags;
- (NSSet *)assetFieldNamesToPublishURLs;
- (NSDictionary *)desiredPackageFileIndices;
- (NSDictionary *)signaturesOfAssetsByRecordIDAndKey;
- (NSDictionary *)webSharingIdentityDataByRecordID;
- (void)setWebSharingIdentityDataByRecordID:(NSDictionary *)arg0;
- (void)setSignaturesOfAssetsByRecordIDAndKey:(NSDictionary *)arg0;

@end
