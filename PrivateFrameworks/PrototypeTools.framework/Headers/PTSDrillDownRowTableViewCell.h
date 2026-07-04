/* Runtime dump - PTSDrillDownRowTableViewCell
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSDrillDownRowTableViewCell : PTSRowTableViewCell
{
    UIButton * _actionButton;
}

- (void)layoutSubviews;
- (PTSDrillDownRowTableViewCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void).cxx_destruct;
- (void)updateCellCharacteristics;
- (void)_createActionButton;
- (void)_destroyActionButton;
- (void)_actionPress;

@end
