/* Runtime dump - CKFetchRecordVersionsOperationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchRecordVersionsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    NSArray * _recordIDs;
    NSArray * _desiredKeys;
    NSString * _minimumVersionETag;
}

@property (retain, nonatomic) NSArray * recordIDs;
@property (retain, nonatomic) NSArray * desiredKeys;
@property (retain, nonatomic) NSString * minimumVersionETag;

+ (char)supportsSecureCoding;

- (CKFetchRecordVersionsOperationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (void)setDesiredKeys:(NSArray *)arg0;
- (void)setRecordIDs:(NSArray *)arg0;
- (NSArray *)desiredKeys;
- (NSArray *)recordIDs;
- (NSString *)minimumVersionETag;
- (void)setMinimumVersionETag:(NSString *)arg0;

@end
