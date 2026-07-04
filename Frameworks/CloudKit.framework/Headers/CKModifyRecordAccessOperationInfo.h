/* Runtime dump - CKModifyRecordAccessOperationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifyRecordAccessOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    NSArray * _recordIDsToGrant;
    NSArray * _recordIDsToRevoke;
}

@property (retain, nonatomic) NSArray * recordIDsToGrant;
@property (retain, nonatomic) NSArray * recordIDsToRevoke;

+ (char)supportsSecureCoding;

- (CKModifyRecordAccessOperationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSArray *)recordIDsToGrant;
- (NSArray *)recordIDsToRevoke;
- (void)setRecordIDsToGrant:(NSArray *)arg0;
- (void)setRecordIDsToRevoke:(NSArray *)arg0;

@end
