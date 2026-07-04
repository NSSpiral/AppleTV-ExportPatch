/* Runtime dump - MPEffectContainer
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPEffectContainer : NSObject <MPActionableSupportInternal, NSCoding, NSCopying, MPFilterSupport, MPAudioSupport, MPActionableSupport>
{
    MCPlug * _containerPlug;
    MCContainerParallelizer * _containerParallelizer;
    NSMutableArray * _effects;
    NSMutableArray * _filters;
    NSMutableDictionary * _attributes;
    MPTransition * _transition;
    MPLayer * _parentLayer;
    MPAudioPlaylist * _audioPlaylist;
    char _transitionDisconnected;
    double _startTime;
    double _duration;
    struct CGColor * _backgroundColor;
    NSString * _uuid;
}

@property (nonatomic) struct CGColor * backgroundCGColor;
@property (retain, nonatomic) MPTransition * transition;
@property (nonatomic) double duration;

+ (char)automaticallyNotifiesObserversForKey:(NSString *)arg0;
+ (MPEffectContainer *)effectContainer;

- (void)dealloc;
- (MPEffectContainer *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPEffectContainer *)init;
- (NSString *)description;
- (double)duration;
- (void)setDuration:(double)arg0;
- (void)setStartTime:(double)arg0;
- (MPEffectContainer *)copyWithZone:(struct _NSZone *)arg0;
- (NSMutableArray *)filters;
- (void)setTransition:(MPTransition *)arg0;
- (MPTransition *)transition;
- (NSString *)container;
- (int)index;
- (double)startTime;
- (NSString *)uuid;
- (void)cleanup;
- (MPDocument *)parentDocument;
- (NSObject *)plugID;
- (void)copyVars:(id)arg0;
- (NSString *)fullDebugLog;
- (MPLayer *)parentLayer;
- (MPAudioPlaylist *)audioPlaylist;
- (void)setAudioPlaylist:(MPAudioPlaylist *)arg0;
- (int)countOfEffects;
- (void)setBackgroundCGColor:(struct CGColor *)arg0;
- (double)introTransitionDuration;
- (void)setUserInfoAttribute:(NSObject *)arg0 forKey:(NSString *)arg1;
- (NSString *)userInfoAttributeForKey:(NSString *)arg0;
- (double)outroTransitionDuration;
- (NSObject *)objectInEffectsAtIndex:(int)arg0;
- (int)textCount;
- (void)removeEffectsAtIndices:(id)arg0;
- (MCPlug *)plug;
- (struct CGColor *)backgroundCGColor;
- (void)copyFilters:(id)arg0;
- (void)copyAudioPlaylist:(id)arg0;
- (char)shouldBeParallelizer;
- (void)convertFromParallelizerToEffectContainer;
- (void)convertFromEffectContainerToParallelizer;
- (NSObject *)nearestLayerGroup;
- (double)findMinDuration;
- (void)calculateDurationToSmallest:(char)arg0;
- (void)insertFilters:(id)arg0 atIndex:(int)arg1;
- (void)removeFiltersAtIndices:(id)arg0;
- (void)removeAllFilters;
- (void)moveFiltersFromIndices:(id)arg0 toIndex:(int)arg1;
- (int)countOfFilters;
- (NSObject *)objectInFiltersAtIndex:(int)arg0;
- (void)insertObject:(NSObject *)arg0 inFiltersAtIndex:(int)arg1;
- (void)removeObjectFromFiltersAtIndex:(int)arg0;
- (void)replaceObjectInFiltersAtIndex:(int)arg0 withObject:(NSObject *)arg1;
- (void)copyEffects:(id)arg0;
- (void)copyTransition:(NSObject *)arg0;
- (void)insertEffects:(id)arg0 atIndex:(int)arg1;
- (void)adjustPhasesWithDuration:(double)arg0;
- (char)isTransitionConnected;
- (void)removeAllEffects;
- (void)moveEffectsFromIndices:(id)arg0 toIndex:(int)arg1;
- (void)setBackgroundColorString:(NSString *)arg0;
- (void)disconnectTransition;
- (void)reconnectTransition;
- (void)setContainerPlug:(MCPlug *)arg0;
- (void)setContainerParallelizer:(MCContainerParallelizer *)arg0;
- (void)setContainerEffect:(NSObject *)arg0;
- (void)setParentLayer:(MPLayer *)arg0;
- (void)insertObject:(NSObject *)arg0 inEffectsAtIndex:(int)arg1;
- (void)removeObjectFromEffectsAtIndex:(int)arg0;
- (void)replaceObjectInEffectsAtIndex:(int)arg0 withObject:(NSObject *)arg1;
- (NSObject *)scriptingTransition;
- (void)setScriptingTransition:(NSObject *)arg0;
- (void)addFilters:(id)arg0;
- (void)dump;
- (NSMutableArray *)effects;
- (void)addEffect:(NSObject *)arg0;
- (void)addEffects:(CUIPSDLayerEffects *)arg0;
- (void)addFilter:(NSObject *)arg0;
- (int)slideCount;
- (NSString *)objectID;
- (void)finalize;

@end
