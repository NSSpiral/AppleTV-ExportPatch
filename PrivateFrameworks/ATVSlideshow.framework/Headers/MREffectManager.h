/* Runtime dump - MREffectManager
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectManager : NSObject
{
    NSMutableDictionary * mEffectSets;
    NSMutableDictionary * mEffectPools;
    NSMutableDictionary * mFontRepository;
}

+ (void)initialize;
+ (MREffectManager *)sharedManager;

- (void)dealloc;
- (MREffectManager *)init;
- (void)cleanup;
- (char)hasCustomTimingForEffectID:(NSObject *)arg0;
- (NSObject *)customTimingWithEffectID:(NSString *)arg0 effectAttributes:(NSDictionary *)arg1 slideInformation:(NSDictionary *)arg2 textInformation:(NSDictionary *)arg3 inAspectRatio:(float)arg4;
- (NSObject *)effectWithEffectID:(NSString *)arg0;
- (NSObject *)defaultEffectAttributesWithEffectID:(NSString *)arg0 andSlideInformation:(id)arg1;
- (NSObject *)descriptionForEffectID:(NSObject *)arg0;
- (double)defaultPhaseInDurationForEffectID:(NSObject *)arg0;
- (double)defaultMainDurationForEffectID:(NSObject *)arg0;
- (double)defaultPhaseOutDurationForEffectID:(NSObject *)arg0;
- (void)recycleEffect:(NSObject *)arg0;
- (NSObject *)resourcePathForEffectID:(NSObject *)arg0 andResource:(NSObject *)arg1;
- (void)releaseResources;
- (Class)classForEffectID:(NSObject *)arg0;
- (NSObject *)sizeScriptForEffectID:(NSObject *)arg0 andKey:(NSString *)arg1;
- (char)hasMultiImageInputForEffectID:(NSObject *)arg0;
- (NSObject *)imageInputInfosForEffectID:(NSObject *)arg0;
- (NSObject *)imageProviderInfosForEffectID:(NSObject *)arg0;
- (char)supportsAccumulationForEffectID:(NSObject *)arg0;
- (char)isOpaqueForEffectID:(NSObject *)arg0;
- (NSObject *)attributeDescriptionForEffectID:(NSObject *)arg0 andKey:(NSString *)arg1;
- (float)lineSpacingFactorForTextInEffectID:(NSObject *)arg0 presetID:(NSString *)arg1 atIndex:(int)arg2;

@end
