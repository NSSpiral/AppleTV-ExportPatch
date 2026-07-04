/* Runtime dump - ATVShowcaseView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRAsyncImageControl, BRControl;
@interface ATVShowcaseView : BRControl
{
    BRAsyncImageControl * _imageView;
    BRControl * _descriptionView;
}

@property (retain, nonatomic) BRAsyncImageControl * imageView;
@property (retain, nonatomic) BRControl * descriptionView;

- (NSArray *)accessibilityScreenContent;
- (void)layoutSubcontrols;
- (void)setDescriptionView:(BRControl *)arg0;
- (BRControl *)descriptionView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (BRAsyncImageControl *)imageView;
- (void).cxx_destruct;
- (void)setImageView:(BRAsyncImageControl *)arg0;

@end
