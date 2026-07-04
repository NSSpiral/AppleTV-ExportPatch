/* Runtime dump - SKTransition
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKTransition : NSObject
{
    struct ? _data;
    CIFilter * _filter;
    char _pauseIncoming;
    char _pauseOutgoing;
}

@property (nonatomic) char pausesIncomingScene;
@property (nonatomic) char pausesOutgoingScene;

+ (NSNumber *)revealDownWithDuration:(double)arg0;
+ (NSNumber *)revealUpWithDuration:(double)arg0;
+ (NSNumber *)revealLeftWithDuration:(double)arg0;
+ (NSNumber *)revealRightWithDuration:(double)arg0;
+ (NSNumber *)moveInDownWithDuration:(double)arg0;
+ (NSNumber *)moveInUpWithDuration:(double)arg0;
+ (NSNumber *)moveInLeftWithDuration:(double)arg0;
+ (NSNumber *)moveInRightWithDuration:(double)arg0;
+ (NSNumber *)pushDownWithDuration:(double)arg0;
+ (NSNumber *)pushUpWithDuration:(double)arg0;
+ (NSNumber *)pushLeftWithDuration:(double)arg0;
+ (NSNumber *)pushRightWithDuration:(double)arg0;
+ (SKTransition *)revealWithDirection:(int)arg0 duration:(double)arg1;
+ (SKTransition *)moveInWithDirection:(int)arg0 duration:(double)arg1;
+ (SKTransition *)pushWithDirection:(int)arg0 duration:(double)arg1;
+ (NSNumber *)fadeWithDuration:(double)arg0;
+ (UIColor *)fadeWithColor:(UIColor *)arg0 duration:(double)arg1;
+ (NSNumber *)crossFadeWithDuration:(double)arg0;
+ (NSNumber *)flipHorizontalWithDuration:(double)arg0;
+ (NSNumber *)flipVerticalWithDuration:(double)arg0;
+ (NSNumber *)doorsOpenHorizontalWithDuration:(double)arg0;
+ (NSNumber *)doorsOpenVerticalWithDuration:(double)arg0;
+ (NSNumber *)doorsCloseHorizontalWithDuration:(double)arg0;
+ (NSNumber *)doorsCloseVerticalWithDuration:(double)arg0;
+ (NSNumber *)doorwayWithDuration:(double)arg0;
+ (SKTransition *)transitionWithCIFilter:(NSObject *)arg0 duration:(double)arg1;

- (struct ?)_data;
- (CIFilter *)_filter;
- (char)pausesIncomingScene;
- (void)setPausesIncomingScene:(char)arg0;
- (char)pausesOutgoingScene;
- (void)setPausesOutgoingScene:(char)arg0;
- (SKTransition *)init;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
