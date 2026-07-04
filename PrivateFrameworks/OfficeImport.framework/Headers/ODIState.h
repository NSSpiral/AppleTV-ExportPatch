/* Runtime dump - ODIState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODIState : NSObject
{
    ODDDiagram * mDiagram;
    OADOrientedBounds * mDiagramOrientedBounds;
    struct CGRect mLogicalBounds;
    float mScale;
    OADGroup * mGroup;
    NSMutableArray * mPresentationNames;
    NSMutableArray * mDefaultStyleLabelNames;
    int mPointCount;
    int mPointIndex;
    OADShapeStyle * mTextStyle;
    OADDrawingTheme * mDrawingTheme;
}

- (void)dealloc;
- (float)scale;
- (void).cxx_construct;
- (void)setGroup:(NSObject *)arg0;
- (void *)group;
- (TSWPParagraphStyle *)textStyle;
- (void)setTextStyle:(NSObject *)arg0;
- (struct CGRect)logicalBounds;
- (id)diagram;
- (void)setLogicalBounds:(struct CGRect)arg0;
- (id)drawingTheme;
- (ODIState *)initWithDiagram:(ODIDiagram *)arg0 group:(NSObject *)arg1 drawingTheme:(OADDrawingTheme *)arg2;
- (id)diagramOrientedBounds;
- (NSObject *)presentationNameForPointType:(int)arg0;
- (NSObject *)defaultStyleLabelNameForPointType:(int)arg0;
- (void)setDefaultStyleLabelName:(NSString *)arg0 forPointType:(int)arg1;
- (void)setPresentationName:(NSString *)arg0 forPointType:(int)arg1;
- (void)setPointCount:(int)arg0;
- (void)setPointIndex:(int)arg0;
- (int)pointIndex;
- (void)setLogicalBounds:(struct CGRect)arg0 maintainAspectRatio:(struct CGSize)arg1;
- (int)pointCount;

@end
