/* Runtime dump - OADGraphicStyleCache
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADGraphicStyleCache : NSObject
{
    id mFillCacheArray;
    OADGraphicFeatureCache * mStrokeCache;
    OADGraphicFeatureCache * mShadowCache;
    OADGraphicFeatureCache * mColorCache;
    OADGraphicFeatureCache * mFontFaceCache;
    OADGraphicFeatureCache * mTextStyleCache;
    OADGraphicFeatureCache * mTableIdCache;
    NSMutableDictionary * mTableStyleCache;
    OADGraphicFeatureCache * mChartIdCache;
    id mDrawableStyleCacheArray;
}

+ (int)fillCatagory:(id)arg0;

- (void)dealloc;
- (OADGraphicStyleCache *)init;
- (TIHandwritingStrokes *)strokes;
- (float)shadows;
- (NSCache *)fontFaceCache;
- (NSCache *)colorCache;
- (unsigned int)cacheFill:(id)arg0 returnCategory:(int *)arg1;
- (unsigned int)cacheStroke:(id)arg0;
- (unsigned int)cacheShadow:(id)arg0;
- (unsigned int)cacheDrawablePropertiesOfCategory:(int)arg0 withFillCategory:(int)arg1 fillIndex:(unsigned int)arg2 strokeIndex:(unsigned int)arg3 shadowIndex:(unsigned int)arg4 reflectionOpacity:(float)arg5 textStyleIndex:(unsigned int)arg6;
- (void)cacheTableStyle:(NSObject *)arg0;
- (NSObject *)tableStyleForId:(NSObject *)arg0;
- (void)cacheChartStyleId:(long)arg0;
- (unsigned int)cacheDrawablePropertiesOfCategory:(int)arg0 withGraphicProperties:(NSDictionary *)arg1 textBodyProperties:(NSDictionary *)arg2 paragraphProperties:(NSDictionary *)arg3 characterProperties:(struct _xmlNode *)arg4 colorContext:(NSObject *)arg5;
- (NSString *)countedDrawableStyleOfCategory:(int)arg0 atIndex:(unsigned int)arg1;
- (NSString *)fillsOfCategory:(int)arg0;
- (id)tableStyleIds;
- (id)chartStyleIds;
- (NSString *)cachedDrawableStylesOfCategory:(int)arg0;
- (void)applyCachedDrawableStyle:(NSObject *)arg0 toGraphicProperties:(NSDictionary *)arg1;
- (void)applyCachedDrawableStyle:(NSObject *)arg0 toParagraphProperties:(NSDictionary *)arg1;
- (void)applyCachedDrawableStyle:(NSObject *)arg0 toTextBodyProperties:(NSDictionary *)arg1;

@end
