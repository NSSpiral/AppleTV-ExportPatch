/* Runtime dump - ABChameleonCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABChameleonCell : UITableViewCell
{
    int _abCellStyle;
    <ABStyleProvider> * _styleProvider;
    char _hasConfiguredBackgroundViews;
}

@property (nonatomic) int abCellStyle;
@property (retain, nonatomic) <ABStyleProvider> * styleProvider;

- (<ABStyleProvider> *)styleProvider;
- (void)setStyleProvider:(<ABStyleProvider> *)arg0;
- (void)setAbCellStyle:(int)arg0;
- (int)abCellStyle;
- (void)_updateBackgroundViewsForCellStyleAndLocation;
- (void)_updateTextStylesForCellStyle;
- (void)dealloc;
- (void)setSectionLocation:(int)arg0 animated:(char)arg1;

@end
