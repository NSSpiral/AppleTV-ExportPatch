/* Runtime dump - TSTStrokeLayerMergedStack
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeLayerMergedStack : TSTStrokeLayerAbstractStack
{
    TSTStrokeLayer * _defaultMinorStrokeLayer;
    TSTStrokeLayer * _defaultMajorStrokeLayer;
    TSTStrokeLayer * _customUnorderedStrokeLayer;
    TSTStrokeOrderedLayer * _customOrderedStrokeLayer;
    TSTMutableStrokeLayer * _clearedMinorStrokeLayer;
    TSTMutableStrokeLayer * _clearedMajorStrokeLayer;
    TSTMutableStrokeLayer * _dynamicUnorderedStrokeLayer;
    TSTStrokeOrderedLayer * _dynamicOrderedStrokeLayer;
    TSTMutableStrokeLayer * _spillMinorStrokeLayer;
    TSTMutableStrokeLayer * _spillMajorStrokeLayer;
}

@property (retain, nonatomic) TSTStrokeLayer * defaultMinorStrokeLayer;
@property (retain, nonatomic) TSTStrokeLayer * defaultMajorStrokeLayer;
@property (retain, nonatomic) TSTStrokeLayer * customUnorderedStrokeLayer;
@property (retain, nonatomic) TSTStrokeOrderedLayer * customOrderedStrokeLayer;
@property (retain, nonatomic) TSTMutableStrokeLayer * clearedMinorStrokeLayer;
@property (retain, nonatomic) TSTMutableStrokeLayer * clearedMajorStrokeLayer;
@property (retain, nonatomic) TSTMutableStrokeLayer * dynamicUnorderedStrokeLayer;
@property (retain, nonatomic) TSTStrokeOrderedLayer * dynamicOrderedStrokeLayer;
@property (retain, nonatomic) TSTMutableStrokeLayer * spillMinorStrokeLayer;
@property (retain, nonatomic) TSTMutableStrokeLayer * spillMajorStrokeLayer;

+ (float)p_maxWidthForMajorStrokes:(id)arg0 mergedWithMinorStrokes:(NSNumber *)arg1 inRange:(struct TSTSimpleRange)arg2 cachedMax:(float)arg3;
+ (float)p_maxWidthForMajorStrokes:(id)arg0 mergedWithMinorStrokes:(NSNumber *)arg1 atIndex:(int)arg2;
+ (TSTStrokeLayerMergedStack *)mergeTopStrokes:(id)arg0 withBottomStrokes:(id)arg1;
+ (TSTStrokeLayerMergedStack *)mergeLeftStrokes:(id)arg0 withRightStrokes:(id)arg1;
+ (float)maxWidthForTopStrokes:(id)arg0 mergedWithBottomStrokes:(id)arg1 inRange:(struct TSTSimpleRange)arg2 cachedMax:(float)arg3;
+ (float)maxWidthForTopStrokes:(id)arg0 mergedWithBottomStrokes:(id)arg1 atColumnIndex:(int)arg2;
+ (float)maxWidthForLeftStrokes:(id)arg0 mergedWithRightStrokes:(id)arg1 inRange:(struct TSTSimpleRange)arg2 cachedMax:(float)arg3;
+ (float)maxWidthForLeftStrokes:(id)arg0 mergedWithRightStrokes:(id)arg1 atRowIndex:(int)arg2;

- (void)lockForRead;
- (void)lockForWrite;
- (id)strokeLayerEnumeration;
- (CALayer *)portalledStrokeLayer;
- (void)invalidateSpillStrokes;
- (TSTStrokeLayer *)defaultMinorStrokeLayer;
- (TSTStrokeLayer *)defaultMajorStrokeLayer;
- (TSTStrokeLayer *)customUnorderedStrokeLayer;
- (TSTStrokeOrderedLayer *)customOrderedStrokeLayer;
- (TSTMutableStrokeLayer *)clearedMinorStrokeLayer;
- (TSTMutableStrokeLayer *)clearedMajorStrokeLayer;
- (TSTMutableStrokeLayer *)dynamicUnorderedStrokeLayer;
- (TSTStrokeOrderedLayer *)dynamicOrderedStrokeLayer;
- (TSTMutableStrokeLayer *)spillMinorStrokeLayer;
- (TSTMutableStrokeLayer *)spillMajorStrokeLayer;
- (void)setSpillMinorStrokeLayer:(TSTMutableStrokeLayer *)arg0;
- (void)setSpillMajorStrokeLayer:(TSTMutableStrokeLayer *)arg0;
- (TSTStrokeLayerMergedStack *)initWithCopyOfMajorStrokes:(id)arg0 andMinorStrokes:(id)arg1;
- (TSTStrokeLayerMergedStack *)initWithReferenceOfMajorStrokes:(id)arg0 andMinorStrokes:(id)arg1;
- (float)p_maxWidthOfStrokesInRange:(struct TSTSimpleRange)arg0 cachedMax:(float)arg1;
- (float)p_widthOfStrokesAtIndex:(int)arg0;
- (void)setDefaultMinorStrokeLayer:(TSTStrokeLayer *)arg0;
- (void)setDefaultMajorStrokeLayer:(TSTStrokeLayer *)arg0;
- (void)setCustomUnorderedStrokeLayer:(TSTStrokeLayer *)arg0;
- (void)setCustomOrderedStrokeLayer:(TSTStrokeOrderedLayer *)arg0;
- (void)setClearedMinorStrokeLayer:(TSTMutableStrokeLayer *)arg0;
- (void)setClearedMajorStrokeLayer:(TSTMutableStrokeLayer *)arg0;
- (void)setDynamicUnorderedStrokeLayer:(TSTMutableStrokeLayer *)arg0;
- (void)setDynamicOrderedStrokeLayer:(TSTStrokeOrderedLayer *)arg0;
- (void)dealloc;
- (void)unlock;

@end
