/* Runtime dump - NSKeyValueObservationInfo
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueObservationInfo : NSObject
{
    int _retainCountMinusOne;
    NSArray * _observances;
    unsigned int _cachedHash;
    char _cachedIsShareable;
    NSHashTable * _observables;
}

- (NSKeyValueObservationInfo *)_initWithObservances:(id *)arg0 count:(unsigned int)arg1;
- (NSKeyValueObservationInfo *)retain;
- (void)release;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (NSString *)description;
- (char)_tryRetain;
- (char)_isDeallocating;

@end
