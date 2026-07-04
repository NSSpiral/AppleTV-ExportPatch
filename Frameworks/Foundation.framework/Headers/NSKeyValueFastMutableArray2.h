/* Runtime dump - NSKeyValueFastMutableArray2
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueFastMutableArray2 : NSKeyValueFastMutableArray
{
    NSKeyValueGetter * _valueGetter;
}

+ (struct ? *)_proxyNonGCPoolPointer;

- (NSObject *)_proxyInitWithContainer:(NSObject *)arg0 getter:(SEL)arg1;
- (void)_proxyNonGCFinalize;
- (NSString *)_nonNilArrayValueWithSelector:(SEL)arg0;
- (unsigned int)count;
- (NSObject *)objectAtIndex:(unsigned int)arg0;
- (NSIndexSet *)objectsAtIndexes:(struct objc_method *)arg0;
- (void)getObjects:(id *)arg0 range:(struct _NSRange)arg1;

@end
