/* Runtime dump - ObjectCacheByCString
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ObjectCacheByCString : NSObject
{
    struct __CFDictionary * _dictionary;
}

- (void)dealloc;
- (ObjectCacheByCString *)init;
- (void)setObject:(NSObject *)arg0 forCStringKey:(char *)arg1;
- (NSString *)getObjectForCStringKey:(char *)arg0;

@end
