/* Runtime dump - MPCluster
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPCluster : NSObject
{
    NSMutableArray * mSlides;
    NSMutableSet * mPathsInCluster;
    NSString * mName;
    float mRating;
    NSMutableDictionary * mUsageCounterPerLayer;
}

@property (retain) NSMutableArray * items;
@property (copy) NSString * name;
@property float rating;
@property (retain) NSMutableDictionary * usageCounterPerLayer;

- (void)dealloc;
- (MPCluster *)init;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSMutableArray *)items;
- (void)setItems:(NSMutableArray *)arg0;
- (void)removeAllSlides;
- (NSArray *)allSlides;
- (void)setUsageCountForLayer:(id)arg0 to:(float)arg1;
- (NSString *)usageCountDescription;
- (id)allSlidesSortedByUser;
- (char)clusterContainsSlideAtPath:(NSString *)arg0;
- (id)allSlidesSortedChronologically;
- (float)usageCountForLayer:(id)arg0;
- (void)resetAllUsageCounters;
- (NSMutableDictionary *)usageCounterPerLayer;
- (void)setUsageCounterPerLayer:(NSMutableDictionary *)arg0;
- (float)rating;
- (void)setRating:(float)arg0;
- (int)slideCount;
- (void)addSlide:(MPSlide *)arg0;
- (void)detailedDescription;

@end
