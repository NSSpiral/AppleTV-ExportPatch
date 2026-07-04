/* Runtime dump - SSPersonalizeOffersRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPersonalizeOffersRequest : SSRequest <SSXPCCoding>
{
    NSArray * _items;
}

@property (readonly, nonatomic) NSArray * items;
@property (nonatomic) <SSPersonalizeOffersDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)startWithCompletionBlock:(id /* block */)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSPersonalizeOffersRequest *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (NSArray *)items;
- (SSPersonalizeOffersRequest *)initWithItems:(NSArray *)arg0;
- (char)start;
- (void)startWithPersonalizedResponseBlock:(id /* block */)arg0;

@end
