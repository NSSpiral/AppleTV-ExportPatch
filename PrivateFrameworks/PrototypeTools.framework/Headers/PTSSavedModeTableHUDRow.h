/* Runtime dump - PTSSavedModeTableHUDRow
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSSavedModeTableHUDRow : PTSHUDRow
{
    PTSSavedModeTableViewController * _tableViewController;
}

@property (retain, nonatomic) PTSSavedModeTableViewController * tableViewController;

+ (PTSChoiceRow *)row;

- (PTSSavedModeTableViewController *)tableViewController;
- (void)setTableViewController:(PTSSavedModeTableViewController *)arg0;
- (PTSSavedModeTableHUDRow *)init;
- (void).cxx_destruct;

@end
