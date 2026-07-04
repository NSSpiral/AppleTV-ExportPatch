/* Runtime dump - BRTextFooterControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol BRSelectionHandler;

@class ATVImageHeaderViewButton, BRControl, BRTextControl;
@interface BRTextFooterControl : BRControl <BRSelectionHandler>
{
    NSArray * _columns;
    NSString * _buttonTitle;
    NSString * _customAXLabel;
    ATVImageHeaderViewButton * _scrollButton;
    BRTextControl * _hiddenAXText;
}

@property (retain, nonatomic) NSArray * columns;
@property (copy, nonatomic) NSString * buttonTitle;
@property (copy, nonatomic) NSString * customAXLabel;
@property (retain, nonatomic) ATVImageHeaderViewButton * scrollButton;
@property (retain, nonatomic) BRTextControl * hiddenAXText;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)layoutSubcontrols;
- (NSArray *)accessibilityControls;
- (char)handleSelectionForControl:(BRControl *)arg0;
- (void)setCustomAXLabel:(NSString *)arg0;
- (id)accessibilityNonFocusableElements;
- (ATVImageHeaderViewButton *)scrollButton;
- (float)_percentageWidthOfColumn:(int)arg0;
- (NSString *)customAXLabel;
- (void)setScrollButton:(ATVImageHeaderViewButton *)arg0;
- (BRTextControl *)hiddenAXText;
- (void)setHiddenAXText:(BRTextControl *)arg0;
- (BRTextFooterControl *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (char)isAccessibilityElement;
- (void).cxx_destruct;
- (void)setButtonTitle:(NSString *)arg0;
- (NSString *)buttonTitle;
- (NSArray *)columns;
- (void)setColumns:(NSArray *)arg0;

@end
