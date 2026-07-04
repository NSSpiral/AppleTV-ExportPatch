/* Runtime dump - SSPurchaseRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPurchaseRequest : SSRequest <SSPurchaseManagerDelegate, SSXPCCoding>
{
    char _isBackgroundRequest;
    NSArray * _purchases;
    char _shouldValidatePurchases;
    id _completionBlock;
    char _createsDownloads;
    NSMutableSet * _openPurchaseIdentifiers;
    id _purchaseBlock;
    id _purchaseResponseBlock;
    SSPurchaseManager * _purchaseManager;
    char _needsAuthentication;
}

@property (readonly) NSArray * purchases;
@property (nonatomic) char backgroundRequest;
@property (nonatomic) char needsAuthentication;
@property (nonatomic) <SSPurchaseRequestDelegate> * delegate;
@property (nonatomic) char createsDownloads;
@property (nonatomic) char shouldValidatePurchases;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)startWithCompletionBlock:(id /* block */)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSPurchaseRequest *)initWithXPCEncoding:(NSString *)arg0;
- (void)purchaseManager:(SSPurchaseManager *)arg0 didFinishPurchasesWithResponses:(NSSet *)arg1;
- (void)cancel;
- (void)dealloc;
- (SSPurchaseRequest *)init;
- (char)start;
- (void)setNeedsAuthentication:(char)arg0;
- (SSPurchaseRequest *)initWithPurchases:(NSArray *)arg0;
- (void)setCreatesDownloads:(char)arg0;
- (void)startWithPurchaseResponseBlock:(id /* block */)arg0 completionBlock:(/* block */ id)arg1;
- (void)_addPurchasesToManager;
- (void)_finishPurchasesWithResponses:(NSSet *)arg0;
- (NSString *)_purchaseForUniqueIdentifier:(long long)arg0;
- (NSArray *)purchases;
- (void)startWithPurchaseBlock:(id /* block */)arg0 completionBlock:(/* block */ id)arg1;
- (char)isBackgroundRequest;
- (void)setBackgroundRequest:(char)arg0;
- (char)createsDownloads;
- (char)needsAuthentication;
- (char)shouldValidatePurchases;
- (void)setShouldValidatePurchases:(char)arg0;

@end
