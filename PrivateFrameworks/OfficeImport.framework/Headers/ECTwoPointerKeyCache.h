/* Runtime dump - ECTwoPointerKeyCache
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ECTwoPointerKeyCache : NSObject
{
    OITSUPointerKeyDictionary * mCache;
}

- (void)dealloc;
- (ECTwoPointerKeyCache *)init;
- (NSString *)objectForKey1:(NSString *)arg0 key2:(NSString *)arg1;
- (void)setObject:(NSObject *)arg0 forKey1:(NSString *)arg1 key2:(NSString *)arg2;

@end
