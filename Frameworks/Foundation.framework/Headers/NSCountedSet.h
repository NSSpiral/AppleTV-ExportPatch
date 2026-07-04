/* Runtime dump - NSCountedSet
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCountedSet : NSMutableSet
{
    id _table;
    void * _reserved;
}

+ (char)supportsSecureCoding;

- (NSCountedSet *)initWithSet:(NSSet *)arg0 copyItems:(char)arg1;
- (void)getObjects:(id *)arg0 count:(unsigned int)arg1;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (NSCountedSet *)initWithCoder:(NSCoder *)arg0;
- (void)removeObject:(struct objc_method *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (NSCountedSet *)init;
- (void)addObject:(struct objc_method *)arg0;
- (NSCountedSet *)initWithCapacity:(unsigned int)arg0;
- (NSCountedSet *)copyWithZone:(struct _NSZone *)arg0;
- (Class)classForCoder;
- (NSEnumerator *)objectEnumerator;
- (NSCountedSet *)initWithArray:(NSArray *)arg0;
- (NSCountedSet *)initWithObjects:(id *)arg0 count:(unsigned int)arg1;
- (NSCountedSet *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSObject *)member:(struct objc_method *)arg0;
- (NSCountedSet *)initWithSet:(NSSet *)arg0;
- (unsigned int)countForObject:(NSObject *)arg0;
- (NSLocale *)descriptionWithLocale:(NSObject *)arg0;

@end
