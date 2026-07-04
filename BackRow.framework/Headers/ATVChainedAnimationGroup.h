/* Runtime dump - ATVChainedAnimationGroup
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVChainedAnimationGroup : NSObject
{
    char _evaluated;
    CAAnimation * _defaultFillerAnimation;
    NSMutableArray * _tuples;
}

@property (retain, nonatomic) CAAnimation * defaultFillerAnimation;
@property (nonatomic) char evaluated;
@property (retain, nonatomic) NSMutableArray * tuples;

- (void)addChainedAnimation:(NSObject *)arg0 forKey:(NSString *)arg1 inView:(struct CGSize)arg2;
- (void)setDefaultFillerAnimation:(CAAnimation *)arg0;
- (NSMutableArray *)tuples;
- (void)setTuples:(NSMutableArray *)arg0;
- (char)evaluated;
- (void)setEvaluated:(char)arg0;
- (void)_evaluateTuplesWithoutContinuationCheck;
- (CAAnimation *)defaultFillerAnimation;
- (void)_evaluateTuplesWithContinuationCheck;
- (void)cleanUp;
- (void).cxx_destruct;
- (void)evaluate;

@end
