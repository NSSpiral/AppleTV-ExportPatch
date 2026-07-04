/* Runtime dump - BRScrollingTextBoxControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BREvent, BRListControl, BRVerticalScrollBarControl;
@interface BRScrollingTextBoxControl : BRControl
{
    BRListControl * _list;
    NSAttributedString * _text;
    BRVerticalScrollBarControl * _scrollBar;
    float _textHeightFactor;
    long _upperFocusLimit;
    long _lowerFocusLimit;
}

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)_listSelectionChanged:(NSNotification *)arg0;
- (void)_providerCountChanged:(NSNotification *)arg0;
- (void)_calculateFocusLimitsWithTextBoxSize:(struct CGSize)arg0;
- (void)_forceSelectionToFocusLimit;
- (void)setTextHeightFactor:(float)arg0;
- (float)textHeightFactor;
- (void)dealloc;
- (BRScrollingTextBoxControl *)init;
- (NSAttributedString *)text;
- (void)setText:(NSAttributedString *)arg0;
- (NSString *)accessibilityLabel;

@end
