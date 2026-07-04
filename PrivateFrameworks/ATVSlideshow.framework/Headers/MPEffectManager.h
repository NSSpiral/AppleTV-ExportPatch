/* Runtime dump - MPEffectManager
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPEffectManager : NSObject
{
    NSMutableDictionary * mEffects;
    NSMutableDictionary * mCategories;
    NSMutableDictionary * mCachedAspectRatios;
    NSMutableDictionary * mCachedBreakInfo;
    NSLock * mLock;
    NSMutableArray * mRegisteredFonts;
}

+ (void)initialize;
+ (void)releaseSharedManager;
+ (void)loadEffectManagerWithPaths:(NSArray *)arg0;
+ (MPEffectManager *)sharedManager;

- (void)dealloc;
- (NSObject *)defaultStringForTextInEffectID:(NSObject *)arg0 presetID:(NSString *)arg1 atIndex:(int)arg2 needsNSConversion:(char)arg3;
- (NSObject *)versionOfEffectID:(NSObject *)arg0;
- (int)numberOfSlidesForEffectID:(NSObject *)arg0;
- (unsigned int)numOfImagesForEffectPresetID:(NSObject *)arg0;
- (NSObject *)attributesForEffectID:(NSObject *)arg0 andPresetID:(NSObject *)arg1;
- (NSObject *)orientationForEffectID:(NSObject *)arg0;
- (NSObject *)mediaAspectRatioHintsForEffectID:(NSObject *)arg0 usingPresetID:(NSObject *)arg1 defaultAspectRatio:(float)arg2;
- (NSObject *)imageInputInfoForEffectID:(NSObject *)arg0;
- (int)breakTypeForSlideAtIndex:(int)arg0 inEffect:(NSObject *)arg1 forPresetID:(NSObject *)arg2;
- (NSObject *)showTimeScriptForEffectID:(NSObject *)arg0 atSlideIndex:(int)arg1;
- (void)defaultDurationsForEffectID:(NSObject *)arg0 phaseInDuration:(double *)arg1 mainDuration:(double *)arg2 phaseOutDuration:(double *)arg3;
- (double)defaultFullDurationForEffectID:(NSObject *)arg0;
- (double)durationPaddingForEffectID:(NSObject *)arg0;
- (char)skipBreakScaleForEffectID:(NSObject *)arg0;
- (float)mediaAspectRatioForEffectID:(NSObject *)arg0 usingAttributes:(NSDictionary *)arg1 atIndex:(int)arg2 defaultAspectRatio:(float)arg3 imageAspectRatio:(float)arg4;
- (double)minimumEffectDurationForEffectID:(NSObject *)arg0;
- (double)breakScaleOffsetForEffectID:(NSObject *)arg0;
- (int)numberOfSecondarySlidesForEffectID:(NSObject *)arg0;
- (unsigned int)numOfTextsForEffectID:(NSObject *)arg0;
- (NSObject *)aspectRatioForEffectID:(NSObject *)arg0;
- (char)effectNeedsBreakInformation:(id)arg0;
- (unsigned int)maxNumOfImagesPerEffectInList:(NSArray *)arg0;
- (NSObject *)defaultStringForTextInEffectID:(NSObject *)arg0 presetID:(NSString *)arg1 atIndex:(int)arg2;
- (unsigned int)minNumOfImagesPerEffectInList:(NSArray *)arg0;
- (float)mediaAspectRatioForEffectID:(NSObject *)arg0 usingPresetID:(NSObject *)arg1 atIndex:(int)arg2 defaultAspectRatio:(float)arg3;
- (char)effectNeedsRandomSeedInformation:(id)arg0;
- (unsigned int)numOfImagesForEffectID:(NSObject *)arg0;
- (NSObject *)categoryIDsForEffectID:(NSObject *)arg0;
- (NSString *)effectIDsForCategoryID:(NSString *)arg0;
- (NSObject *)settingsUIControlDescriptionsForEffect:(NSObject *)arg0;
- (float)mediaAspectRatioForEffectID:(NSObject *)arg0 usingAttributes:(NSDictionary *)arg1 atIndex:(int)arg2 defaultAspectRatio:(float)arg3;
- (NSObject *)mediaAspectRatiosForEffectID:(NSObject *)arg0 usingPresetID:(NSObject *)arg1;
- (NSObject *)localizedEffectNameForEffectID:(NSObject *)arg0;
- (NSString *)localizedCategoryNameFromCategoryID:(NSString *)arg0;
- (NSString *)localizedSettingsUITitleForTitleKey:(NSString *)arg0 inEffect:(NSObject *)arg1;
- (NSObject *)controlForAttribute:(NSObject *)arg0 forEffectID:(NSObject *)arg1;
- (id)effectsWithNumOfImages:(unsigned int)arg0;
- (id)allEffectIDs;
- (id)allCategoryIDs;
- (float)maxFontSizeInEffectID:(NSObject *)arg0 presetID:(NSString *)arg1 atIndex:(int)arg2;
- (NSObject *)presetIDsForEffectID:(NSObject *)arg0;
- (NSObject *)descriptionForEffectID:(NSObject *)arg0;
- (float)mediaAspectRatioForEffectID:(NSObject *)arg0 usingPresetID:(NSObject *)arg1 atIndex:(int)arg2;
- (NSObject *)mediaAspectRatiosForEffectID:(NSObject *)arg0 usingPresetID:(NSObject *)arg1 defaultAspectRatio:(float)arg2;
- (double)defaultPhaseInDurationForEffectID:(NSObject *)arg0;
- (double)defaultMainDurationForEffectID:(NSObject *)arg0;
- (double)defaultPhaseOutDurationForEffectID:(NSObject *)arg0;
- (double)defaultPosterFrameTimeForEffectID:(NSObject *)arg0 andPresetID:(NSObject *)arg1;
- (double)defaultPosterFrameTimeForEffect:(NSObject *)arg0;
- (float)mediaAspectRatioHintForEffectID:(NSObject *)arg0 usingAttributes:(NSDictionary *)arg1 atIndex:(int)arg2 defaultAspectRatio:(float)arg3;
- (char)posterTimeIsStaticForEffectID:(NSObject *)arg0 andPresetID:(NSObject *)arg1;
- (NSObject *)sizeScriptForEffectID:(NSObject *)arg0 atIndex:(int)arg1;
- (char)effectDoesAccumulate:(id)arg0;
- (char)useUppercaseForEffectID:(NSObject *)arg0 presetID:(NSString *)arg1 forTextAtIndex:(int)arg2;
- (char)allowTextCustomizationForEffectID:(NSObject *)arg0 presetID:(NSString *)arg1 forTextAtIndex:(int)arg2;
- (void)_loadFontsFromPath:(NSString *)arg0 requiredFonts:(id)arg1;
- (MPEffectManager *)initWithPaths:(NSArray *)arg0;

@end
