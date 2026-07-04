/* Runtime dump - PLMomentListClustering
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentListClustering : NSObject
{
    char _allowsCollectionInfluencing;
    char _allowsCollectionAccumulation;
    char _allowsYearAccumulation;
    unsigned int __defaultNumberOfAssetsRequiredForSeeding;
    unsigned int __defaultMaxFailuresForExpansion;
    unsigned int __minimumNumberOfAssetsToAvoidMegamomentAccumulation;
    unsigned int __minimumNumberOfAssetsToAvoidYearAccumulation;
    NSMutableDictionary * __clustersByYearAndMonth;
    NSMutableSet * __visitedMoments;
    NSMapTable * __cachedLocationsByMoment;
    NSMutableDictionary * __cachedCollectionTagByMomentID;
    NSDateFormatter * __debugDateFormatter;
    double __maximumTimeThreshold;
    double __maximumTimeThresholdBetweenMomentsWithLocation;
    double __maximumTimeThresholdFromPeakMatch;
    double __maximumTimeThresholdBetweenMomentsWithoutLocation;
    double __maximumTimeThresholdFromPeakWithoutLocation;
    double __maximumDistanceThresholdBetweenMoments;
    double __maximumDistanceThresholdFromPeak;
    double __maximumDistanceBetweenAccumulatedMoments;
    double __megamomentAccumulationMaximumTimeThreshold;
}

@property (nonatomic) char allowsCollectionInfluencing;
@property (nonatomic) char allowsCollectionAccumulation;
@property (nonatomic) char allowsYearAccumulation;
@property (readonly, nonatomic) double _maximumTimeThreshold;
@property (readonly, nonatomic) double _maximumTimeThresholdBetweenMomentsWithLocation;
@property (readonly, nonatomic) double _maximumTimeThresholdFromPeakMatch;
@property (readonly, nonatomic) double _maximumTimeThresholdBetweenMomentsWithoutLocation;
@property (readonly, nonatomic) double _maximumTimeThresholdFromPeakWithoutLocation;
@property (readonly, nonatomic) double _maximumDistanceThresholdBetweenMoments;
@property (readonly, nonatomic) double _maximumDistanceThresholdFromPeak;
@property (readonly, nonatomic) double _maximumDistanceBetweenAccumulatedMoments;
@property (readonly, nonatomic) unsigned int _defaultNumberOfAssetsRequiredForSeeding;
@property (readonly, nonatomic) unsigned int _defaultMaxFailuresForExpansion;
@property (readonly, nonatomic) double _megamomentAccumulationMaximumTimeThreshold;
@property (readonly, nonatomic) unsigned int _minimumNumberOfAssetsToAvoidMegamomentAccumulation;
@property (readonly, nonatomic) unsigned int _minimumNumberOfAssetsToAvoidYearAccumulation;
@property (readonly, nonatomic) NSMutableDictionary * _clustersByYearAndMonth;
@property (readonly, nonatomic) NSMutableSet * _visitedMoments;
@property (retain, nonatomic) NSMapTable * _cachedLocationsByMoment;
@property (retain, nonatomic) NSMutableDictionary * _cachedCollectionTagByMomentID;
@property (readonly, nonatomic) NSDateFormatter * _debugDateFormatter;

+ (double)maximumTimeThresholdBetweenMoments;

- (void)dealloc;
- (PLMomentListClustering *)init;
- (void)setAllowsCollectionInfluencing:(char)arg0;
- (void)setAllowsCollectionAccumulation:(char)arg0;
- (void)setAllowsYearAccumulation:(char)arg0;
- (id)_cachedLocationForMoment:(id)arg0;
- (double)_maximumTimeThresholdBetweenMomentsWithLocation;
- (char)_isDateInMoment:(id)arg0 inDateRangeOfLastMoment:(id)arg1 withDelta:(double)arg2 forwards:(char)arg3;
- (double)_maximumTimeThresholdFromPeakMatch;
- (double)_maximumDistanceThresholdBetweenMoments;
- (double)_maximumDistanceThresholdFromPeak;
- (double)_maximumTimeThresholdBetweenMomentsWithoutLocation;
- (double)_maximumTimeThresholdFromPeakWithoutLocation;
- (char)_shouldMegaMomentList:(NSArray *)arg0 includeMoment:(id)arg1 withPeakMoment:(id)arg2 recentMoment:(id)arg3 recentMomentWithLocation:(NSObject *)arg4 forwards:(char)arg5 haveRejectedMomentsForDistance:(char)arg6;
- (NSMutableDictionary *)_cachedCollectionTagByMomentID;
- (void)_setCachedCollectionTagByMomentID:(NSObject *)arg0;
- (NSMapTable *)_cachedLocationsByMoment;
- (void)_verifyMomentsAreSorted:(id)arg0;
- (void)_createMomentListClusterCacheForMoments:(id)arg0;
- (char)allowsCollectionInfluencing;
- (void)_createMomentListTagCacheForMoments:(id)arg0;
- (void)_setCachedLocationsByMoment:(id)arg0;
- (unsigned int)_defaultNumberOfAssetsRequiredForSeeding;
- (id)_insertNewMegaMomentListWithMoment:(PLMoment *)arg0 inManager:(NSObject *)arg1;
- (unsigned int)_expandMegaMomentList:(NSArray *)arg0 fromPeakMoment:(id)arg1 towardMoments:(id)arg2 forwards:(char)arg3 outRejectedMoments:(id)arg4;
- (char)_updateMegaMomentList:(NSArray *)arg0 withRejectedMoments:(id)arg1;
- (double)_megamomentAccumulationMaximumTimeThreshold;
- (char)allowsCollectionAccumulation;
- (unsigned int)_minimumNumberOfAssetsToAvoidMegamomentAccumulation;
- (double)_maximumDistanceBetweenAccumulatedMoments;
- (char)allowsYearAccumulation;
- (unsigned int)_minimumNumberOfAssetsToAvoidYearAccumulation;
- (id)generateMegaMomentListsForMoments:(id)arg0 inManager:(NSObject *)arg1;
- (id)generateYearMomentListsForMoments:(id)arg0 earliestDate:(NSDate *)arg1 latestDate:(NSDate *)arg2 inManager:(NSObject *)arg3;
- (double)_maximumTimeThreshold;
- (unsigned int)_defaultMaxFailuresForExpansion;
- (NSMutableDictionary *)_clustersByYearAndMonth;
- (NSMutableSet *)_visitedMoments;
- (NSDateFormatter *)_debugDateFormatter;

@end
