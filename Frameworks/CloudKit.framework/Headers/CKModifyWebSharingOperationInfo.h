/* Runtime dump - CKModifyWebSharingOperationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifyWebSharingOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    NSArray * _recordIDsToShare;
    NSArray * _recordIDsToUnshare;
    NSArray * _recordIDsToShareReadWrite;
}

@property (retain, nonatomic) NSArray * recordIDsToShare;
@property (retain, nonatomic) NSArray * recordIDsToUnshare;
@property (retain, nonatomic) NSArray * recordIDsToShareReadWrite;

+ (char)supportsSecureCoding;

- (CKModifyWebSharingOperationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (void)setRecordIDsToShareReadWrite:(NSArray *)arg0;
- (NSArray *)recordIDsToShare;
- (NSArray *)recordIDsToUnshare;
- (NSArray *)recordIDsToShareReadWrite;
- (void)setRecordIDsToShare:(NSArray *)arg0;
- (void)setRecordIDsToUnshare:(NSArray *)arg0;

@end
