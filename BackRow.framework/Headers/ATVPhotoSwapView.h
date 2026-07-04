/* Runtime dump - ATVPhotoSwapView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl;
@interface ATVPhotoSwapView : BRControl
{
    BRControl * _originalView;
    BRControl * _alternateView;
    struct ? _preferredImageSize;
    struct ? _imageFrame;
}

@property (readonly, retain, nonatomic) BRControl * originalView;
@property (retain, nonatomic) BRControl * alternateView;
@property (readonly, nonatomic) struct ? imageFrame;
@property (readonly, nonatomic) struct ? preferredImageSize;
@property (readonly, nonatomic) char isSwapped;

+ (NSObject *)swapViewWithOriginalView:(BRControl *)arg0 imageFrame:(struct ?)arg1 preferredImageSize:(struct ?)arg2;

- (void)layoutSubcontrols;
- (struct ?)preferredImageSize;
- (BRControl *)originalView;
- (BRControl *)alternateView;
- (ATVPhotoSwapView *)initWithOriginalView:(BRControl *)arg0 imageFrame:(struct ?)arg1 preferredImageSize:(struct ?)arg2;
- (void)setAlternateView:(BRControl *)arg0;
- (char)isSwapped;
- (void)swapToAlternateView:(NSObject *)arg0 performingTransition:(char)arg1;
- (void)swapBackToOriginalViewPerformingTransition:(char)arg0;
- (ATVPhotoSwapView *)init;
- (void).cxx_destruct;
- (struct ?)imageFrame;

@end
