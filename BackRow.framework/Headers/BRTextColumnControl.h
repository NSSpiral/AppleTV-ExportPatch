/* Runtime dump - BRTextColumnControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRTextControl;
@interface BRTextColumnControl : BRControl
{
    NSArray * _stackedTextControls;
    struct ? _columnTitleSpacing;
    struct ? _controlSpacing;
    BRTextControl * _titleControl;
}

@property (retain, nonatomic) NSAttributedString * columnTitle;
@property (retain, nonatomic) NSArray * stackedTextControls;
@property (nonatomic) struct ? columnTitleSpacing;
@property (nonatomic) struct ? controlSpacing;
@property (retain, nonatomic) BRTextControl * titleControl;

- (void)layoutSubcontrols;
- (BRTextControl *)titleControl;
- (void)setTitleControl:(BRTextControl *)arg0;
- (void)setColumnTitle:(NSAttributedString *)arg0;
- (void)setStackedTextControls:(NSArray *)arg0;
- (NSArray *)stackedTextControls;
- (struct ?)controlSpacing;
- (struct ?)columnTitleSpacing;
- (NSAttributedString *)columnTitle;
- (void)setColumnTitleSpacing:(struct ?)arg0;
- (void)setControlSpacing:(struct ?)arg0;
- (BRTextColumnControl *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void).cxx_destruct;

@end
