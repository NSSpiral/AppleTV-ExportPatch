/* Runtime dump - ABPersonCellLayoutManager
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonCellLayoutManager : UITableViewCellLayoutManager
{
    <ABPersonCellLayoutManagerDelegate> * _delegate;
    <ABStyleProvider> * _styleProvider;
}

@property (nonatomic) <ABPersonCellLayoutManagerDelegate> * delegate;
@property (retain, nonatomic) <ABStyleProvider> * styleProvider;

- (<ABStyleProvider> *)styleProvider;
- (void)setStyleProvider:(<ABStyleProvider> *)arg0;
- (float)deleteConfirmationWidth;
- (float)accessoryViewInsetForBounds:(struct CGRect)arg0;
- (NSObject *)cellAsMultiCell:(NSObject *)arg0;
- (float)widthForCellContentViewInTableView:(NSObject *)arg0 whenEditing:(char)arg1 isShowingDeleteConfirmation:(char)arg2 accessoryViewBounds:(struct CGRect)arg3;
- (void)dealloc;
- (void)setDelegate:(<ABPersonCellLayoutManagerDelegate> *)arg0;
- (<ABPersonCellLayoutManagerDelegate> *)delegate;
- (struct CGRect)backgroundEndingRectForCell:(NSObject *)arg0 forNewEditingState:(SEL)arg1;
- (struct CGRect)contentEndingRectForCell:(NSObject *)arg0 forNewEditingState:(SEL)arg1;
- (void)cell:(NSObject *)arg0 willTransitionToState:(unsigned int)arg1;
- (void)cell:(NSObject *)arg0 didTransitionToState:(unsigned int)arg1;
- (struct CGRect)backgroundStartingRectForCell:(NSObject *)arg0 forNewEditingState:(SEL)arg1;
- (struct CGRect)deleteConfirmationRectForCell:(NSObject *)arg0;
- (struct CGRect)contentStartingRectForCell:(NSObject *)arg0 forNewEditingState:(SEL)arg1;

@end
