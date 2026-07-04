/* Runtime dump - NSStoreMapping
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSStoreMapping : NSObject
{
    NSString * _externalName;
}

- (NSString *)externalName;
- (NSStoreMapping *)initWithExternalName:(NSString *)arg0;
- (void)copyValuesForReadOnlyFetch:(id)arg0;
- (void)setExternalName:(NSString *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;

@end
