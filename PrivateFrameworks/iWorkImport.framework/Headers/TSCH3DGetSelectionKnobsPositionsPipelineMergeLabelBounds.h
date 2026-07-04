/* Runtime dump - TSCH3DGetSelectionKnobsPositionsPipelineMergeLabelBounds
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGetSelectionKnobsPositionsPipelineMergeLabelBounds : NSObject
{
    int mLabelType;
    int mKnobsMode;
    NSMutableArray * mLabelsBounds;
}

@property (readonly, nonatomic) int labelType;
@property (readonly, nonatomic) int knobsMode;

+ (NSObject *)boundsWithLabelType:(int)arg0 knobsMode:(int)arg1;

- (int)labelType;
- (void)mergeBoundsIntoProjectedPoints:(id)arg0;
- (void)addNewBoundsArray;
- (void)addBounds:(struct CGRect)arg0;
- (int)knobsMode;
- (TSCH3DGetSelectionKnobsPositionsPipelineMergeLabelBounds *)initWithLabelType:(int)arg0 knobsMode:(int)arg1;
- (char)p_isHorizontal;
- (struct CGPoint)p_minPoint:(struct CGPoint)arg0 otherPoint:(struct CGPoint)arg1;
- (struct CGPoint)p_maxPoint:(struct CGPoint)arg0 otherPoint:(struct CGPoint)arg1;
- (char)p_hasExtentPointsForBounds:(id)arg0 returningMinPoint:(struct CGPoint *)arg1 maxPoint:(struct CGPoint *)arg2;
- (void)dealloc;

@end
