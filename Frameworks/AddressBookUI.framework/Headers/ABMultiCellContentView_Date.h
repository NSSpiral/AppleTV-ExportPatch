/* Runtime dump - ABMultiCellContentView_Date
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMultiCellContentView_Date : ABMultiCellContentView <ABDateFieldDelegate>
{
    ABDateField * _dateField;
}

@property (readonly, nonatomic) NSDate * date;

+ (struct CGSize)layoutSubviewsForView:(NSObject *)arg0 usingSize:(struct CGSize)arg1 propertyGroup:(ABAbstractPropertyGroup *)arg2 info:(NSDictionary *)arg3 styleProvider:(NSObject *)arg4 whenEditing:(char)arg5;

- (void)reloadFromModel;
- (void)setAbCellStyle:(int)arg0;
- (char)dateFieldShouldClear:(id)arg0;
- (void)dateFieldDateDidChange:(NSDictionary *)arg0;
- (char)dateFieldShouldBeginEditing:(id)arg0;
- (void)dateFieldDidBeginEditing:(id)arg0;
- (char)dateFieldShouldEndEditing:(id)arg0;
- (void)dateFieldDidEndEditing:(id)arg0;
- (void)updateSubviewsForNewStateAnimated:(char)arg0;
- (NSObject *)viewForFirstResponder;
- (NSArray *)hitTestForTouches:(NSArray *)arg0 withEvent:(Event *)arg1;
- (void)setUpdateDelegate:(<ABMultiCellContentViewUpdateDelegate> *)arg0;
- (char)dateFieldShouldReturn:(id)arg0;
- (void)dealloc;
- (void)reload;
- (NSDate *)date;

@end
