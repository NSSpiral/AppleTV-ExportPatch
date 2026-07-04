/* Runtime dump - AXHearingProgramCell
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHearingProgramCell : PSTableCell
{
    UIImageView * _checkedView;
}

- (void)dealloc;
- (void)layoutSubviews;
- (void)setChecked:(char)arg0;
- (AXHearingProgramCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1 specifier:(PSSpecifier *)arg2;

@end
