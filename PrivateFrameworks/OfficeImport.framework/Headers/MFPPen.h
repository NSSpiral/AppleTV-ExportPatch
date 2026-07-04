/* Runtime dump - MFPPen
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPPen : NSObject
{
    MFPBrush * mBrush;
    float mWidth;
    struct CGAffineTransform mTransform;
    int mStartCap;
    int mEndCap;
    int mLineJoin;
    float mMiterLimit;
    int mDashStyle;
    int mDashCap;
    float mDashOffset;
    int mDashPatternCount;
    float * mDashPattern;
    int mAlignment;
    int mCompoundArrayCount;
    float * mCompoundArray;
    MFPCustomLineCap * mCustomStartCap;
    MFPCustomLineCap * mCustomEndCap;
}

- (void)setAlignment:(int)arg0;
- (void)dealloc;
- (MFPPen *)init;
- (float)miterLimit;
- (void)setMiterLimit:(float)arg0;
- (void)setTransform:(struct CGAffineTransform)arg0;
- (struct CGAffineTransform)transform;
- (float)width;
- (int)alignment;
- (void).cxx_construct;
- (void)setWidth:(float)arg0;
- (void)setLineJoin:(int)arg0;
- (void)setStartCap:(int)arg0;
- (void)setEndCap:(int)arg0;
- (void)setDashStyle:(int)arg0;
- (void)setDashCap:(int)arg0;
- (void)setDashOffset:(float)arg0;
- (void)setDashPattern:(float *)arg0 count:(float)arg1;
- (void)setCompoundArray:(float *)arg0 count:(float)arg1;
- (void)setBrush:(MFPHatchBrush *)arg0;
- (void)strokePath:(UIBezierPath *)arg0;
- (void)setDashPattern:(float *)arg0 count:(float)arg1 toPath:(int)arg2;
- (void)applyLineCapToPath:(NSString *)arg0;
- (void)applyDashCapToPath:(NSString *)arg0;
- (void)applyLineJoinToPath:(NSString *)arg0;
- (void)applyDashPatternToPath:(NSString *)arg0;
- (MFPHatchBrush *)brush;
- (int)startCap;
- (int)endCap;
- (int)lineJoin;
- (int)dashStyle;
- (int)dashCap;
- (float)dashOffset;
- (int)dashPatternCount;
- (float *)dashPattern;
- (int)compoundArrayCount;
- (float *)compoundArray;
- (id)customStartCap;
- (void)setCustomStartCap:(id)arg0;
- (id)customEndCap;
- (void)setCustomEndCap:(id)arg0;

@end
