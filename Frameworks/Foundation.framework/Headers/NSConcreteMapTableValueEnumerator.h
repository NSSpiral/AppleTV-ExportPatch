/* Runtime dump - NSConcreteMapTableValueEnumerator
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteMapTableValueEnumerator : NSEnumerator
{
    NSConcreteMapTable * mapTable;
    unsigned int counter;
}

+ (NSConcreteMapTableValueEnumerator *)enumeratorWithMapTable:(NSConcreteMapTable *)arg0;

- (void)dealloc;
- (NSObject *)nextObject;

@end
