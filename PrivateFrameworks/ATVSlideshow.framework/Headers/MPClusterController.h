/* Runtime dump - MPClusterController
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPClusterController : NSObject
{
    NSMutableDictionary * mSlides;
    NSMutableDictionary * mSlideClusters;
    MPCluster * mAllSlidesCluster;
    float mMinimumRequiredClusterRating;
    MPDocument * mAuthoredDocument;
    NSDate * mOldestSlideTimestamp;
    NSDate * mNewestSlideTimestamp;
}

+ (MPClusterController *)sharedController;
+ (void)releaseSharedController;

- (void)dealloc;
- (MPClusterController *)init;
- (void)flush;
- (void)setAuthoredDocument:(MPDocument *)arg0;
- (NSArray *)allSlides;
- (id)orderedAndPrioritizedSlideClusters;
- (void)updateClusterRatings;
- (NSArray *)clustersBasedOnOrderedPaths:(NSArray *)arg0;
- (NSArray *)allSlidesSortedByPaths:(NSArray *)arg0;
- (NSString *)slideForPath:(NSString *)arg0;
- (id)findBestCluster:(id)arg0 withMaxEffectSize:(int)arg1 idealEffectSize:(int)arg2;
- (int)addSlideForPath:(NSString *)arg0 withIndex:(int)arg1;
- (id)clusterSlidesSortedByUserDefinedSortOrder:(id)arg0 userDefinedSlideOrder:(id)arg1;
- (id)allSlidesSortedChronologically;
- (void)resetAllUsageCounters;
- (void)addKeywords:(id)arg0 forSlide:(MPSlide *)arg1;
- (void)updateYearClustersWithDate:(NSDate *)arg0 ofSlide:(MPSlide *)arg1;
- (void)updateMonthClustersWithDate:(NSDate *)arg0 ofSlide:(MPSlide *)arg1;
- (void)updateMonthOfYearClustersWithDate:(NSDate *)arg0 ofSlide:(MPSlide *)arg1;
- (void)updateDayOfYearClustersWithDate:(NSDate *)arg0 ofSlide:(MPSlide *)arg1;
- (void)updateHourOfYearClustersWithDate:(NSDate *)arg0 ofSlide:(MPSlide *)arg1;
- (void)updateMinuteOfYearClustersWithDate:(NSDate *)arg0 ofSlide:(MPSlide *)arg1;
- (void)updateRoundedFiveMinuteOfYearClustersWithDate:(NSDate *)arg0 ofSlide:(MPSlide *)arg1;
- (void)updateRoundedFifteenMinuteOfYearClustersWithDate:(NSDate *)arg0 ofSlide:(MPSlide *)arg1;
- (void)updateAllSlidesClusterWithSlide:(id)arg0;
- (id)allSlidesSortedByUsage;
- (NSString *)yearClusterForAssetAtPath:(NSString *)arg0;
- (NSString *)monthClusterForAssetAtPath:(NSString *)arg0;
- (NSString *)monthOfYearClusterForAssetAtPath:(NSString *)arg0;
- (NSString *)dayOfYearClusterForAssetAtPath:(NSString *)arg0;
- (NSString *)hourOfYearClusterForAssetAtPath:(NSString *)arg0;
- (NSString *)minuteOfYearClusterForAssetAtPath:(NSString *)arg0;
- (NSString *)roundedFiveMinuteOfYearClusterForAssetAtPath:(NSString *)arg0;
- (NSString *)roundedFifteenMinuteOfYearClusterForAssetAtPath:(NSString *)arg0;
- (id)findBestCluster:(id)arg0;
- (void)_removeAllSingleSlideClustersForClusterCategory:(NSString *)arg0;
- (NSDictionary *)prioritizedSlideClustersDictionary;
- (id)yearClusters;
- (id)monthClusters;
- (id)monthOfYearClusters;
- (id)dayOfYearClusters;
- (id)hourOfYearClusters;
- (id)minuteOfYearClusters;
- (id)roundedFiveMinuteOfYearClusters;
- (id)roundedFifteenMinuteOfYearClusters;
- (id)keywordClusters;
- (id)locationClusters;
- (id)userProvidedClusters;
- (void)removeAllSingleSlideClusters;
- (void)updateRatingsForYearClusters;
- (void)updateRatingsForMonthClusters;
- (void)updateRatingsForMonthOfYearClusters;
- (void)updateRatingsForDayOfYearClusters;
- (void)updateRatingsForHourOfYearClusters;
- (void)updateRatingsForMinuteOfYearClusters;
- (void)updateRatingsForRoundedFiveMinuteOfYearClusters;
- (void)updateRatingsForRoundedFifteenMinuteOfYearClusters;
- (void)updateRatingsForKeywordClusters;
- (void)updateRatingsForLocationClusters;
- (id)nextLeastUsedSlides:(int)arg0 forLayer:(CALayer *)arg1 markAsUsed:(char)arg2;
- (id)clusterSlidesSortedChronologically:(id)arg0;
- (void)sortClusterSlidesChronologically:(id *)arg0;
- (void)flushClusters;
- (id)findBestChronologicalCluster:(id)arg0 startingWithSlide:(id)arg1;
- (id)findBestClusterBasedOnUserDefinedSlideOrder:(id)arg0 startingWithSlide:(id)arg1;
- (void)addPaths:(NSArray *)arg0 toUserDefinedCluster:(id)arg1;
- (void)createLocationClustersForPaths:(NSArray *)arg0;
- (void)dumpClustersStatistics;
- (void)dumpSlidesStatistics;

@end
