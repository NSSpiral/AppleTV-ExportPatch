/* Runtime dump - ATVImageHeaderViewOverlay
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRControl;
@interface ATVImageHeaderViewOverlay : NSObject
{
    BRControl * _overlayControl;
    struct ? _overlayMargins;
}

@property (retain, nonatomic) BRControl * overlayControl;
@property (nonatomic) struct ? overlayMargins;

+ (ATVImageHeaderViewOverlay *)overlayWithControl:(BRControl *)arg0 margins:(struct ?)arg1;

- (BRControl *)overlayControl;
- (void)setOverlayControl:(BRControl *)arg0;
- (void)setOverlayMargins:(struct ?)arg0;
- (struct ?)overlayMargins;
- (void).cxx_destruct;

@end
