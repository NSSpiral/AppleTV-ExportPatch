/* Runtime dump - WKOptionPickerCell
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKOptionPickerCell : UIPickerContentView
{
    char _disabled;
}

@property (nonatomic) char disabled;

- (WKOptionPickerCell *)init;
- (char)disabled;
- (void)setDisabled:(char)arg0;
- (char)_isSelectable;
- (WKOptionPickerCell *)initWithOptionItem:(struct OptionItem *)arg0;

@end
