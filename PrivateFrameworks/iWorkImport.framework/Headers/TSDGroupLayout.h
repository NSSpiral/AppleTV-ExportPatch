/* Runtime dump - TSDGroupLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGroupLayout : TSDContainerLayout <TSDWrappableParent>
{
    TSDLayoutGeometry * mDynamicLayoutGeometry;
    struct CGRect mBoundsForStandardKnobs;
    TSUBezierPath * mCachedWrapPath;
    TSUBezierPath * mCachedExternalWrapPath;
}

- (void)beginDynamicOperation;
- (void)endDynamicOperation;
- (void)invalidateExteriorWrap;
- (NSDictionary *)layoutGeometryFromInfo;
- (NSObject *)computeLayoutGeometry;
- (void)processChangedProperty:(int)arg0;
- (struct CGRect)frameForCulling;
- (id)visibleGeometries;
- (struct CGRect)alignmentFrame;
- (NSString *)i_computeWrapPath;
- (struct CGRect)boundsForStandardKnobs;
- (id)computeInfoGeometryDuringResize;
- (char)supportsParentRotation;
- (char)canAspectRatioLockBeChangedByUser;
- (NSString *)i_wrapPath;
- (void)dragBy:(struct CGPoint)arg0;
- (void)setDynamicGeometry:(TSDLayoutGeometry *)arg0;
- (NSObject *)additionalDependenciesForChildLayout:(NSObject *)arg0;
- (char)resizeMayChangeAspectRatio;
- (id)reliedOnLayouts;
- (NSString *)i_externalWrapPath;
- (struct CGRect)rectInRootForPresentingAnnotationPopoverForSelectionPath:(NSString *)arg0;
- (char)allowsConnections;
- (char)providesGuidesForChildLayouts;
- (char)supportsRotation;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (char)supportsInspectorPositioning;
- (char)supportsFlipping;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)p_invalidateParentForWrap;
- (void)p_invalidateDescendentWrapPaths;
- (id)descendentWrappables;
- (NSObject *)p_childWrapPathsFrom:(NSObject *)arg0;
- (void)wrappableChildInvalidated;
- (struct CGRect)clipRect;
- (void)dealloc;
- (void)invalidate;
- (struct CGSize)minimumSize;
- (void)setGeometry:(TSDInfoGeometry *)arg0;
- (char)canFlip;
- (char)isDraggable;

@end
