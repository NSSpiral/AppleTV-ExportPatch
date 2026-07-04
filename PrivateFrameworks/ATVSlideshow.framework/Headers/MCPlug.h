/* Runtime dump - MCPlug
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCPlug : MCObject <MCAnimationPathSupport, MCActionSupport>
{
    unsigned long mFlags;
    NSMutableSet * mAnimationPaths;
    NSMutableDictionary * mActions;
    MCContainer * mContainer;
    double mPhaseInDuration;
    double mLoopDuration;
    double mPhaseOutDuration;
    double mNumberOfLoops;
}

@property (readonly) NSSet * animationPaths;
@property (readonly) unsigned int countOfAnimationPaths;
@property (readonly) NSDictionary * actions;
@property (readonly, nonatomic) unsigned int countOfActions;
@property (retain) MCContainer * container;
@property (nonatomic) double phaseInDuration;
@property (nonatomic) double loopDuration;
@property (nonatomic) double phaseOutDuration;
@property (readonly, nonatomic) double fullDuration;
@property (nonatomic) double numberOfLoops;
@property (nonatomic) char startsPaused;
@property (nonatomic) char preactivatesWithParent;

+ (NSString *)keyPathsForValuesAffectingValueForKey:(NSString *)arg0;

- (void)removeActionForKey:(NSString *)arg0;
- (MCPlug *)init;
- (NSDictionary *)actions;
- (NSString *)actionForKey:(NSString *)arg0;
- (void)setContainer:(MCContainer *)arg0;
- (MCContainer *)container;
- (void)removeAllActions;
- (void)setAction:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)setPhaseInDuration:(double)arg0;
- (void)setLoopDuration:(double)arg0;
- (void)setPhaseOutDuration:(double)arg0;
- (void)addAnimationPath:(NSString *)arg0;
- (void)removeAllAnimationPaths;
- (double)fullDuration;
- (NSSet *)animationPaths;
- (void)removeAnimationPathForKey:(NSString *)arg0;
- (NSString *)animationPathForKey:(NSString *)arg0;
- (void)setAnimationPath:(NSString *)arg0 forKey:(NSString *)arg1;
- (double)phaseInDuration;
- (double)phaseOutDuration;
- (double)numberOfLoops;
- (void)setNumberOfLoops:(double)arg0;
- (void)demolish;
- (double)loopDuration;
- (void)setStartsPaused:(char)arg0;
- (char)startsPaused;
- (char)preactivatesWithParent;
- (unsigned int)countOfAnimationPaths;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (unsigned int)countOfActions;
- (void)initAnimationPathsWithImprints:(id)arg0;
- (void)demolishAnimationPaths;
- (NSArray *)imprintsForAnimationPaths;
- (MCPlug *)initWithImprint:(NSDictionary *)arg0 andMontage:(NSObject *)arg1;
- (void)initActionsWithImprints:(id)arg0;
- (void)demolishActions;
- (id)imprintsForActions;
- (void)setPreactivatesWithParent:(char)arg0;
- (NSDictionary *)imprint;

@end
