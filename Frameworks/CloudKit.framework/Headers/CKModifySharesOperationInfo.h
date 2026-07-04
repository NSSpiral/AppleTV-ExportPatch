/* Runtime dump - CKModifySharesOperationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifySharesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    NSArray * _sharesToSave;
    NSArray * _shareIDsToDelete;
}

@property (retain, nonatomic) NSArray * sharesToSave;
@property (retain, nonatomic) NSArray * shareIDsToDelete;

+ (char)supportsSecureCoding;

- (void)setSharesToSave:(NSArray *)arg0;
- (void)setShareIDsToDelete:(NSArray *)arg0;
- (CKModifySharesOperationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSArray *)sharesToSave;
- (NSArray *)shareIDsToDelete;

@end
