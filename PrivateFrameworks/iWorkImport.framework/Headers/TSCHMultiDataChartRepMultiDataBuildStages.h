/* Runtime dump - TSCHMultiDataChartRepMultiDataBuildStages
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataChartRepMultiDataBuildStages : NSObject <TSCHUnretainedParent>
{
    TSCHMultiDataChartRep * mRep;
    struct _NSRange mStages;
    float mTotalDuration;
    float mDuration;
    unsigned int mCurrentStage;
}

@property (readonly, nonatomic) unsigned int currentStage;
@property (readonly, nonatomic) float duration;

+ (unsigned int)numberOfFadingBuildStages;
+ (unsigned int)dataSetIndexForRep:(NSObject *)arg0 buildStage:(unsigned int)arg1;
+ (NSObject *)buildStagesWithRep:(NSObject *)arg0 stages:(struct _NSRange)arg1 totalDuration:(float)arg2;

- (void)clearParent;
- (TSCHChartLayout *)chartLayout;
- (TSCHMultiDataChartRepMultiDataBuildStages *)initWithRep:(NSObject *)arg0 stages:(struct _NSRange)arg1 totalDuration:(float)arg2;
- (void)setupLayoutDataSetIndexForCurrentStage;
- (unsigned int)dataSetIndexForStage:(unsigned int)arg0;
- (char)isBackgroundOnlyStage:(unsigned int)arg0;
- (void)setupLayoutDataSetIndexForNextStage;
- (char)isBackgroundOnly;
- (char)isLastStageBackgroundOnly;
- (char)isFadingInLayers;
- (void)advanceStage;
- (char)hasStage;
- (void)dealloc;
- (float)duration;
- (void).cxx_construct;
- (unsigned int)currentStage;

@end
