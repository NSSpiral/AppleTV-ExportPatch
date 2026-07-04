/* Runtime dump - RUIVariableHeightCell
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIVariableHeightCell : RemoteUITableViewCell
{
    char _supportsAccessory;
}

@property (nonatomic) char supportsAccessory;

- (void)layoutSubviews;
- (float)height;
- (float)contentWidth;
- (struct CGSize)textLabelSizeForWidth:(float)arg0;
- (struct CGSize)detailLabelSizeForWidth:(float)arg0;
- (char)supportsAccessory;
- (void)setSupportsAccessory:(char)arg0;

@end
