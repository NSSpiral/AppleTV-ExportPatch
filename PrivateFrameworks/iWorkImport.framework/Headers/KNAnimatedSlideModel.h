/* Runtime dump - KNAnimatedSlideModel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimatedSlideModel : NSObject
{
    KNAnimatedSlideView * _ASV;
    NSArray * _infos;
    KNPlaybackSession * _session;
    NSMutableArray * _buildEvents;
    NSMutableArray * _animatedBuilds;
    TSUNoCopyDictionary * _infoToAnimatedBuildMap;
    TSUNoCopyDictionary * _animatedBuildToRendererMap;
    unsigned int _numberOfAddedEvents;
}

@property (readonly, nonatomic) NSArray * animatedBuilds;
@property (nonatomic) unsigned int numberOfAddedEvents;
@property (readonly, nonatomic) char firstBuildEventAutomatic;

- (float)maxScaleFactorForDrawable:(id)arg0;
- (NSDictionary *)previousBuildInForInfo:(NSDictionary *)arg0 priorToBuild:(id)arg1;
- (id)rendererForAnimatedBuild:(id)arg0;
- (NSDictionary *)previousAnimatedBuildForInfo:(NSDictionary *)arg0 priorToBuild:(id)arg1;
- (KNAnimatedSlideModel *)initWithBuildChunks:(id)arg0 infos:(NSArray *)arg1 session:(KNPlaybackSession *)arg2 animatedSlideView:(KNAnimatedSlideView *)arg3;
- (id)actionEffectForDrawable:(id)arg0 atBeginningOfEvent:(int)arg1;
- (id)p_convertToBuildEvents:(id)arg0;
- (void)p_insertInitialMovies;
- (void)enumerateAnimatedBuildsAndTimeRangesAtIndex:(unsigned int)arg0 ignoreInitialDelay:(char)arg1 usingBlock:(id /* block */)arg2;
- (double)initialDelayForEventIndex:(unsigned int)arg0;
- (NSObject *)eventsAtIndex:(unsigned int)arg0;
- (int)p_eventNumberForInfo:(NSDictionary *)arg0 animationType:(int)arg1 defaultResult:(int)arg2;
- (NSArray *)animatedBuilds;
- (NSDictionary *)animatedBuildForInfo:(NSDictionary *)arg0 atEvent:(int)arg1;
- (NSArray *)p_createBuildAnimationRecords:(NSArray *)arg0 info:(NSDictionary *)arg1 event:(int)arg2 start:(double)arg3 eventStart:(double)arg4 animateAtEndOfPreviousBuild:(char)arg5 previousAnimatedBuild:(id)arg6 movieDrawables:(id)arg7;
- (void)p_updateVisibilityOnAnimatedBuild:(id)arg0;
- (void)p_updatePreviousAndFinalAttributes;
- (void)p_setRenderer:(NSObject *)arg0 forAnimatedBuild:(KNAnimatedBuild *)arg1;
- (NSDictionary *)p_applyThemeCurvesToBuildAttributes:(NSDictionary *)arg0;
- (id)p_createMovieBuild:(id)arg0 stageIndex:(int)arg1 buildChunk:(KNBuildChunk *)arg2 startTime:(double)arg3 eventStartTime:(double)arg4 event:(int)arg5 animateAtEndOfPreviousBuild:(char)arg6;
- (NSDictionary *)p_animatedBuildForInfo:(NSDictionary *)arg0 event:(int)arg1 buildIn:(char)arg2;
- (int)inEventForInfo:(NSDictionary *)arg0;
- (int)outEventForInfo:(NSDictionary *)arg0;
- (NSObject *)p_getCurrentDocumentRoot;
- (NSObject *)createInfoToBuildMap:(NSObject *)arg0;
- (void)enumerateAnimatedBuildsAndTimeRangesAtIndex:(unsigned int)arg0 usingBlock:(id /* block */)arg1;
- (char)info:(NSDictionary *)arg0 isVisibleDuringEvent:(int)arg1;
- (NSObject *)buildChunksForEventRange:(struct _NSRange)arg0;
- (double)durationForEventIndexes:(NSArray *)arg0;
- (struct _NSRange)eventRangeForInfos:(id)arg0;
- (NSDictionary *)firstAnimatedBuildForInfo:(NSDictionary *)arg0;
- (NSDictionary *)lastAnimatedBuildForInfo:(NSDictionary *)arg0;
- (NSDictionary *)animatedBuildForInfo:(NSDictionary *)arg0 aroundEvent:(int)arg1 isAtEndOfBuild:(char *)arg2;
- (id)finalActionEffectForDrawable:(id)arg0;
- (char)isFirstBuildEventAutomatic;
- (char)p_determineVisiblityOfInfo:(NSDictionary *)arg0 inOverloadedEvent:(int)arg1 duringEvent:(int)arg2;
- (NSArray *)p_createInfoListFromRendererList:(NSArray *)arg0;
- (unsigned int)numberOfAddedEvents;
- (void)setNumberOfAddedEvents:(unsigned int)arg0;
- (void)dealloc;
- (unsigned int)count;
- (void)setTransition:(NSString *)arg0;
- (MPTransition *)transition;

@end
