/* Runtime dump - ATVChainedAnimationGroupTuple
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRControl;
@interface ATVChainedAnimationGroupTuple : NSObject
{
    BRControl * _view;
    CAAnimation * _animation;
    NSString * _key;
}

@property (retain, nonatomic) BRControl * view;
@property (copy, nonatomic) CAAnimation * animation;
@property (copy, nonatomic) NSString * key;

- (BRControl *)view;
- (NSString *)key;
- (void)setView:(BRControl *)arg0;
- (CAAnimation *)animation;
- (void)setAnimation:(CAAnimation *)arg0;
- (void)setKey:(NSString *)arg0;
- (void).cxx_destruct;

@end
