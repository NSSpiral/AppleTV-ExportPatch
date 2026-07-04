/* Runtime dump - OADTableCell
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTableCell : NSObject
{
    OADTextBody * mTextBody;
    OADTableCellProperties * mProperties;
    int mRowSpan;
    int mGridSpan;
    char mHorzMerge;
    char mVertMerge;
    int mTopRow;
    int mLeftColumn;
}

- (void)dealloc;
- (OADTableCell *)init;
- (void)setProperties:(NSDictionary *)arg0;
- (NSDictionary *)properties;
- (char)merge:(int)arg0;
- (char)horzMerge;
- (char)vertMerge;
- (int)gridSpan;
- (NSObject *)textBody;
- (void)setGridSpan:(int)arg0;
- (void)setHorzMerge:(char)arg0;
- (void)setVertMerge:(char)arg0;
- (void)setTextBody:(NSObject *)arg0;
- (int)spanAlongDir:(int)arg0;
- (int)topRow;
- (void)setTopRow:(int)arg0;
- (int)leftColumn;
- (void)setLeftColumn:(int)arg0;
- (int)rowSpan;
- (void)setRowSpan:(int)arg0;

@end
