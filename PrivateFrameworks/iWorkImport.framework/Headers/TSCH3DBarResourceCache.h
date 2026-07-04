/* Runtime dump - TSCH3DBarResourceCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DBarResourceCache : NSObject
{
    TSUNoCopyDictionary * mCache;
}

+ (TSCH3DBarResourceCache *)barWithExtrusionSetting:(struct BarExtrusionSetting *)arg0;
+ (TSCH3DBarResourceCache *)allocWithZone:(struct _NSZone *)arg0;
+ (TSCH3DBarResourceCache *)_singletonAlloc;
+ (TSCH3DBarResourceCache *)instance;

- (id)p_barWithExtrusionSetting:(struct BarExtrusionSetting *)arg0;
- (TSCH3DBarResourceCache *)retain;
- (void)release;
- (void)dealloc;
- (TSCH3DBarResourceCache *)init;
- (TSCH3DBarResourceCache *)autorelease;
- (unsigned int)retainCount;
- (TSCH3DBarResourceCache *)copyWithZone:(struct _NSZone *)arg0;

@end
