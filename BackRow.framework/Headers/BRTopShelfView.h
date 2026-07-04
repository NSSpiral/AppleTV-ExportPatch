/* Runtime dump - BRTopShelfView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRMainMenuImageControl, BRMainMenuShelfErrorControl, BRMediaShelfView;
@interface BRTopShelfView : BRControl
{
    int _state;
    BRMediaShelfView * _shelf;
    BRMainMenuShelfErrorControl * _error;
    BRMainMenuImageControl * _productImage;
    BRControl * _customLogoControl;
}

@property int state;
@property (readonly) BRMediaShelfView * shelf;
@property (readonly) BRMainMenuShelfErrorControl * error;
@property (retain, nonatomic) BRControl * customLogoControl;

- (void)setAcceptsFocus:(char)arg0;
- (NSArray *)accessibilityScreenContent;
- (void)layoutSubcontrols;
- (BRMediaShelfView *)shelf;
- (void)setCustomLogoControl:(BRControl *)arg0;
- (BRControl *)customLogoControl;
- (NSString *)preferredActionForKey:(NSString *)arg0;
- (char)accessibilityElementIsHidden;
- (void)dealloc;
- (BRTopShelfView *)init;
- (int)state;
- (void)setState:(int)arg0;
- (BRMainMenuShelfErrorControl *)error;

@end
