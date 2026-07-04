/* Runtime dump - ATVItemDetailWithImageHeaderView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVItemDetailWithImageHeaderBottomPart, ATVItemDetailWithImageHeaderTopPart, BRCursorControl;
@interface ATVItemDetailWithImageHeaderView : BRControl
{
    ATVItemDetailWithImageHeaderTopPart * _topPart;
    ATVItemDetailWithImageHeaderBottomPart * _bottomPart;
    BRCursorControl * _cursor;
}

@property (nonatomic) int layoutStyle;
@property (nonatomic) int displayMode;
@property (nonatomic) int mainImageStyle;
@property (nonatomic) int posterAlignment;
@property (readonly, retain, nonatomic) ATVItemDetailWithImageHeaderTopPart * topPart;
@property (readonly, retain, nonatomic) ATVItemDetailWithImageHeaderBottomPart * bottomPart;
@property (retain, nonatomic) BRCursorControl * cursor;

- (NSArray *)accessibilityScreenContent;
- (void)layoutSubcontrols;
- (void)setMainImageStyle:(int)arg0;
- (int)layoutStyle;
- (void)setLayoutStyle:(int)arg0;
- (int)posterAlignment;
- (void)setPosterAlignment:(int)arg0;
- (ATVItemDetailWithImageHeaderTopPart *)topPart;
- (ATVItemDetailWithImageHeaderBottomPart *)bottomPart;
- (int)mainImageStyle;
- (ATVItemDetailWithImageHeaderView *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)accessibilityLabel;
- (BRCursorControl *)cursor;
- (void)setCursor:(BRCursorControl *)arg0;
- (int)displayMode;
- (void).cxx_destruct;
- (void)setDisplayMode:(int)arg0;

@end
