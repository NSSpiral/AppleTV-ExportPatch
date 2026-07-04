/* Runtime dump - TSTCellBorder
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellBorder : NSObject <TSTCellDiffing, TSSPropertyCommandSerializing, NSCopying>
{
    TSDStroke * _topStroke;
    int _topStrokeOrder;
    TSDStroke * _rightStroke;
    int _rightStrokeOrder;
    TSDStroke * _bottomStroke;
    int _bottomStrokeOrder;
    TSDStroke * _leftStroke;
    int _leftStrokeOrder;
    char _definedTopStroke;
    char _definedTopStrokeOrder;
    char _definedRightStroke;
    char _definedRightStrokeOrder;
    char _definedBottomStroke;
    char _definedBottomStrokeOrder;
    char _definedLeftStroke;
    char _definedLeftStrokeOrder;
}

@property (readonly, retain, nonatomic) TSDStroke * topStroke;
@property (readonly, nonatomic) int topStrokeOrder;
@property (readonly, retain, nonatomic) TSDStroke * leftStroke;
@property (readonly, nonatomic) int leftStrokeOrder;
@property (readonly, retain, nonatomic) TSDStroke * bottomStroke;
@property (readonly, nonatomic) int bottomStrokeOrder;
@property (readonly, retain, nonatomic) TSDStroke * rightStroke;
@property (readonly, nonatomic) int rightStrokeOrder;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) char definedTopStroke;
@property (readonly, nonatomic) char definedLeftStroke;
@property (readonly, nonatomic) char definedBottomStroke;
@property (readonly, nonatomic) char definedRightStroke;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (TSTCellBorder *)cellBorder;
+ (NSDictionary *)cellDiffProperties;
+ (TSTCellBorder *)cellBorderForResettingAllStrokes;

- (void)didInitFromSOS;
- (TSTCellBorder *)initFromPropertyCommandMessage:(struct Message *)arg0 unarchiver:(struct Message)arg1;
- (void)saveToPropertyCommandMessage:(struct Message *)arg0 archiver:(NSObject *)arg1;
- (int)topStrokeOrder;
- (void)setTopStroke:(TSDStroke *)arg0 order:(int)arg1;
- (int)leftStrokeOrder;
- (void)setLeftStroke:(TSDStroke *)arg0 order:(int)arg1;
- (int)bottomStrokeOrder;
- (void)setBottomStroke:(TSDStroke *)arg0 order:(int)arg1;
- (int)rightStrokeOrder;
- (void)setRightStroke:(TSDStroke *)arg0 order:(int)arg1;
- (TSTCellBorder *)initFromMessage:(struct CellBorderArchive *)arg0 unarchiver:(struct CellBorderArchive)arg1;
- (void)saveToMessage:(struct CellBorderArchive *)arg0 archiver:(NSObject *)arg1;
- (NSObject *)objectByRemovingPropertiesInMap:(NSObject *)arg0 addingPropertiesInMap:(NSObject *)arg1 updateInverseResetPropertyMap:(NSObject *)arg2 updateInverseSetPropertyMap:(NSObject *)arg3;
- (void)applyToCell:(NSObject *)arg0;
- (void)_clearTopStroke;
- (void)_clearLeftStroke;
- (void)_clearBottomStroke;
- (void)_clearRightStroke;
- (char)definedTopStroke;
- (char)definedLeftStroke;
- (char)definedBottomStroke;
- (char)definedRightStroke;
- (void)dealloc;
- (TSTCellBorder *)copyWithZone:(struct _NSZone *)arg0;
- (char)isEmpty;
- (TSDStroke *)topStroke;
- (TSDStroke *)bottomStroke;
- (TSDStroke *)leftStroke;
- (TSDStroke *)rightStroke;

@end
