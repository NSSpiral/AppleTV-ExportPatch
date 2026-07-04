/* Runtime dump - MPTransitionManager
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPTransitionManager : NSObject
{
    NSMutableDictionary * mTransitions;
    NSMutableDictionary * mTransitionCategories;
    NSMutableDictionary * mTransitionPresets;
}

+ (void)releaseSharedManager;
+ (void)loadTransitionManagerWithPaths:(NSArray *)arg0;
+ (MPTransitionManager *)sharedManager;

- (void)dealloc;
- (NSObject *)versionOfTransitionID:(NSObject *)arg0;
- (NSObject *)attributesForTransitionID:(NSObject *)arg0 andPresetID:(NSObject *)arg1;
- (float)beatStrengthForTransitionID:(NSObject *)arg0;
- (double)defaultDurationForTransitionID:(NSObject *)arg0;
- (NSString *)localizedCategoryNameFromCategoryID:(NSString *)arg0;
- (id)allCategoryIDs;
- (int)transitionNeedsRandomSeedInformation:(id)arg0;
- (NSObject *)categoryIDsForTransitionID:(NSObject *)arg0;
- (NSString *)transitionsForCategoryID:(NSString *)arg0;
- (NSObject *)settingsUIControlDescriptionsForTransition:(NSObject *)arg0;
- (id)allTransitionIDs;
- (NSObject *)descriptionForTransitionID:(NSObject *)arg0;
- (NSObject *)localizedTransitionNameForTransitionID:(NSObject *)arg0;
- (NSObject *)localizedNameForTransitionID:(NSObject *)arg0 withLanguage:(NSString *)arg1;
- (NSObject *)localizedTransitionNameForTransitionID:(NSObject *)arg0 andPresetID:(NSObject *)arg1;
- (NSString *)localizedSettingsUITitleForTitleKey:(NSString *)arg0 inTransition:(char)arg1;
- (NSObject *)controlForAttribute:(NSObject *)arg0 forTransitionID:(NSObject *)arg1;
- (NSObject *)presetsForTransitionID:(NSObject *)arg0;
- (NSArray *)constraintsForTransitionPresetsMatchingList:(NSArray *)arg0 andCriteria:(id)arg1;
- (NSArray *)randomTransitionPresetFromList:(NSArray *)arg0 abidingWithConstraints:(NSMutableArray *)arg1;
- (id)transitionPresetsMatchingCriteria:(id)arg0;
- (double)bestBeatTimeForTransitionID:(NSObject *)arg0;
- (MPTransitionManager *)initWithPaths:(NSArray *)arg0;

@end
