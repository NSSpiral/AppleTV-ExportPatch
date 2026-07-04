/* Runtime dump - BRPhotoBrowserHeaderControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRContextMenuControl, BRHorizontalDividerControl, BRImageControl, BRPanelControl, BRTextControl;
@interface BRPhotoBrowserHeaderControl : BRControl
{
    BRTextControl * _titleControl;
    BRTextControl * _rightJustifiedTextControl;
    BRTextControl * _subtitleControl;
    BRImageControl * _icon;
    BRHorizontalDividerControl * _divider;
    NSString * _title;
    long _count;
    char _displaysCount;
    struct ? _iconVerticalOffset;
    char _alwaysDisplaysSubtitle;
    NSArray * _buttons;
    BRContextMenuControl * _moreMenu;
    NSArray * _moreMenuButtons;
    BRPanelControl * _buttonsPanel;
}

@property (copy, nonatomic) NSString * rightJustifiedText;
@property (nonatomic) char alwaysDisplaysSubtitle;
@property (copy, nonatomic) NSArray * buttons;
@property (retain, nonatomic) BRContextMenuControl * moreMenu;
@property (retain, nonatomic) NSArray * moreMenuButtons;
@property (retain, nonatomic) BRPanelControl * buttonsPanel;

- (void)layoutSubcontrols;
- (NSString *)rightJustifiedText;
- (void)setRightJustifiedText:(NSString *)arg0;
- (NSArray *)accessibilityControls;
- (void)setDisplaysCount:(char)arg0;
- (void)setButtonsPanel:(BRPanelControl *)arg0;
- (char)displaysCount;
- (struct ?)iconVerticalOffset;
- (void)setAlwaysDisplaysSubtitle:(char)arg0;
- (BRPanelControl *)buttonsPanel;
- (BRContextMenuControl *)moreMenu;
- (void)setMoreMenu:(BRContextMenuControl *)arg0;
- (void)setMoreMenuButtons:(NSArray *)arg0;
- (void)_handleMoreButton:(id)arg0;
- (char)alwaysDisplaysSubtitle;
- (NSArray *)moreMenuButtons;
- (void)_moreMenuItemSelected:(id)arg0;
- (NSString *)photoBrowserHeader;
- (BRImageControl *)icon;
- (void)dealloc;
- (long)count;
- (BRPhotoBrowserHeaderControl *)init;
- (void)setTitle:(NSString *)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)title;
- (NSString *)accessibilityLabel;
- (void)setCount:(long)arg0;
- (NSString *)subtitle;
- (void)setIcon:(BRImageControl *)arg0;
- (void)setSubtitle:(NSString *)arg0;
- (NSArray *)buttons;
- (void)setButtons:(NSArray *)arg0;
- (void)setIconVerticalOffset:(struct ?)arg0;

@end
