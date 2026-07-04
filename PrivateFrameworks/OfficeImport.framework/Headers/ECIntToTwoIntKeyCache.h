/* Runtime dump - ECIntToTwoIntKeyCache
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ECIntToTwoIntKeyCache : NSObject
{
    ECIntTwoIntKeyDictionary * mCache;
}

- (void)dealloc;
- (ECIntToTwoIntKeyCache *)init;
- (void)setObject:(unsigned int)arg0 forKey1:(unsigned int)arg1 key2:(unsigned int)arg2;
- (char)integerIsPresentForKey1:(unsigned int)arg0 key2:(unsigned int)arg1 outValue:(unsigned int *)arg2;

@end
