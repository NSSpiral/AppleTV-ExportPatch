/* Runtime dump - PLCGPathCache
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCGPathCache : NSObject
{
    struct __CFDictionary * _pathCache;
}

+ (PLCGPathCache *)sharedPathCache;

- (void)dealloc;
- (PLCGPathCache *)init;
- (struct CGPath *)pathForKey:(struct CGRect)arg0;
- (void)setPath:(struct CGPath *)arg0 forKey:(struct CGRect)arg1;

@end
