/* Runtime dump - CPTableMaker
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPTableMaker : NSObject
{
    CPZone * tableZone;
    CPTable * table;
    unsigned int cellIndex;
    struct ? * rowYIntervals;
    struct ? * columnXIntervals;
}

+ (void)makeTablesInPage:(id)arg0;
+ (void)makeTablesInZone:(NSObject *)arg0;
+ (char)isTable:(GKTable *)arg0;
+ (void)makeTableFrom:(NSObject *)arg0;

- (void)dealloc;
- (CPTableMaker *)initWithZone:(NSObject *)arg0;
- (NSObject *)newBackgroundGraphicArrayFromRectangularZone:(NSObject *)arg0;
- (NSObject *)newTableCellFromZone:(NSObject *)arg0;
- (void)determineRowsAndColumns:(char)arg0;
- (void)makeTable;

@end
