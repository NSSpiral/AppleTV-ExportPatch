/* Runtime dump - BRKeyValueObservationEntry
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRKeyValueObservationEntry : NSObject
{
    NSObject * _observer;
    NSObject * _observedObject;
    NSString * _keyPath;
    id _handler;
    char _hasBeenRemoved;
}

- (BRKeyValueObservationEntry *)initWithObserver:(NSObject *)arg0 observedObject:(NSObject *)arg1 keyPath:(NSString *)arg2 handler:(<BRSelectionHandler> *)arg3;
- (char)isEqualToObservedObject:(NSObject *)arg0;
- (void)dealloc;

@end
