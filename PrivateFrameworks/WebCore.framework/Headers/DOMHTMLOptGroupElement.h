/* Runtime dump - DOMHTMLOptGroupElement
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLOptGroupElement : DOMHTMLElement

@property char disabled;
@property (copy) NSString * label;

- (NSString *)itemTitle;
- (NSObject *)createSelectedItem;
- (NSObject *)createPickerCell;
- (void)populateCell:(NSObject *)arg0;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (char)disabled;
- (void)setDisabled:(char)arg0;

@end
