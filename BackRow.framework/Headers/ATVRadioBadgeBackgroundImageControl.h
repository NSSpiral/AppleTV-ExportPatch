/* Runtime dump - ATVRadioBadgeBackgroundImageControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface ATVRadioBadgeBackgroundImageControl : BRControl
{
    UIImage * _image;
}

@property (retain, nonatomic) UIImage * image;

- (void)drawRect:(struct CGRect)arg0;
- (void)setImage:(UIImage *)arg0;
- (ATVRadioBadgeBackgroundImageControl *)initWithImage:(UIImage *)arg0;
- (UIImage *)image;
- (void).cxx_destruct;

@end
