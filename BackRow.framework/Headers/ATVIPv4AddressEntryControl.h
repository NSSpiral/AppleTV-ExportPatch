/* Runtime dump - ATVIPv4AddressEntryControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol BRTextField;

@class ATVIPv4AddressSelectionControl, BREvent, BRTextControl;
@interface ATVIPv4AddressEntryControl : BRControl <BRTextField>
{
    ATVIPv4AddressSelectionControl * _addressPicker;
    BRTextControl * _labelLayer;
    struct CGSize _addressPickerSize;
    float _labelPadding;
    <BRTextFieldDelegate> * _textFieldDelegate;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)brEventAction:(BREvent *)arg0;
- (NSArray *)accessibilityTraitsList;
- (struct CGSize)preferredSizeFromScreenSize:(struct CGSize)arg0;
- (void)setInitialAddress:(NSString *)arg0;
- (void)_layoutUI;
- (void)_handlePlayPauseButton:(id)arg0;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (ATVIPv4AddressEntryControl *)init;
- (void)setFrame:(struct CGRect)arg0;
- (void)reset;
- (NSString *)accessibilityLabel;
- (void)setLabel:(NSString *)arg0;
- (void)setString:(NSString *)arg0;
- (NSString *)stringValue;
- (char)isAccessibilityElement;

@end
