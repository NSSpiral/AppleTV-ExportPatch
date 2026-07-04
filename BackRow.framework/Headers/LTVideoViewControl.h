/* Runtime dump - LTVideoViewControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface LTVideoViewControl : BRControl
{
    ATVPlayer * _player;
}

@property (retain, nonatomic) ATVPlayer * player;

+ (Class)layerClass;

- (void)dealloc;
- (LTVideoViewControl *)init;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void).cxx_destruct;
- (CALayer *)avPlayerLayer;
- (void)setPlayer:(ATVPlayer *)arg0;
- (ATVPlayer *)player;

@end
