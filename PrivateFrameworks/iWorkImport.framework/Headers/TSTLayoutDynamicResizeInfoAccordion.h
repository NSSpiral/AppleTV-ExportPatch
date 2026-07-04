/* Runtime dump - TSTLayoutDynamicResizeInfoAccordion
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLayoutDynamicResizeInfoAccordion : TSTLayoutDynamicResizeInfo
{
    float _heightFactor;
    float _widthFactor;
}

@property (readonly, nonatomic) float heightFactor;
@property (readonly, nonatomic) float widthFactor;

- (TSTLayoutDynamicResizeInfoAccordion *)initWithMasterLayout:(TSTMasterLayout *)arg0 columnRegion:(NSObject *)arg1 rowRegion:(NSObject *)arg2;
- (float)applyResizeHeightFactor:(float)arg0;
- (float)applyResizeWidthFactor:(float)arg0;
- (TSTLayoutDynamicResizeInfoAccordion *)initWithDynamicResizeInfo:(NSDictionary *)arg0;
- (void)captureNewMinimumRowHeights:(id)arg0;
- (float)p_applyAccordionResizeFactor:(float)arg0 region:(NSObject *)arg1 direction:(int)arg2 totalOfCaptured:(float)arg3 count:(unsigned short)arg4 capturedArray:(float *)arg5 currentArray:(float *)arg6 minimumArray:(float *)arg7;
- (float)heightFactor;
- (float)widthFactor;

@end
