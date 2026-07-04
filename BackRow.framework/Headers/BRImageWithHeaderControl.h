/* Runtime dump - BRImageWithHeaderControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRHeaderControl, BRImageControl;
@interface BRImageWithHeaderControl : BRControl
{
    BRHeaderControl * _header;
    BRImageControl * _image;
}

+ (NSString *)controlWithTitle:(NSString *)arg0 andImage:(UIImage *)arg1;

- (NSArray *)accessibilityScreenContent;
- (void)layoutSubcontrols;
- (void)dealloc;
- (void)setImage:(BRImageControl *)arg0;
- (BRImageWithHeaderControl *)init;
- (void)setTitle:(NSString *)arg0;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;

@end
