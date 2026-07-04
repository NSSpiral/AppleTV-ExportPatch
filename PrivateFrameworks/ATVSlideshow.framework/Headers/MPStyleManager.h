/* Runtime dump - MPStyleManager
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPStyleManager : NSObject
{
    NSMutableDictionary * mStyles;
    NSArray * mPaths;
    NSString * mCurrentLocale;
}

+ (void)releaseSharedManager;
+ (void)loadStyleManagerWithPaths:(NSArray *)arg0;
+ (MPStyleManager *)sharedManager;

- (void)dealloc;
- (NSObject *)descriptionForStyleID:(NSObject *)arg0;
- (char)isDynamicForStyleID:(NSObject *)arg0;
- (char)canCancelAuthoringForStyleID:(NSObject *)arg0;
- (NSObject *)songPathsForStyleID:(NSObject *)arg0;
- (int)indexOfMainLayerForStyleID:(NSObject *)arg0;
- (char)hasImagesForLayerID:(NSObject *)arg0 forStyleID:(NSObject *)arg1;
- (NSObject *)titleEffectLayoutForStyleID:(NSObject *)arg0;
- (int)indexOfTitleEffectLayerForStyleID:(NSObject *)arg0;
- (NSObject *)layerIDForLayerIndex:(int)arg0 ofStyle:(NSObject *)arg1;
- (struct CGColor *)backgroundCGColorForStyleID:(NSObject *)arg0;
- (NSObject *)effectIDsForStyleID:(NSObject *)arg0;
- (NSObject *)transitionsForStyleID:(NSObject *)arg0;
- (NSObject *)framesForStyleID:(NSObject *)arg0;
- (NSObject *)versionOfStyleID:(NSObject *)arg0;
- (char)canUseClusteringForStyleID:(NSObject *)arg0;
- (NSObject *)titleEffectLayoutsForStyleID:(NSObject *)arg0;
- (double)allowUserDefinedDurationForStyleID:(NSObject *)arg0;
- (struct CGSize)defaultSizeForZIndex:(int)arg0 ofStyle:(NSObject *)arg1;
- (float)defaultFilterLikelihoodForZIndex:(int)arg0 ofStyle:(NSObject *)arg1;
- (char)needsFaceDetectionForStyleID:(NSObject *)arg0;
- (int)layerIndexForLayerID:(NSObject *)arg0 ofStyle:(NSObject *)arg1;
- (unsigned int)reorderModeForStyleID:(NSObject *)arg0;
- (NSObject *)interstitialEffectLayoutsForStyleID:(NSObject *)arg0;
- (unsigned int)subtitleOrderForStyleID:(NSObject *)arg0;
- (NSObject *)interstitialEffectLayoutForStyleID:(NSObject *)arg0;
- (unsigned int)mediaPresentationOrderForStyleID:(NSObject *)arg0;
- (float)defaultAutoKenBurnsLikelihoodForZIndex:(int)arg0 ofStyle:(NSObject *)arg1;
- (int)defaultAutoKenBurnsLevelForZIndex:(int)arg0 ofStyle:(NSObject *)arg1;
- (double)basePeriodForLayerIndex:(int)arg0 ofStyle:(NSObject *)arg1;
- (double)defaultEffectDurationForLayer:(int)arg0 ofStyle:(NSObject *)arg1;
- (double)defaultTransitionDurationForLayer:(int)arg0 ofStyle:(NSObject *)arg1 withAspectRatio:(float)arg2;
- (NSObject *)effectPresetsForLayerIndex:(int)arg0 ofStyleID:(NSObject *)arg1;
- (NSObject *)defaultColorSchemeForStyleID:(NSObject *)arg0;
- (unsigned int)regionOfInterestPickModeForStyleID:(NSObject *)arg0;
- (float)defaultAutoKenBurnsLikelihoodForEffect:(NSObject *)arg0 withPreset:(NSSet *)arg1 ofStyle:(NSObject *)arg2;
- (int)defaultAutoKenBurnsLevelForEffect:(NSObject *)arg0 withPreset:(NSSet *)arg1 ofStyle:(NSObject *)arg2;
- (int)antialiasLevelForStyleID:(NSObject *)arg0;
- (char)needsToBeLiveForStyleID:(NSObject *)arg0;
- (int)dynamicBatchSizeForStyleID:(NSObject *)arg0;
- (NSObject *)backgroundColorLayersForStyleID:(NSObject *)arg0;
- (char)needsStyleUpdateOnSlideChangeForStyleID:(NSObject *)arg0;
- (char)needsTimingUpdateOnSlideChangeForStyleID:(NSObject *)arg0;
- (NSObject *)localizedNameForStyleID:(NSObject *)arg0;
- (void)reloadBundles;
- (NSObject *)effectPresetIDsForLayerIndex:(int)arg0 ofStyleID:(NSObject *)arg1;
- (double)minimumEffectDurationForStyleID:(NSObject *)arg0;
- (id)allStyleIDs;
- (double)delayFaceDetectionForStyleID:(NSObject *)arg0;
- (NSObject *)localizedNameForStyleID:(NSObject *)arg0 withLanguage:(NSString *)arg1;
- (NSObject *)thumbnailPathForStyleID:(NSObject *)arg0;
- (NSObject *)thumbnailPathForStyleID:(NSObject *)arg0 scaleFactor:(float)arg1;
- (NSObject *)previewPathForStyleID:(NSObject *)arg0;
- (NSObject *)resourcePathForStyleID:(NSObject *)arg0;
- (NSObject *)effectPresetIDsForStyleID:(NSObject *)arg0;
- (double)shortestEffectDurationForStyleID:(NSObject *)arg0;
- (double)shortestDurationForEffectID:(NSObject *)arg0 forStyleID:(NSObject *)arg1;
- (double)minimumDurationForEffectID:(NSObject *)arg0 forStyleID:(NSObject *)arg1;
- (char)machineMeetsRequirementsForStyleID:(NSObject *)arg0;
- (char)supportsRandomTransitionForStyleID:(NSObject *)arg0;
- (char)authorOnAspectRatioChangeForStyleID:(NSObject *)arg0;
- (int)numberOfSlidesToPreloadForStyleID:(NSObject *)arg0;
- (char)needsReauthorOnAspectRatioChange:(NSDictionary *)arg0;
- (double)posterTimeForStyleID:(NSObject *)arg0;
- (id)demoDocumentWithImages:(id)arg0 properties:(NSDictionary *)arg1 count:(int)arg2 options:(NSDictionary *)arg3;
- (float)displayDurationFactorForStyleID:(NSObject *)arg0;
- (float)displayDurationFactorForEffectID:(NSObject *)arg0 inStyleID:(NSObject *)arg1;
- (NSObject *)_containerDescriptionForLayerAtIndex:(int)arg0 ofStyle:(NSObject *)arg1;
- (int)kenBurnsOffsetTypeForStyleID:(NSObject *)arg0;
- (char)easeKenBurnsForStyleID:(NSObject *)arg0;
- (NSObject *)defaultPositionForZIndex:(int)arg0 ofStyle:(NSObject *)arg1;
- (double)navigationIncrementForStyleID:(NSObject *)arg0;
- (MPStyleManager *)initWithPaths:(NSArray *)arg0;

@end
