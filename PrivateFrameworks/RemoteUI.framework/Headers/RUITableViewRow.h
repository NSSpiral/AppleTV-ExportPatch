/* Runtime dump - RUITableViewRow
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUITableViewRow : RUIElement <UIPickerViewDelegate, UITextFieldDelegate>
{
    RemoteUITableViewCell * _tableCell;
    NSMutableArray * _selectOptions;
    int _selectedRow;
    NSDate * _date;
    NSDate * _dateMax;
    NSDate * _dateMin;
    UISwitch * _switchControl;
    char _switchValue;
    char _rowInvalid;
    NSDictionary * _deleteAction;
    NSData * _data;
    RUIWebContainerView * _webContainerView;
    float _cachedHeight;
    char _configured;
    char _selected;
    <RUITableViewRowDelegate> * _delegate;
    int _datePickerMode;
    UIView * _pickerView;
    float _height;
    <RUITextFieldChangeObserver> * _textFieldChangeObserver;
}

@property (weak, nonatomic) <RUITableViewRowDelegate> * delegate;
@property (nonatomic) char rowInvalid;
@property (retain, nonatomic) NSDictionary * deleteAction;
@property (retain, nonatomic) NSData * data;
@property (readonly, nonatomic) int selectedRow;
@property (retain, nonatomic) NSDate * date;
@property (retain, nonatomic) NSDate * dateMin;
@property (retain, nonatomic) NSDate * dateMax;
@property (readonly, nonatomic) int datePickerMode;
@property (retain, nonatomic) UIView * pickerView;
@property (nonatomic) float height;
@property (nonatomic) char configured;
@property (nonatomic) char selected;
@property (readonly, nonatomic) UIControl * control;
@property (weak, nonatomic) <RUITextFieldChangeObserver> * textFieldChangeObserver;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;
+ (void)resetLocale;
+ (NSDate *)_formatterForDateYMD;
+ (RUITableViewRow *)_formatterForMonthAndDay;
+ (RUITableViewRow *)_formatterForYearAndMonth;
+ (NSDate *)_formatterForShortDate;
+ (NSDate *)_timeZoneAdjustedDateFromDate:(NSDate *)arg0;

- (UIView *)pickerView;
- (NSURL *)sourceURL;
- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (void)setPickerView:(UIView *)arg0;
- (void)setDelegate:(<RUITableViewRowDelegate> *)arg0;
- (int)numberOfComponentsInPickerView:(NSObject *)arg0;
- (int)pickerView:(UIView *)arg0 numberOfRowsInComponent:(int)arg1;
- (NSObject *)pickerView:(UIView *)arg0 titleForRow:(int)arg1 forComponent:(int)arg2;
- (void)pickerView:(UIView *)arg0 didSelectRow:(int)arg1 inComponent:(int)arg2;
- (<RUITableViewRowDelegate> *)delegate;
- (NSDate *)date;
- (void)setEnabled:(char)arg0;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (char)isSelected;
- (void)setSelected:(char)arg0;
- (char)textField:(UITextField *)arg0 shouldChangeCharactersInRange:(struct _NSRange)arg1 replacementString:(NSString *)arg2;
- (char)textFieldShouldReturn:(UITextField *)arg0;
- (float)height;
- (void)setDate:(NSDate *)arg0;
- (int)datePickerMode;
- (RemoteUITableViewCell *)tableCell;
- (void).cxx_destruct;
- (void)setHeight:(float)arg0;
- (void)setAttributes:(NSDictionary *)arg0;
- (void)populatePostbackDictionary:(NSDictionary *)arg0;
- (void)setRowInvalid:(char)arg0;
- (NSDictionary *)deleteAction;
- (NSMutableArray *)selectOptions;
- (void)setDeleteAction:(NSDictionary *)arg0;
- (void)_updateContentForDisabledState;
- (UIColor *)radioGroupSelectedColor;
- (NSString *)textColorForAttributeName:(NSString *)arg0;
- (void)accessoryImageLoaded;
- (Class)tableCellClass;
- (int)tableCellStyle;
- (void)_switchFlipped:(id)arg0;
- (void)setDateMin:(NSDate *)arg0;
- (void)setDateMax:(NSDate *)arg0;
- (NSObject *)_datePickerFormatter;
- (void)detailLabelActivatedLinkFromCell:(NSObject *)arg0 completion:(id /* block */)arg1;
- (char)loadAccessoryImage;
- (char)supportsAutomaticSelection;
- (void)_datePickerChanged:(NSNotification *)arg0;
- (float)rowHeightWithMax:(float)arg0 peggedHeight:(float)arg1 tableView:(UITableView *)arg2 indexPath:(NSIndexPath *)arg3;
- (void)clearCachedHeight;
- (char)rowInvalid;
- (int)selectedRow;
- (NSDate *)dateMin;
- (NSDate *)dateMax;
- (char)configured;
- (void)setConfigured:(char)arg0;
- (<RUITextFieldChangeObserver> *)textFieldChangeObserver;
- (void)setTextFieldChangeObserver:(<RUITextFieldChangeObserver> *)arg0;
- (UIControl *)control;

@end
