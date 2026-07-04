/* Runtime dump - UISliderContent
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISliderContent : NSObject
{
    UIImage * thumb;
    UIImage * minTrack;
    UIImage * maxTrack;
}

@property (retain, nonatomic) UIImage * thumb;
@property (retain, nonatomic) UIImage * minTrack;
@property (retain, nonatomic) UIImage * maxTrack;
@property (readonly, nonatomic) char isEmpty;

- (void)dealloc;
- (char)isEmpty;
- (UIImage *)thumb;
- (void)setThumb:(UIImage *)arg0;
- (UIImage *)minTrack;
- (void)setMinTrack:(UIImage *)arg0;
- (UIImage *)maxTrack;
- (void)setMaxTrack:(UIImage *)arg0;

@end
