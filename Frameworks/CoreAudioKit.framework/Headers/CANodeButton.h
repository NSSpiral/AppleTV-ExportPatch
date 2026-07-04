/* Runtime dump - CANodeButton
 * Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface CANodeButton : UIButton
{
    char hasLabel;
    NSURL * _url;
}

@property (retain) NSURL * url;
@property char hasLabel;

- (void)setHasLabel:(char)arg0;
- (char)hasLabel;
- (CANodeButton *)init;
- (void)layoutSubviews;
- (NSURL *)url;
- (void)setUrl:(NSURL *)arg0;

@end
