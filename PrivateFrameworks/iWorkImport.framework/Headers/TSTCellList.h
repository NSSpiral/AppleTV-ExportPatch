/* Runtime dump - TSTCellList
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellList : TSPObject <NSCopying>
{
    NSPointerArray * _cells;
}

@property (retain, nonatomic) NSPointerArray * cells;

- (void)setCells:(NSPointerArray *)arg0;
- (TSTCellList *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)popLastCell;
- (NSObject *)addCell:(NSObject *)arg0;
- (NSObject *)lastCell;
- (void)dealloc;
- (unsigned int)count;
- (TSTCellList *)copyWithZone:(struct _NSZone *)arg0;
- (TSTCellList *)initWithContext:(TSPObjectContext *)arg0;
- (NSObject *)cellAtIndex:(unsigned int)arg0;
- (NSPointerArray *)cells;

@end
