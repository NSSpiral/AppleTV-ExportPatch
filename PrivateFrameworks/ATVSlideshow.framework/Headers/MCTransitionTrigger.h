/* Runtime dump - MCTransitionTrigger
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCTransitionTrigger : MCAction
{
    NSMutableDictionary * _transitionAttributes;
    NSString * _transitionID;
    NSString * _transitionDestinationPlugID;
    double _transitionDuration;
}

@property (copy) NSString * transitionID;
@property (nonatomic) double transitionDuration;
@property (copy, nonatomic) NSDictionary * transitionAttributes;
@property (copy) NSString * transitionDestinationPlugID;

+ (NSObject *)transitionForTargetPlugObjectID:(NSObject *)arg0 withTransitionID:(NSString *)arg1;

- (NSString *)description;
- (double)transitionDuration;
- (void)setTransitionDuration:(double)arg0;
- (void)setTransitionAttributes:(NSDictionary *)arg0;
- (void)setTransitionID:(NSString *)arg0;
- (void)setTransitionDestinationPlugID:(NSString *)arg0;
- (NSDictionary *)transitionAttributes;
- (NSString *)transitionID;
- (void)demolish;
- (NSString *)transitionDestinationPlugID;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCTransitionTrigger *)initWithImprint:(NSDictionary *)arg0;
- (NSDictionary *)imprint;

@end
