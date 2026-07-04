/* Runtime dump - SBKRequestHandler
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKRequestHandler : NSObject
{
    SBKStoreURLBagContext * _bagContext;
}

@property (readonly, nonatomic) SBKStoreURLBagContext * bagContext;

- (void)cancel;
- (void).cxx_destruct;
- (SBKRequestHandler *)initWithBagContext:(SBKStoreURLBagContext *)arg0;
- (void)timeout;
- (SBKStoreURLBagContext *)bagContext;

@end
