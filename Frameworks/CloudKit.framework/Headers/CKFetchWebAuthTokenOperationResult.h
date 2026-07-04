/* Runtime dump - CKFetchWebAuthTokenOperationResult
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchWebAuthTokenOperationResult : CKOperationResult <NSSecureCoding>
{
    NSString * _webAuthToken;
}

@property (copy, nonatomic) NSString * webAuthToken;

+ (char)supportsSecureCoding;

- (CKFetchWebAuthTokenOperationResult *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CKFetchWebAuthTokenOperationResult *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSString *)CKPropertiesDescription;
- (void)setWebAuthToken:(NSString *)arg0;
- (NSString *)webAuthToken;

@end
