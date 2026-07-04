/* Runtime dump - OBSplashBullet
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface OBSplashBullet : NSObject
{
    NSString * _text;
    struct ATVImage * _icon;
}

@property (copy) NSString * text;
@property (retain) ATVImage * icon;

- (struct ATVImage *)icon;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void)setIcon:(struct ATVImage *)arg0;
- (void).cxx_destruct;

@end
