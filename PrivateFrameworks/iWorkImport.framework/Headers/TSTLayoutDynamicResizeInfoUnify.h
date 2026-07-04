/* Runtime dump - TSTLayoutDynamicResizeInfoUnify
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLayoutDynamicResizeInfoUnify : TSTLayoutDynamicResizeInfo
{
    float mTargetWidth;
    float mTargetHeight;
}

@property (readonly, nonatomic) float targetWidth;
@property (readonly, nonatomic) float targetHeight;

- (float)applyResizeHeightFactor:(float)arg0;
- (float)applyResizeWidthFactor:(float)arg0;
- (void)captureNewMinimumRowHeights:(id)arg0;
- (float)p_applyUnifyResizeFactor:(float)arg0 region:(NSObject *)arg1 direction:(int)arg2 totalOfCaptured:(float)arg3 count:(unsigned short)arg4 capturedArray:(float *)arg5 currentArray:(float *)arg6 minimumArray:(float *)arg7;
- (void)p_applyUnifyFixedSize:(float)arg0 region:(NSObject *)arg1 direction:(int)arg2 count:(unsigned short)arg3 currentArray:(float *)arg4 minimumArray:(float *)arg5;
- (void)applyFixedHeight:(float)arg0;
- (void)applyFixedWidth:(float)arg0;
- (float)targetWidth;
- (float)targetHeight;

@end
