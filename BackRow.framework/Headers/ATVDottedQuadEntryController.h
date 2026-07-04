/* Runtime dump - ATVDottedQuadEntryController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@protocol BRTextFieldDelegate;

@class ATVIPv4AddressEntryControl, BRHeaderControl, BRTextControl;
@interface ATVDottedQuadEntryController : BRController <BRTextFieldDelegate>
{
    <ATVDottedQuadEntryDelegate> * _delegate;
    ATVIPv4AddressEntryControl * _editor;
    BRTextControl * _prompt;
    BRHeaderControl * _header;
    NSString * _dottedQuad;
}

- (void)textDidEndEditing:(id /* <BRTextField> */)arg0;
- (void)setIcon:(UIImage *)arg0 horizontalOffset:(float)arg1 kerningFactor:(float)arg2;
- (ATVDottedQuadEntryController *)initWithTitle:(NSString *)arg0 prompt:(BRTextControl *)arg1 label:(NSString *)arg2 notifying:(id)arg3;
- (NSString *)dottedQuad;
- (void)setDottedQuad:(NSString *)arg0;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (NSString *)accessibilityLabel;
- (void)textDidChange:(id /* <BRTextField> */)arg0;

@end
