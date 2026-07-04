/* Runtime dump - NSPropertyStoreMapping
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPropertyStoreMapping : NSStoreMapping
{
    NSPropertyDescription * _property;
}

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSPropertyDescription *)property;
- (NSPropertyStoreMapping *)initWithProperty:(NSPropertyDescription *)arg0;
- (void)setProperty:(NSPropertyDescription *)arg0;

@end
