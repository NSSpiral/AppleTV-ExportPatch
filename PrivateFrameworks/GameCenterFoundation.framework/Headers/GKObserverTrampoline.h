/* Runtime dump - GKObserverTrampoline
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKObserverTrampoline : NSObject
{
    id _observee;
    NSString * _keyPath;
    id _block;
    int _cancellationPredicate;
    unsigned int _options;
}

@property (readonly) id token;

- (void)startObserving;
- (void)dealloc;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (NSString *)token;
- (void)cancelObservation;
- (GKObserverTrampoline *)initObservingObject:(NSObject *)arg0 keyPath:(NSString *)arg1 options:(unsigned int)arg2 block:(id /* block */)arg3;

@end
