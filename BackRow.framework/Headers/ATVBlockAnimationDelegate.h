/* Runtime dump - ATVBlockAnimationDelegate
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVBlockAnimationDelegate : NSObject
{
    id _beginHandler;
    id _endHandler;
}

@property (copy, nonatomic) id beginHandler;
@property (copy, nonatomic) id endHandler;

- (ATVBlockAnimationDelegate *)initWithEndHandler:(id /* block */)arg0;
- (ATVBlockAnimationDelegate *)initWithBeginHandler:(id /* block */)arg0 endHandler:(/* block */ id)arg1;
- (id /* block */)beginHandler;
- (id /* block */)endHandler;
- (void)setBeginHandler:(id /* block */)arg0;
- (void)setEndHandler:(id /* block */)arg0;
- (ATVBlockAnimationDelegate *)init;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (void)animationDidStart:(CAAnimation *)arg0;
- (void).cxx_destruct;

@end
