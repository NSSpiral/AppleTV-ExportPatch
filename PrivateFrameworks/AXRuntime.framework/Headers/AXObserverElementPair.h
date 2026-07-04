/* Runtime dump - AXObserverElementPair
 * Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@interface AXObserverElementPair : NSObject
{
    id _observer;
}

@property (readonly, nonatomic) id observer;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (MCResourceProgressObserver *)observer;
- (AXObserverElementPair *)initWithObserver:(NSObject *)arg0;

@end
