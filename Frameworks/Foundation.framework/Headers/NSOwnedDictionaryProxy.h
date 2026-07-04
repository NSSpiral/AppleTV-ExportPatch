/* Runtime dump - NSOwnedDictionaryProxy
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSOwnedDictionaryProxy : NSDictionary
{
    id _owner;
}

- (void)superRelease;
- (NSOwnedDictionaryProxy *)initWithOwner:(NSObject *)arg0;
- (NSOwnedDictionaryProxy *)retain;
- (void)release;
- (NSString *)objectForKey:(NSString *)arg0;
- (unsigned int)count;
- (NSEnumerator *)keyEnumerator;

@end
