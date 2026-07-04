/* Runtime dump - SBUIPluginActivationContext
 * Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIPluginActivationContext : NSObject
{
    UIScreen * _screen;
    int _activationEvent;
}

@property (retain, nonatomic) UIScreen * screen;
@property (nonatomic) int activationEvent;

- (void)dealloc;
- (UIScreen *)screen;
- (void)setScreen:(UIScreen *)arg0;
- (int)activationEvent;
- (void)setActivationEvent:(int)arg0;

@end
