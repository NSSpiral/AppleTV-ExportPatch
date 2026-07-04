/* Runtime dump - BRTableView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface BRTableView : BRControl
{
    id _dataSource;
    id _delegate;
    char _showingHeader;
    NSArray * _rows;
    NSMutableArray * _widthValues;
    char _reloadNeeded;
    char _rowsUseColorBanding;
}

@property (nonatomic) id dataSource;
@property (nonatomic) id delegate;
@property (nonatomic) char rowsUseColorBanding;

- (void)layoutSubcontrols;
- (void)setRowsUseColorBanding:(char)arg0;
- (float)headerYOrigin;
- (void)_createRows;
- (void)_reloadIfNeeded;
- (NSMutableArray *)_widthValues;
- (char)rowsUseColorBanding;
- (void)dealloc;
- (void)setDataSource:(NSObject *)arg0;
- (void)setDelegate:(NSObject *)arg0;
- (BRTableView *)init;
- (void)reload;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSObject *)dataSource;
- (NSObject *)delegate;
- (NSString *)accessibilityLabel;

@end
