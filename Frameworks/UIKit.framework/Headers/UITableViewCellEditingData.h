/* Runtime dump - UITableViewCellEditingData
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellEditingData : NSObject
{
    UITableViewCell * _cell;
    int _editingStyle;
    UITableViewCellEditControl * _editControl;
    UITableViewCellReorderControl * _reorderControl;
    UITableViewCellDeleteConfirmationControl_Legacy * _deleteConfirmationControl;
    UIView * _reorderSeparatorView;
}

@property (readonly, nonatomic) char dataRequired;

- (void)dealloc;
- (id)editControl:(char)arg0;
- (id)deleteConfirmationControl:(char)arg0;
- (UITableViewCellEditingData *)initWithTableViewCell:(NSObject *)arg0 editingStyle:(int)arg1;
- (id)reorderControl:(char)arg0;
- (NSObject *)reorderSeparatorView:(char)arg0;
- (char)isDataRequired;

@end
