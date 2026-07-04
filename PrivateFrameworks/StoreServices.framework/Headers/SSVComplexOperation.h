/* Runtime dump - SSVComplexOperation
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVComplexOperation : SSVOperation
{
    SSVFairPlaySAPSession * _sapSession;
    SSURLBag * _urlBag;
    NSDictionary * _urlBagDictionary;
}

@property (retain) SSVFairPlaySAPSession * SAPSession;
@property (readonly, copy) NSDictionary * URLBagDictionary;

- (void).cxx_destruct;
- (void)setSAPSession:(NSObject *)arg0;
- (void)configureWithURLBag:(NSString *)arg0;
- (void)configureWithURLBagDictionary:(NSDictionary *)arg0;
- (SSVFairPlaySAPSession *)SAPSession;
- (NSDictionary *)URLBagDictionary;
- (NSURLRequest *)newLoadURLOperationWithRequest:(NSURLRequest *)arg0;

@end
