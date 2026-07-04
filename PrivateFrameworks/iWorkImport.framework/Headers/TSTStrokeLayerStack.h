/* Runtime dump - TSTStrokeLayerStack
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeLayerStack : TSTStrokeLayerAbstractStack
{
    TSTStrokeLayer * _defaultStrokeLayer;
    TSTStrokeLayer * _customStrokeLayer;
    TSTMutableStrokeLayer * _clearedStrokeLayer;
    TSTMutableStrokeLayer * _dynamicStrokeLayer;
    TSTMutableStrokeLayer * _spillStrokeLayer;
    int _stackKind;
    int _type;
}

@property (retain, nonatomic) TSTStrokeLayer * defaultStrokeLayer;
@property (retain, nonatomic) TSTStrokeLayer * customStrokeLayer;
@property (retain, nonatomic) TSTMutableStrokeLayer * clearedStrokeLayer;
@property (retain, nonatomic) TSTMutableStrokeLayer * dynamicStrokeLayer;
@property (retain, nonatomic) TSTMutableStrokeLayer * spillStrokeLayer;
@property (nonatomic) int stackKind;
@property (nonatomic) int type;

+ (TSTStrokeLayerStack *)strokeLayerStackWithStackKind:(int)arg0;

- (id)strokeLayerEnumeration;
- (CALayer *)portalledStrokeLayer;
- (TSTStrokeLayerStack *)initWithStackKind:(int)arg0;
- (TSTStrokeLayer *)defaultStrokeLayer;
- (TSTMutableStrokeLayer *)clearedStrokeLayer;
- (void)setClearedStrokeLayer:(TSTMutableStrokeLayer *)arg0;
- (TSTMutableStrokeLayer *)dynamicStrokeLayer;
- (void)setDynamicStrokeLayer:(TSTMutableStrokeLayer *)arg0;
- (TSTMutableStrokeLayer *)spillStrokeLayer;
- (void)setSpillStrokeLayer:(TSTMutableStrokeLayer *)arg0;
- (void)setDefaultStrokeLayer:(TSTStrokeLayer *)arg0;
- (TSTStrokeLayer *)customStrokeLayer;
- (void)setCustomStrokeLayer:(TSTStrokeLayer *)arg0;
- (void)insertClearedStrokeAtRange:(struct TSTSimpleRange)arg0;
- (void)insertDynamicStroke:(id)arg0 strokeOrder:(int)arg1 atRange:(struct TSTSimpleRange)arg2;
- (void)insertSpillStroke:(id)arg0 atRange:(struct TSTSimpleRange)arg1;
- (char)replaceDefaultStrokeLayerWith:(id)arg0;
- (char)replaceCustomStrokeLayerWith:(id)arg0;
- (char)replaceDynamicStrokeLayerWith:(id)arg0;
- (void)invalidateCustomStrokes;
- (void)invalidateClearedStrokesInRange:(struct TSTSimpleRange)arg0;
- (void)invalidateDynamicStrokes;
- (void)invalidateDynamicStrokesInRange:(struct TSTSimpleRange)arg0;
- (void)invalidateSpillStrokes;
- (int)stackKind;
- (void)setStackKind:(int)arg0;
- (void)dealloc;
- (void)setType:(int)arg0;
- (int)type;

@end
