/* Runtime dump - ECTwoIntegerKeyCache
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ECTwoIntegerKeyCache : NSObject
{
    OITSUIntegerKeyDictionary * mCache;
    char _assertForCollisions;
}

@property (nonatomic) char assertForCollisions;

- (void)dealloc;
- (ECTwoIntegerKeyCache *)init;
- (NSString *)objectForKey1:(int)arg0 key2:(int)arg1;
- (void)setObject:(NSObject *)arg0 forKey1:(int)arg1 key2:(int)arg2;
- (char)assertForCollisions;
- (void)setAssertForCollisions:(char)arg0;

@end
