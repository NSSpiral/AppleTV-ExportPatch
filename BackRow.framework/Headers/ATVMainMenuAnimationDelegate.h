/* Runtime dump - ATVMainMenuAnimationDelegate
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVMainMenuAnimationDelegate : NSObject
{
    id _handler;
}

@property (readonly, copy, nonatomic) id handler;

- (ATVMainMenuAnimationDelegate *)initWithAnimationDidStopHandler:(id /* block */)arg0;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (id /* block */)handler;
- (void).cxx_destruct;

@end
