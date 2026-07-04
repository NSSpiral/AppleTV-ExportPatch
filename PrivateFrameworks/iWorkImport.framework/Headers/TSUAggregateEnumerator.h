/* Runtime dump - TSUAggregateEnumerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUAggregateEnumerator : NSEnumerator
{
    NSMutableArray * _objects;
}

+ (NSArray *)aggregateEnumeratorWithObjects:(NSMutableArray *)arg0;

- (void)dealloc;
- (TSUAggregateEnumerator *)init;
- (void)addObject:(struct objc_method *)arg0;
- (TSUAggregateEnumerator *)initWithObjects:(NSMutableArray *)arg0;
- (NSObject *)nextObject;
- (TSUAggregateEnumerator *)initWithFirstObject:(NSString *)arg0 argumentList:(void *)arg1;

@end
