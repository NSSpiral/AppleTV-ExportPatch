/* Runtime dump - GEOProxyClientRegistry
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOProxyClientRegistry : NSObject
{
    NSLock * _lock;
    GEOProxyClient * _currentComposite;
    NSMutableSet * _currentSet;
}

+ (GEOProxyClientRegistry *)sharedRegistry;

- (void)dealloc;
- (void)addClient:(NSObject *)arg0;
- (void)removeClient:(NSObject *)arg0;
- (void)_updateComposite;
- (void)enableRegistry;
- (NSObject *)compositeClient;

@end
