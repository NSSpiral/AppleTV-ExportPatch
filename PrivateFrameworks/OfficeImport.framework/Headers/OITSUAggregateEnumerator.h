/* Runtime dump - OITSUAggregateEnumerator
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUAggregateEnumerator : NSEnumerator
{
    NSMutableArray * _objects;
}

+ (NSArray *)aggregateEnumeratorWithObjects:(NSMutableArray *)arg0;

- (void)dealloc;
- (OITSUAggregateEnumerator *)init;
- (void)addObject:(struct objc_method *)arg0;
- (OITSUAggregateEnumerator *)initWithObjects:(NSMutableArray *)arg0;
- (NSObject *)nextObject;
- (OITSUAggregateEnumerator *)initWithFirstObject:(NSString *)arg0 argumentList:(void *)arg1;

@end
