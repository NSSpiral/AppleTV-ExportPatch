/* Runtime dump - SSVURLBagInterpreter
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVURLBagInterpreter : NSObject <NSCopying>
{
    NSMutableDictionary * _cachedBagValues;
    NSArray * _subscriptionSignedActions;
    SSVSAPSignaturePolicy * _subscriptionSignaturePolicy;
    NSURL * _mescalPrimingURL;
}

@property (readonly, copy, nonatomic) NSArray * AMDDomains;
@property (readonly, copy, nonatomic) NSURL * mescalCertificateURL;
@property (readonly, copy, nonatomic) NSURL * mescalSetupURL;
@property (readonly, copy, nonatomic) NSURL * mescalPrimingURL;
@property (readonly, copy, nonatomic) NSDictionary * mescalSignedActions;
@property (readonly, copy, nonatomic) NSDictionary * mescalSignedRequests;
@property (readonly, copy, nonatomic) NSDictionary * mescalSignedResponses;
@property (readonly, copy, nonatomic) NSString * storeFrontSuffix;

- (SSVURLBagInterpreter *)initWithURLBag:(NSString *)arg0;
- (SSVURLBagInterpreter *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (SSVURLBagInterpreter *)initWithURLBagDictionary:(NSDictionary *)arg0;
- (NSString *)_valueForKey:(NSString *)arg0 withClass:(Class)arg1;
- (NSString *)URLForURLBagKey:(NSString *)arg0;
- (NSDictionary *)mescalSignedRequests;
- (NSDictionary *)mescalSignedActions;
- (NSDictionary *)mescalSignedResponses;
- (NSArray *)AMDDomains;
- (NSString *)valueForURLBagKey:(NSString *)arg0;
- (NSURL *)mescalCertificateURL;
- (NSURL *)mescalSetupURL;
- (NSURL *)mescalSignaturePolicyForRequestURL:(NSURL *)arg0;
- (NSURL *)mescalSignaturePolicyForResponseURL:(NSURL *)arg0;
- (char)shouldSendAnonymousMachineIdentifierForURL:(NSURL *)arg0;
- (NSString *)storeFrontSuffix;
- (NSURL *)mescalPrimingURL;

@end
