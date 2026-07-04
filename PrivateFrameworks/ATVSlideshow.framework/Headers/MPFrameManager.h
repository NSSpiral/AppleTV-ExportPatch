/* Runtime dump - MPFrameManager
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPFrameManager : NSObject
{
    NSMutableDictionary * mFrames;
    NSMutableDictionary * mCategories;
}

+ (void)releaseSharedManager;
+ (void)loadFrameManagerWithPaths:(NSArray *)arg0;
+ (MPFrameManager *)sharedManager;

- (void)dealloc;
- (NSObject *)versionOfFrameID:(NSObject *)arg0;
- (NSString *)localizedCategoryNameFromCategoryID:(NSString *)arg0;
- (id)allCategoryIDs;
- (NSObject *)attributesForFrameID:(NSObject *)arg0 andPresetID:(NSObject *)arg1;
- (NSObject *)categoryIDsForFrameID:(NSObject *)arg0;
- (NSString *)framesForCategoryID:(NSString *)arg0;
- (id)allFrameIDs;
- (NSObject *)localizedFrameNameForFrameID:(NSObject *)arg0;
- (NSObject *)descriptionForFrameID:(NSObject *)arg0;
- (NSArray *)randomFrameFromList:(NSArray *)arg0 abidingWithConstraints:(NSMutableArray *)arg1;
- (NSArray *)constraintsForFramesMatchingList:(NSArray *)arg0 andCriteria:(id)arg1;
- (MPFrameManager *)initWithPaths:(NSArray *)arg0;

@end
