/* Runtime dump - CKFetchUserQuotaOperationResult
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchUserQuotaOperationResult : CKOperationResult <NSSecureCoding>
{
    unsigned long long _quotaAvailable;
}

@property (nonatomic) unsigned long long quotaAvailable;

+ (char)supportsSecureCoding;

- (CKFetchUserQuotaOperationResult *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CKFetchUserQuotaOperationResult *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)CKPropertiesDescription;
- (void)setQuotaAvailable:(unsigned long long)arg0;
- (unsigned long long)quotaAvailable;

@end
