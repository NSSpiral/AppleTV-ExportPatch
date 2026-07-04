/* Runtime dump - ISLoadURLBagOperation
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate>
{
    SSURLBagContext * _context;
    ISURLBag * _outputBag;
}

@property (readonly) SSURLBagContext * context;
@property (readonly) ISURLBag * URLBag;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (ISLoadURLBagOperation *)init;
- (SSURLBagContext *)context;
- (void)run;
- (void)operation:(ISURLOperation *)arg0 willSendRequest:(NSURLRequest *)arg1;
- (ISLoadURLBagOperation *)initWithBagContext:(SSURLBagContext *)arg0;
- (ISURLBag *)URLBag;
- (char)operation:(ISURLOperation *)arg0 shouldSetStoreFrontID:(NSObject *)arg1;
- (NSString *)uniqueKey;
- (void)_setOutputURLBag:(id)arg0;
- (void)_postBagDidLoadNotificationWithURLBag:(NSString *)arg0;
- (void)_sendPingsForURLBag:(id)arg0;
- (void)_addHeadersToRequestProperties:(NSDictionary *)arg0;
- (char)_setURLBagWithDictionary:(NSDictionary *)arg0 response:(NSURLResponse *)arg1 error:(id *)arg2;

@end
