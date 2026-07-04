/* Runtime dump - UIPickerColumnView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPickerColumnView : UIView <UIPickerTableViewContainerDelegate, UITableViewDataSource>
{
    UIPickerTableView * _topTable;
    UIPickerTableView * _middleTable;
    UIPickerTableView * _bottomTable;
    UIView * _topContainerView;
    UIView * _middleContainerView;
    UIView * _bottomContainerView;
    float _middleBarHeight;
    float _rowHeight;
    UIPickerView * _pickerView;
    struct CGRect _tableFrame;
    struct CATransform3D _perspectiveTransform;
    UIColor * __textColor;
    float _leftHitTestExtension;
    float _rightHitTestExtension;
}

@property (nonatomic) struct CGRect selectionBarRect;
@property (readonly, nonatomic) int selectionBarRow;
@property (retain, nonatomic) UIColor * _textColor;
@property (nonatomic) float rowHeight;
@property (nonatomic) struct CATransform3D perspectiveTransform;
@property (nonatomic) float leftHitTestExtension;
@property (nonatomic) float rightHitTestExtension;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (id)_allVisibleCells;
- (char)_pointLiesWithinEffectiveTableBounds:(struct CGPoint)arg0;
- (NSObject *)_visibleCellClosestToPoint:(struct CGPoint)arg0 inView:(struct CGSize)arg1;
- (id)_preferredTable;
- (void)reloadData;
- (UIPickerColumnView *)initWithFrame:(struct CGRect)arg0 tableFrame:(struct CGSize)arg1 middleBarHeight:(float)arg2 rowHeight:(struct CGRect)arg3 pickerView:(struct CGSize)arg4 transform:(NSObject *)arg5;
- (void)_setTextColor:(UIColor *)arg0;
- (void)setRowHeight:(float)arg0;
- (int)numberOfRowsInSection:(int)arg0;
- (NSString *)cellForRowAtIndexPath:(NSIndexPath *)arg0;
- (int)selectionBarRow;
- (void)clearDataSourceAndDelegate;
- (void)setAllowsMultipleSelection:(char)arg0;
- (struct CGRect)_tableFrame;
- (void)setLeftHitTestExtension:(float)arg0;
- (void)setRightHitTestExtension:(float)arg0;
- (float)rowHeight;
- (void)setSelectionBarRect:(struct CGRect)arg0;
- (char)selectRow:(int)arg0 animated:(char)arg1 notify:(char)arg2;
- (struct _NSRange)_visibleGlobalRows;
- (char)_containsTable:(id)arg0;
- (char)isRowChecked:(int)arg0;
- (UIColor *)_textColor;
- (void)_sendCheckedRow:(int)arg0 inTableView:(NSObject *)arg1 checked:(char)arg2;
- (char)_soundsEnabled;
- (char)_usesCheckSelection;
- (void)_pickerTableViewDidChangeContentOffset:(NSSet *)arg0;
- (void)pickerTableView:(NSObject *)arg0 didChangeSelectionBarRowFrom:(int)arg1 to:(int)arg2;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)beginUpdates;
- (void)endUpdates;
- (char)_scrollRowAtIndexPathToSelectionBar:(id)arg0 animated:(char)arg1;
- (struct CGRect)selectionBarRect;
- (NSObject *)_createContainerViewWithFrame:(struct CGRect)arg0;
- (NSObject *)_createTableViewWithFrame:(struct CGRect)arg0 containingFrame:(struct CGSize)arg1;
- (void)_centerTableInContainer:(NSObject *)arg0;
- (float)_horizontalBiasForEndTables;
- (struct CATransform3D)_transformForTableWithPerspectiveTranslationX:(float)arg0;
- (struct CATransform3D)_transformForTableWithTranslationX:(float)arg0;
- (void)_moveTableViewIfNecessary:(id)arg0 toContentOffset:(struct CGPoint)arg1;
- (struct CATransform3D)perspectiveTransform;
- (void)setPerspectiveTransform:(struct CATransform3D)arg0;
- (float)leftHitTestExtension;
- (float)rightHitTestExtension;

@end
