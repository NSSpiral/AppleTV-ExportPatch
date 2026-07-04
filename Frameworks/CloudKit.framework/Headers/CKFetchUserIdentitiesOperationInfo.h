/* Runtime dump - CKFetchUserIdentitiesOperationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchUserIdentitiesOperationInfo : CKOperationInfo <NSSecureCoding>
{
    NSArray * _identityInfos;
}

@property (retain, nonatomic) NSArray * identityInfos;

+ (char)supportsSecureCoding;

- (CKFetchUserIdentitiesOperationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSArray *)identityInfos;
- (void)setIdentityInfos:(NSArray *)arg0;

@end
