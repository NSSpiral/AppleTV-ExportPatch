/* Runtime dump - TSTStrokeSidecar
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeSidecar : TSPObject <TSTCustomStrokeProviding>
{
    int _maxOrder;
    NSPointerArray * _leftColumnStrokes;
    NSPointerArray * _rightColumnStrokes;
    NSPointerArray * _topRowStrokes;
    NSPointerArray * _bottomRowStrokes;
}

@property (nonatomic) int maxOrder;
@property (retain, nonatomic) NSPointerArray * leftColumnStrokes;
@property (retain, nonatomic) NSPointerArray * rightColumnStrokes;
@property (retain, nonatomic) NSPointerArray * topRowStrokes;
@property (retain, nonatomic) NSPointerArray * bottomRowStrokes;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TSTStrokeSidecar *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (TSTStrokeSidecar *)initForUpgradeWithTableModel:(TSTTableModel *)arg0;
- (void)setCellBorder:(TSTCellBorder *)arg0 atCellID:(struct ?)arg1;
- (void)flattenStrokeOrder;
- (NSObject *)cellBorderAtCellID:(struct ?)arg0;
- (void)setBordersWithCellMap:(TSTCellMap *)arg0;
- (void)insertRows:(struct _NSRange)arg0;
- (void)insertColumns:(struct _NSRange)arg0;
- (void)removeRows:(struct _NSRange)arg0;
- (void)removeColumns:(struct _NSRange)arg0;
- (void)moveRowIndexRange:(struct _NSRange)arg0 toIndex:(unsigned short)arg1;
- (void)moveColumnIndexRange:(struct _NSRange)arg0 toIndex:(unsigned char)arg1;
- (void)swapRowAtIndex:(unsigned short)arg0 withRowAtIndex:(unsigned short)arg1;
- (int)maxOrder;
- (void)setStroke:(TSDStroke *)arg0 forTopOfRow:(unsigned short)arg1 order:(int)arg2 columnRange:(struct TSTSimpleRange)arg3;
- (void)setStroke:(TSDStroke *)arg0 forBottomOfRow:(unsigned short)arg1 order:(int)arg2 columnRange:(struct TSTSimpleRange)arg3;
- (void)setStroke:(TSDStroke *)arg0 forLeftOfColumn:(unsigned char)arg1 order:(int)arg2 rowRange:(struct TSTSimpleRange)arg3;
- (void)setStroke:(TSDStroke *)arg0 forRightOfColumn:(unsigned char)arg1 order:(int)arg2 rowRange:(struct TSTSimpleRange)arg3;
- (id)strokeLayerForLeftSideOfColumn:(unsigned char)arg0;
- (id)strokeLayerForRightSideOfColumn:(unsigned char)arg0;
- (id)strokeLayerForTopOfRow:(unsigned short)arg0;
- (id)strokeLayerForBottomOfRow:(unsigned short)arg0;
- (NSPointerArray *)leftColumnStrokes;
- (NSPointerArray *)rightColumnStrokes;
- (NSPointerArray *)topRowStrokes;
- (NSPointerArray *)bottomRowStrokes;
- (void)setLeftStroke:(TSDStroke *)arg0 order:(int)arg1 atCellID:(struct ?)arg2;
- (void)setRightStroke:(TSDStroke *)arg0 order:(int)arg1 atCellID:(struct ?)arg2;
- (void)setTopStroke:(TSDStroke *)arg0 order:(int)arg1 atCellID:(struct ?)arg2;
- (void)setBottomStroke:(TSDStroke *)arg0 order:(int)arg1 atCellID:(struct ?)arg2;
- (void)setMaxOrder:(int)arg0;
- (CALayer *)p_flattenMajorStrokeLayer:(id)arg0 minorStrokeLayer:(TSTStrokeLayer *)arg1;
- (void)setLeftColumnStrokes:(NSPointerArray *)arg0;
- (void)setRightColumnStrokes:(NSPointerArray *)arg0;
- (void)setTopRowStrokes:(NSPointerArray *)arg0;
- (void)setBottomRowStrokes:(NSPointerArray *)arg0;

@end
