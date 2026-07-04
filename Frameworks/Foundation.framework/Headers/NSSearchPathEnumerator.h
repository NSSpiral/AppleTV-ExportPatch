/* Runtime dump - NSSearchPathEnumerator
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSearchPathEnumerator : NSEnumerator
{
    long state;
    unsigned int directory;
    unsigned int domainMask;
}

- (NSSearchPathEnumerator *)initWithDirectory:(unsigned int)arg0 domains:(unsigned int)arg1;
- (NSObject *)nextObject;

@end
