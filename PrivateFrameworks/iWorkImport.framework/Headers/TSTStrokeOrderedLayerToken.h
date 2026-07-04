/* Runtime dump - TSTStrokeOrderedLayerToken
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeOrderedLayerToken : NSObject <TSTStrokeLayerStrokeAndRange>
{
    TSDStroke * _stroke;
    int _order;
    <TSTStrokeLayerStrokeAndRange> * _majorStrokeLayerToken;
    <TSTStrokeLayerStrokeAndRange> * _minorStrokeLayerToken;
    struct TSTSimpleRange _range;
}

@property (retain, nonatomic) TSDStroke * stroke;
@property (nonatomic) struct TSTSimpleRange range;
@property (nonatomic) int order;
@property (retain, nonatomic) <TSTStrokeLayerStrokeAndRange> * majorStrokeLayerToken;
@property (retain, nonatomic) <TSTStrokeLayerStrokeAndRange> * minorStrokeLayerToken;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (TSTStrokeOrderedLayerToken *)tokenWithStroke:(TSDStroke *)arg0 range:(struct TSTSimpleRange)arg1 order:(int)arg2 majorStrokeLayerToken:(<TSTStrokeLayerStrokeAndRange> *)arg3 minorStrokeLayerToken:(<TSTStrokeLayerStrokeAndRange> *)arg4;

- (TSTStrokeOrderedLayerToken *)initWithStroke:(TSDStroke *)arg0 range:(struct TSTSimpleRange)arg1 order:(int)arg2 majorStrokeLayerToken:(<TSTStrokeLayerStrokeAndRange> *)arg3 minorStrokeLayerToken:(<TSTStrokeLayerStrokeAndRange> *)arg4;
- (<TSTStrokeLayerStrokeAndRange> *)majorStrokeLayerToken;
- (void)setMajorStrokeLayerToken:(<TSTStrokeLayerStrokeAndRange> *)arg0;
- (<TSTStrokeLayerStrokeAndRange> *)minorStrokeLayerToken;
- (void)setMinorStrokeLayerToken:(<TSTStrokeLayerStrokeAndRange> *)arg0;
- (void)dealloc;
- (TSDStroke *)stroke;
- (struct TSTSimpleRange)range;
- (void)setOrder:(int)arg0;
- (int)order;
- (void)setRange:(struct TSTSimpleRange)arg0;
- (void)setStroke:(TSDStroke *)arg0;

@end
