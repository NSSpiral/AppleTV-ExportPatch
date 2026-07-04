/* Runtime dump - NSSimpleAttributeDictionaryEnumerator
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSimpleAttributeDictionaryEnumerator : NSEnumerator
{
    NSSimpleAttributeDictionary * dictionary;
    unsigned int nextElement;
}

- (NSSimpleAttributeDictionaryEnumerator *)initWithAttributeDictionary:(NSDictionary *)arg0;
- (void)dealloc;
- (NSObject *)nextObject;
- (void)finalize;

@end
