/* Runtime dump - ATVPhotoBrowserView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRCursorControl, BRGridView, BRPhotoBrowserBannerButton, BRPhotoBrowserHeaderControl, BRScrollControl;
@interface ATVPhotoBrowserView : BRControl
{
    BRPhotoBrowserHeaderControl * headerView;
    BRPhotoBrowserBannerButton * slideshowButton;
    BRGridView * gridView;
    BRScrollControl * _scrollControl;
    BRCursorControl * _cursorControl;
    int _style;
}

@property (nonatomic) int style;
@property (readonly, nonatomic) BRPhotoBrowserHeaderControl * headerView;
@property (readonly, nonatomic) BRPhotoBrowserBannerButton * slideshowButton;
@property (readonly, nonatomic) BRGridView * gridView;
@property (retain, nonatomic) BRScrollControl * _scrollControl;
@property (retain, nonatomic) BRCursorControl * _cursorControl;

+ (ATVPhotoBrowserView *)photoBrowserViewWithStyle:(int)arg0;

- (void)layoutSubcontrols;
- (BRScrollControl *)_scrollControl;
- (BRCursorControl *)_cursorControl;
- (BRPhotoBrowserBannerButton *)slideshowButton;
- (void)focusControlAtIndex:(long)arg0;
- (NSString *)_iconWithName:(NSString *)arg0;
- (ATVPhotoBrowserView *)initWithPhotoBrowserViewStyle:(int)arg0;
- (void)set_scrollControl:(BRScrollControl *)arg0;
- (void)set_cursorControl:(BRCursorControl *)arg0;
- (void)_setupControls;
- (char)_isFacesView;
- (void)dealloc;
- (int)style;
- (void)setStyle:(int)arg0;
- (BRPhotoBrowserHeaderControl *)headerView;
- (BRGridView *)gridView;

@end
