/* Runtime dump - BRTrackInfoLayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRImageControl;
@interface BRTrackInfoLayer : BRControl
{
    BRControl * _background;
    BRImageControl * _art;
    NSArray * _lines;
    float _maxLength;
    long _maxLines;
}

- (void)layoutSubcontrols;
- (void)setMaxLines:(long)arg0;
- (void)setLines:(NSArray *)arg0 withImage:(UIImage *)arg1;
- (void)_updateSublayers;
- (void)dealloc;
- (void)setImage:(ATVImage *)arg0;
- (BRTrackInfoLayer *)init;
- (NSString *)accessibilityLabel;

@end
