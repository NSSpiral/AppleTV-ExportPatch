/* Runtime dump - MPFilterManager
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPFilterManager : NSObject
{
    NSMutableDictionary * mFilters;
    NSArray * mFilterCategories;
    NSMutableDictionary * mFilterPresets;
}

+ (void)releaseSharedManager;
+ (void)loadFilterManagerWithPaths:(NSArray *)arg0;
+ (MPFilterManager *)sharedManager;

- (void)dealloc;
- (id)allFilterIDs;
- (NSObject *)versionOfFilterID:(NSObject *)arg0;
- (NSString *)filterIDsForCategoryID:(NSString *)arg0;
- (id)filterCategoryIDs;
- (NSObject *)presetIDsForFilterID:(NSObject *)arg0;
- (NSObject *)attributesForFilterID:(NSObject *)arg0 andPresetID:(NSObject *)arg1;
- (NSObject *)animationsForFilterID:(NSObject *)arg0 andPresetID:(NSObject *)arg1;
- (NSArray *)constraintsForFilterPresetsMatchingList:(NSArray *)arg0 andCriteria:(id)arg1;
- (NSArray *)randomFilterPresetFromList:(NSArray *)arg0 abidingWithConstraints:(NSMutableArray *)arg1;
- (id)filterPresetsMatchingCriteria:(id)arg0;
- (NSObject *)randomFilter:(char)arg0;
- (MPFilterManager *)initWithPaths:(NSArray *)arg0;

@end
