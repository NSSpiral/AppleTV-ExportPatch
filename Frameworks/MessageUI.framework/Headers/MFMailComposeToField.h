/* Runtime dump - MFMailComposeToField
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeToField : MFMailComposeRecipientView
{
    MFComposeSMIMELockButton * _smimeButton;
    char _smimeButtonVisible;
    <MFMailComposeToFieldDelegate> * _toFieldDelegate;
}

@property (nonatomic) <MFMailComposeToFieldDelegate> * toFieldDelegate;
@property (readonly, nonatomic) MFComposeSMIMELockButton * SMIMEButton;
@property (nonatomic) char smimeButtonVisible;

- (void)setToFieldDelegate:(<MFMailComposeToFieldDelegate> *)arg0;
- (<MFMailComposeToFieldDelegate> *)toFieldDelegate;
- (MFComposeSMIMELockButton *)SMIMEButton;
- (id)_textContainerExclusionPathsWithAddButton:(char)arg0;
- (void)_tappedSMIMEButton:(id)arg0;
- (char)smimeButtonVisible;
- (void)_setSMIMEButtonVisible:(char)arg0 animated:(char)arg1;
- (void)setSmimeButtonVisible:(char)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setExpanded:(char)arg0;

@end
