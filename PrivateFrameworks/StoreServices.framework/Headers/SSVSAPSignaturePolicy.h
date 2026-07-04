/* Runtime dump - SSVSAPSignaturePolicy
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVSAPSignaturePolicy : NSObject <NSCopying>
{
    int _policyType;
    NSArray * _signatureComponents;
}

@property (readonly, nonatomic) int policyType;
@property (readonly, copy, nonatomic) NSArray * signatureComponents;

- (SSVSAPSignaturePolicy *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (SSVSAPSignaturePolicy *)initWithPolicyType:(int)arg0;
- (SSVSAPSignaturePolicy *)initWithSignedActionsDictionary:(NSDictionary *)arg0;
- (SSVSAPSignaturePolicy *)initWithPolicyType:(int)arg0 signatureComponents:(NSArray *)arg1;
- (NSURLResponse *)dataToSignWithURLResponse:(NSString *)arg0 responseData:(NSData *)arg1;
- (int)policyType;
- (NSURLRequest *)dataToSignWithURLRequest:(NSString *)arg0;
- (NSObject *)_dataToSignWithDataSource:(NSObject *)arg0;
- (NSDictionary *)dataToSignWithRequestProperties:(NSDictionary *)arg0;
- (NSArray *)signatureComponents;

@end
