/* Runtime dump - CPCluster
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPCluster : NSObject <CPDisposable>
{
    struct ? * profile;
    unsigned int xCount;
    double * x;
    double * dx;
    unsigned int * dxOrderIndex;
    unsigned int interClusterMinIndex;
    double * ddx;
    unsigned int * ddxOrderIndex;
    unsigned int interLevelMinIndex;
    unsigned int minClusterSize;
    double maxClusterSpread;
    double minInterClusterDiff;
    double minInterLevel2ndDiff;
    unsigned int clusterCount;
    struct ? * xStats;
    unsigned int levels;
    struct ? * dxStats;
    char ownData;
    char ownDifferences;
}

+ (void)clusterTextLine:(id)arg0;
+ (unsigned int *)createOrderIndexFor:(double *)arg0 ofSize:(unsigned int)arg1;
+ (void)reclusterTextLine:(id)arg0 fromWordIndex:(unsigned int)arg1 count:(unsigned int *)arg2;

- (void)dealloc;
- (CPCluster *)init;
- (void)dispose;
- (unsigned int)levels;
- (char)joinLevelsFrom:(unsigned int)arg0 to:(unsigned int)arg1;
- (void)splitSecondDifferences;
- (void)assembleDifferenceStats;
- (char)coalesceFrom:(unsigned int)arg0 to:(unsigned int)arg1;
- (void)computeDataFromDifferences;
- (void)assembleDensityDifferenceStats;
- (void)computeDifferencesFromData;
- (void)analyzeDifferences;
- (void)analyzeDensities;
- (char)splitLevelAtIndex:(unsigned int)arg0 betweenValue:(double)arg1 andValue:(double)arg2;
- (char)joinClosestLevelPairFrom:(unsigned int)arg0 to:(unsigned int)arg1;
- (void)assembleDataStats;
- (void)setMinimumClusterSize:(unsigned int)arg0;
- (void)setMaximumClusterSpread:(double)arg0;
- (void)setMinimumRecognizedInterClusterDifference:(double)arg0;
- (void)setMinimumRecognizedInterLevel2ndDifference:(double)arg0;
- (void)findClusters:(double *)arg0 count:(unsigned int)arg1;
- (void)findClustersFromDifferences:(double *)arg0 count:(unsigned int)arg1;
- (void)findDensityClusters:(double *)arg0 count:(unsigned int)arg1;
- (char)applyDifferenceHints:(struct ? *)arg0 count:(unsigned int)arg1;
- (unsigned int)clusterCount;
- (struct ?)clusterStatisticsAtIndex:(unsigned int)arg0;
- (struct ?)differenceClusterStatisticsAtIndex:(unsigned int)arg0;
- (struct ?)largestClusterStatistics;
- (void)findClustersFromCharacterSequence:(id)arg0 withSpaceHint:(char)arg1;
- (void)makeWords:(struct ? *)arg0 count:(struct CGSize)arg1 fromCharacterSequence:(id)arg2 charOffset:(NSSet *)arg3;
- (void)tryLevel0SplitBetween:(double)arg0 and:(double)arg1 usingHints:(struct ? *)arg2;
- (CPCluster *)initWithProfile:(struct ? *)arg0;
- (void)finalize;

@end
