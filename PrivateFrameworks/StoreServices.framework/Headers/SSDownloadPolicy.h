/* Runtime dump - SSDownloadPolicy
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadPolicy : NSObject <NSCoding, SSXPCCoding, NSCopying>
{
    int _bagType;
    NSString * _downloadKind;
    NSMutableArray * _policyRules;
}

@property (readonly, nonatomic) NSString * downloadKind;
@property (readonly, nonatomic) int URLBagType;
@property (copy, nonatomic) NSArray * policyRules;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSDownloadPolicy *)initWithXPCEncoding:(NSString *)arg0;
- (SSDownloadPolicy *)initWithDownloadKind:(NSString *)arg0 URLBagType:(int)arg1;
- (void)unionPolicyRule:(NSObject *)arg0;
- (void)dealloc;
- (SSDownloadPolicy *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (SSDownloadPolicy *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)policyRules;
- (SSDownloadPolicy *)initWithNetworkConstraints:(SSNetworkConstraints *)arg0;
- (int)URLBagType;
- (NSString *)downloadKind;
- (void)unionNetworkConstraints:(NSArray *)arg0;
- (id)_policyRuleForSizeLimit:(long long)arg0;
- (void)setPolicyRule:(NSObject *)arg0;
- (void)setPolicyRules:(NSArray *)arg0;

@end
