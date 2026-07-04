/* Runtime dump - TSCH3DBarResourceCacheKey
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DBarResourceCacheKey : NSObject
{
    struct BarExtrusionSetting mSetting;
}

+ (TSCH3DBarResourceCacheKey *)keyWithExtrusionSetting:(struct BarExtrusionSetting *)arg0;

- (TSCH3DBarResourceCacheKey *)initWithExtrusionSetting:(struct BarExtrusionSetting *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSCH3DBarResourceCacheKey *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;

@end
