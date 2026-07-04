/* Runtime dump - LTVideoVisualControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface LTVideoVisualControl : BRControl
{
    AVPlayerLayer * _output;
}

- (void)layoutSubcontrols;
- (LTVideoVisualControl *)initWithPlayerLayer:(AVPlayerLayer *)arg0;
- (LTVideoVisualControl *)initWithPlayer:(ATVPlayer *)arg0;
- (void)dealloc;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void).cxx_destruct;

@end
