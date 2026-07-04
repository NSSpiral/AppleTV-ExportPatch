/* Runtime dump - NSAttributeDictionaryEnumerator
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSAttributeDictionaryEnumerator : NSEnumerator
{
    NSAttributeDictionary * dictionary;
    unsigned int nextElement;
}

- (NSAttributeDictionaryEnumerator *)initWithAttributeDictionary:(NSDictionary *)arg0;
- (void)dealloc;
- (NSObject *)nextObject;

@end
