/* Runtime dump - TSCHChartDataSetNameLayoutItem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartDataSetNameLayoutItem : TSCHChartTitleLayoutItem

@property (readonly, nonatomic) char isAboveChartBody;

- (struct CGSize)calcMinSize;
- (NSString *)titleSelectionPath;
- (unsigned int)titleParagraphStyleIndex;
- (char)isTitleOn;
- (NSObject *)titleTextForModel:(NSObject *)arg0;
- (char)isAboveChartBody;

@end
