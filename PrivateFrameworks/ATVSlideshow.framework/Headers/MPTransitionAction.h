/* Runtime dump - MPTransitionAction
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPTransitionAction : MPAction
{
    NSString * _transitionID;
    double _transitionDuration;
    NSMutableDictionary * _transitionAttributes;
    NSObject<MPActionableSupport> * _transitionDestination;
}

@property (copy, nonatomic) NSDictionary * transitionAttributes;
@property (copy, nonatomic) NSString * transitionID;
@property (nonatomic) double transitionDuration;
@property (retain, nonatomic) NSObject<MPActionableSupport> * transitionDestination;

+ (MPTransitionAction *)transitionAction;

- (void)dealloc;
- (MPTransitionAction *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPTransitionAction *)init;
- (MPTransitionAction *)copyWithZone:(struct _NSZone *)arg0;
- (void)setAction:(MCAction *)arg0;
- (double)transitionDuration;
- (void)setTransitionDuration:(double)arg0;
- (void)configureTarget;
- (void)setTransitionAttributes:(NSDictionary *)arg0;
- (void)setTransitionID:(NSString *)arg0;
- (void)setTransitionDestination:(NSObject<MPActionableSupport> *)arg0;
- (NSString *)transitionAttributeForKey:(NSString *)arg0;
- (NSDictionary *)transitionAttributes;
- (NSString *)transitionID;
- (NSObject<MPActionableSupport> *)transitionDestination;

@end
