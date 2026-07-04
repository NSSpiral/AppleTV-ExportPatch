/* Runtime dump - NSKeyValueObservance
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueObservance : NSWeakCallback
{
    int _retainCountMinusOne;
    NSObject * _observer;
    NSKeyValueProperty * _property;
    unsigned int _options;
    void * _context;
    NSObject * _originalObservable;
    unsigned int _cachedUnrotatedHashComponent;
    char _cachedIsShareable;
    NSPointerArray * _observationInfos;
}

- (NSObject *)_initWithObserver:(NSObject *)arg0 property:(NSKeyValueProperty *)arg1 options:(unsigned int)arg2 context:(void *)arg3 originalObservable:(NSObject *)arg4;
- (NSKeyValueObservance *)retain;
- (void)release;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (NSString *)description;
- (char)_tryRetain;
- (char)_isDeallocating;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;

@end
