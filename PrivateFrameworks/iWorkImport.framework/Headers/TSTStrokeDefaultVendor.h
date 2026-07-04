/* Runtime dump - TSTStrokeDefaultVendor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeDefaultVendor : NSObject
{
    char _isValid;
    <TSTTableStrokeProviding> * _strokeProvider;
    TSTMasterLayout * _masterLayout;
    NSPointerArray * _strokeTypeToLayerMap;
    unsigned int _headerSideBorderColumn;
    unsigned int _headerColumnSeparatorColumn;
    unsigned int _bodySideBorderColumn;
    unsigned int _topBorderRow;
    unsigned int _headerRowSeparatorRow;
    unsigned int _footerRowSeparatorRow;
    unsigned int _bottomBorderRow;
}

@property (nonatomic) <TSTTableStrokeProviding> * strokeProvider;
@property (nonatomic) TSTMasterLayout * masterLayout;
@property (nonatomic) char isValid;
@property (retain, nonatomic) NSPointerArray * strokeTypeToLayerMap;
@property (nonatomic) unsigned int headerSideBorderColumn;
@property (nonatomic) unsigned int headerColumnSeparatorColumn;
@property (nonatomic) unsigned int bodySideBorderColumn;
@property (nonatomic) unsigned int topBorderRow;
@property (nonatomic) unsigned int headerRowSeparatorRow;
@property (nonatomic) unsigned int footerRowSeparatorRow;
@property (nonatomic) unsigned int bottomBorderRow;

- (TSTMasterLayout *)masterLayout;
- (void)setMasterLayout:(TSTMasterLayout *)arg0;
- (TSTStrokeDefaultVendor *)initWithMasterLayout:(TSTMasterLayout *)arg0;
- (void)setStrokeProvider:(<TSTTableStrokeProviding> *)arg0;
- (void)setStrokeTypeToLayerMap:(NSPointerArray *)arg0;
- (NSPointerArray *)strokeTypeToLayerMap;
- (int)p_strokeTypeForColumn:(unsigned int)arg0;
- (NSObject *)strokeLayerForStrokeType:(int)arg0;
- (int)p_strokeTypeForRow:(unsigned int)arg0;
- (void)setHeaderSideBorderColumn:(unsigned int)arg0;
- (unsigned int)headerColumnSeparatorColumn;
- (void)setHeaderColumnSeparatorColumn:(unsigned int)arg0;
- (unsigned int)bodySideBorderColumn;
- (void)setBodySideBorderColumn:(unsigned int)arg0;
- (void)setTopBorderRow:(unsigned int)arg0;
- (unsigned int)headerRowSeparatorRow;
- (void)setHeaderRowSeparatorRow:(unsigned int)arg0;
- (unsigned int)footerRowSeparatorRow;
- (void)setFooterRowSeparatorRow:(unsigned int)arg0;
- (unsigned int)bottomBorderRow;
- (void)setBottomBorderRow:(unsigned int)arg0;
- (char)validateGeometry;
- (void)p_updateStrokeLayer:(id)arg0 forColumnStrokeType:(int)arg1;
- (void)p_updateStrokeLayer:(id)arg0 forRowStrokeType:(int)arg1;
- (unsigned int)headerSideBorderColumn;
- (unsigned int)topBorderRow;
- (<TSTTableStrokeProviding> *)strokeProvider;
- (id)strokeLayerForColumn:(unsigned int)arg0;
- (id)strokeLayerForRow:(unsigned int)arg0;
- (void)dealloc;
- (void)invalidate;
- (char)isValid;
- (char)validate;
- (void)setIsValid:(char)arg0;

@end
