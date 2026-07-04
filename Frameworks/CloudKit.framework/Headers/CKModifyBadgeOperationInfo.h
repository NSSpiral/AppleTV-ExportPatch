/* Runtime dump - CKModifyBadgeOperationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifyBadgeOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    unsigned int _badgeValue;
}

@property (nonatomic) unsigned int badgeValue;

+ (char)supportsSecureCoding;

- (CKModifyBadgeOperationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setBadgeValue:(unsigned int)arg0;
- (unsigned int)badgeValue;

@end
