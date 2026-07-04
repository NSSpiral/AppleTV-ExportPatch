/* Runtime dump - ATVFeedTextTableDataSet
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVFeedTextTableDataSet : NSObject
{
    NSMutableArray * _rows;
    NSArray * _headerLabels;
}

@property (retain) NSArray * headerLabels;
@property (readonly) NSArray * rows;

- (NSArray *)headerLabels;
- (void)setHeaderLabels:(NSArray *)arg0;
- (void)dealloc;
- (ATVFeedTextTableDataSet *)init;
- (NSArray *)rows;
- (void)addRow:(id)arg0;

@end
