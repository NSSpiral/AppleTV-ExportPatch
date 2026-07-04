/* Runtime dump - GKDiscoveryBonjourResolveContainer
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKDiscoveryBonjourResolveContainer : NSObject
{
    NSMutableArray * _serviceRefList;
    GKDiscoveryBonjour * _context;
    id _resolveCompletionHandler;
}

@property (retain, nonatomic) NSMutableArray * serviceRefList;
@property (nonatomic) GKDiscoveryBonjour * context;
@property (copy, nonatomic) id resolveCompletionHandler;

- (void)dealloc;
- (GKDiscoveryBonjourResolveContainer *)init;
- (GKDiscoveryBonjour *)context;
- (void)setContext:(GKDiscoveryBonjour *)arg0;
- (NSMutableArray *)serviceRefList;
- (void)setServiceRefList:(NSMutableArray *)arg0;
- (id /* block */)resolveCompletionHandler;
- (void)setResolveCompletionHandler:(id /* block */)arg0;

@end
