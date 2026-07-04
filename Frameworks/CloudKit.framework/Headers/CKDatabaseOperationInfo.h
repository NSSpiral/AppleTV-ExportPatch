/* Runtime dump - CKDatabaseOperationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDatabaseOperationInfo : CKOperationInfo <NSSecureCoding>
{
    int _databaseScope;
}

@property (nonatomic) int databaseScope;

+ (char)supportsSecureCoding;

- (CKDatabaseOperationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDatabaseScope:(int)arg0;
- (int)databaseScope;

@end
