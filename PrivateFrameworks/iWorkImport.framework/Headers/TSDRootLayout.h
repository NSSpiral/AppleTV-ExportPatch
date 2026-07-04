/* Runtime dump - TSDRootLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDRootLayout : TSDAbstractLayout <TSDAdaptiveLayout>
{
    TSDLayoutController * mLayoutController;
    char mSupportsAdaptiveLayout;
    TSUPointerKeyDictionary * mShiftedObjects;
}

- (TSDLayoutController *)layoutController;
- (char)isRootLayoutForInspectorGeometry;
- (struct CGRect)clippedRectInRoot:(NSObject *)arg0;
- (char)providesGuidesForChildLayouts;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (NSArray *)p_shiftedObjects;
- (void)beginDynamicAdaptiveLayout;
- (void)endDynamicAdaptiveLayout;
- (char)isSavedShiftForInfo:(NSDictionary *)arg0 equalToOffset:(struct CGPoint)arg1;
- (void)updateRootLayoutShiftFor:(id)arg0 offset:(struct CGPoint)arg1;
- (void)resetLayout:(NSObject *)arg0 forInfo:(NSDictionary *)arg1;
- (struct CGPoint)applyAdaptiveLayoutTo:(id)arg0 info:(NSDictionary *)arg1 offset:(struct CGPoint)arg2;
- (TSDRootLayout *)initWithLayoutController:(TSDLayoutController *)arg0;
- (NSObject *)childLayoutsInRect:(struct CGRect)arg0;
- (void)dealloc;

@end
