/* Runtime dump - BRMessagePopupOptionContentControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BREvent, BRTextControl;
@interface BRMessagePopupOptionContentControl : BRControl
{
    BRTextControl * _titleTextControl;
    BRTextControl * _primaryTextControl;
    BRTextControl * _secondaryTextControl;
    NSMutableArray * _buttons;
    double _activationTime;
    NSString * _title;
    NSString * _primaryText;
    NSString * _secondaryText;
    NSArray * _buttonTitles;
    unsigned int _selectedButtonIndex;
    unsigned int _cancelIndex;
    id _actionHandler;
    double _minimumDisplayTimeInterval;
}

@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * primaryText;
@property (copy, nonatomic) NSString * secondaryText;
@property (copy, nonatomic) NSArray * buttonTitles;
@property (nonatomic) unsigned int selectedButtonIndex;
@property (nonatomic) unsigned int cancelIndex;
@property (nonatomic) double minimumDisplayTimeInterval;
@property (copy, nonatomic) id actionHandler;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)controlWasActivated;
- (NSArray *)accessibilityControls;
- (void)setCancelIndex:(unsigned int)arg0;
- (void)setPrimaryText:(NSString *)arg0;
- (void)setMinimumDisplayTimeInterval:(double)arg0;
- (void)setActionHandler:(id /* block */)arg0;
- (double)minimumDisplayTimeInterval;
- (void)_moveButtonSelectionUp:(char)arg0;
- (void)_moveButtonSelectionDown:(char)arg0;
- (id /* block */)actionHandler;
- (unsigned int)cancelIndex;
- (NSObject *)_computeFramesForSize:(struct CGSize)arg0;
- (void)_playSoundForIndexBeforeMove:(unsigned int)arg0;
- (NSString *)primaryText;
- (BRMessagePopupOptionContentControl *)init;
- (void)setTitle:(NSString *)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)title;
- (NSString *)accessibilityLabel;
- (NSArray *)buttonTitles;
- (void)setButtonTitles:(NSArray *)arg0;
- (void).cxx_destruct;
- (NSString *)secondaryText;
- (void)setSecondaryText:(NSString *)arg0;
- (unsigned int)selectedButtonIndex;
- (void)setSelectedButtonIndex:(unsigned int)arg0;

@end
