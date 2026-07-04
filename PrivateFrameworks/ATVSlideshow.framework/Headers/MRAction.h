/* Runtime dump - MRAction
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRAction : NSObject
{
    MCAction * mMCAction;
    NSInvocation * mInvocation;
    id mSender;
    MRLayer * mResolvedTarget;
    NSMutableDictionary * mStates;
    double mTime;
    id mSpecificObject;
}

@property (readonly) MCAction * action;
@property (retain, nonatomic) id sender;
@property (retain) MRLayer * resolvedTarget;
@property (retain) NSMutableDictionary * states;
@property (nonatomic) double time;
@property (retain) id specificObject;

- (void)dealloc;
- (NSString *)description;
- (double)invoke;
- (MCAction *)action;
- (void)setTime:(double)arg0;
- (double)time;
- (<NSURLAuthenticationChallengeSender> *)sender;
- (void)setSender:(NSObject *)arg0;
- (NSMutableDictionary *)states;
- (MRAction *)initWithAction:(MCAction *)arg0 inRenderer:(NSObject *)arg1;
- (void)setStates:(NSMutableDictionary *)arg0;
- (NSObject *)specificObject;
- (MRLayer *)resolvedTarget;
- (MRAction *)initWithSelector:(SEL)arg0 sender:(NSObject *)arg1 andTargetPath:(NSString *)arg2 inRenderer:(NSObject *)arg3;
- (void)setSpecificObject:(NSObject *)arg0;
- (MRAction *)initWithAction:(MCAction *)arg0 andTarget:(NSObject *)arg1;
- (void)setResolvedTarget:(MRLayer *)arg0;
- (void)_resolveTargetPath:(NSString *)arg0;

@end
