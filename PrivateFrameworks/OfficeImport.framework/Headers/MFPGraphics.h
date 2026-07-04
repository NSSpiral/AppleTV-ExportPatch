/* Runtime dump - MFPGraphics
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPGraphics : NSObject
{
    struct CGRect mCanvas;
    int mHorzDpi;
    int mVertDpi;
    MFPGraphicsState * mCurrentState;
    NSMutableArray * mStateStack;
    MFPObjectTable * mObjectTable;
    NSMutableDictionary * mAvailableFonts;
}

+ (float)unitsPerInch:(int)arg0;

- (void)dealloc;
- (CAState *)currentState;
- (void).cxx_construct;
- (MFPGraphics *)initWithCanvas:(struct CGRect)arg0;
- (void)setHorizontalDpi:(int)arg0 verticalDpi:(int)arg1;
- (id)objectTable;
- (void)fillPath:(struct CGPath *)arg0 brush:(MFPHatchBrush *)arg1;
- (void)strokePath:(UIBezierPath *)arg0 pen:(id)arg1;
- (void)saveGraphicsStateWithId:(unsigned int)arg0;
- (void)restoreGraphicsStateOrEndContainerWithId:(unsigned int)arg0;
- (void)beginContainerWithId:(unsigned int)arg0 boundsInParent:(struct CGRect)arg1 bounds:(struct CGSize)arg2 boundsUnit:(id)arg3;
- (void)beginContainerNoParamsWithId:(unsigned int)arg0;
- (struct CGAffineTransform)pageTransformWithScale:(float)arg0 unit:(int)arg1;
- (char)areThereOpenContainers;
- (float)pixelsPerUnit:(int)arg0 direction:(int)arg1;
- (void)beginContainerWithId:(unsigned int)arg0 containerTransform:(struct CGAffineTransform)arg1;
- (NSString *)fontNameForUppercaseFontName:(NSString *)arg0;
- (struct CGRect)canvas;

@end
