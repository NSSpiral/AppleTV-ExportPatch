/* Runtime dump - TSTStrokeLayerToken
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeLayerToken : NSObject <TSTStrokeLayerStrokeAndRange>
{
    TSDStroke * _stroke;
    int _order;
    unsigned int _position;
    struct TSTSimpleRange _range;
}

@property (retain, nonatomic) TSDStroke * stroke;
@property (nonatomic) struct TSTSimpleRange range;
@property (nonatomic) int order;
@property (nonatomic) unsigned int position;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (TSTStrokeLayerToken *)tokenWithStroke:(TSDStroke *)arg0 range:(struct TSTSimpleRange)arg1 order:(int)arg2 andPosition:(unsigned int)arg3;

- (TSTStrokeLayerToken *)initWithStroke:(TSDStroke *)arg0 range:(struct TSTSimpleRange)arg1 order:(int)arg2 andPosition:(unsigned int)arg3;
- (void)dealloc;
- (TSDStroke *)stroke;
- (void)setPosition:(unsigned int)arg0;
- (unsigned int)position;
- (struct TSTSimpleRange)range;
- (void).cxx_construct;
- (void)setOrder:(int)arg0;
- (int)order;
- (void)setRange:(struct TSTSimpleRange)arg0;
- (void)setStroke:(TSDStroke *)arg0;

@end
