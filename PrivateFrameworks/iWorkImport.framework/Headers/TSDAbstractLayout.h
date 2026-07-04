/* Runtime dump - TSDAbstractLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDAbstractLayout : NSObject
{
    TSDAbstractLayout * mParent;
    NSMutableArray * mChildren;
    TSDLayoutGeometry * mGeometry;
    struct CGPoint mInterimPosition;
    char mInterimPositionXSet;
    char mInterimPositionYSet;
    struct CGPoint mLastInterimPosition;
    char mLastInterimPositionXSet;
    char mLastInterimPositionYSet;
}

@property (readonly, nonatomic) unsigned int pageIndex;
@property (readonly, nonatomic) TPPageLayout * pageLayout;
@property (copy, nonatomic) TSDLayoutGeometry * geometry;
@property (nonatomic) TSDAbstractLayout * parent;
@property (readonly, nonatomic) TSDAbstractLayout * root;
@property (copy, nonatomic) NSArray * children;
@property (nonatomic) float interimPositionX;
@property (nonatomic) float interimPositionY;
@property (readonly, nonatomic) struct CGPoint lastInterimPosition;

- (struct CGAffineTransform)transformInRoot;
- (void)offsetGeometryBy:(struct CGPoint)arg0;
- (struct CGRect)alignmentFrameForProvidingGuidesInRoot;
- (struct CGRect)frameForCulling;
- (id)visibleGeometries;
- (struct CGRect)alignmentFrame;
- (char)canRotateChildLayout:(NSObject *)arg0;
- (char)supportsParentRotation;
- (struct CGRect)insertionFrame;
- (struct CGRect)frameInRoot;
- (NSObject *)geometryInRoot;
- (struct CGPoint)alignmentFrameOriginForFixingInterimPosition;
- (NSObject *)geometryInRoot:(NSObject *)arg0;
- (char)isRootLayoutForInspectorGeometry;
- (void)fixTransformFromLastInterimPosition;
- (NSObject *)additionalDependenciesForChildLayout:(NSObject *)arg0;
- (struct CGRect)rectInParent:(NSObject *)arg0;
- (struct CGRect)rectInRoot:(NSObject *)arg0;
- (struct CGAffineTransform)transformInParent;
- (struct CGRect)clippedRectInRoot:(NSObject *)arg0;
- (char)providesGuidesForChildLayouts;
- (id)parentLayoutForProvidingGuides;
- (void)addLayoutsInRect:(struct CGRect)arg0 toArray:(struct CGSize)arg1 deep:(id)arg2;
- (struct CGRect)alignmentFrameInRoot;
- (void)p_fixTransformFromInterimPosition:(struct CGPoint)arg0 interimPositionXSet:(char)arg1 interimPositionYSet:(char)arg2;
- (char)supportsRotation;
- (NSObject *)geometryInParent;
- (id)geometryForTransforming;
- (struct CGRect)frameInParent;
- (char)isAxisAlignedUnflippedInRoot;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (void)insertChild:(NSObject *)arg0 below:(char)arg1;
- (void)insertChild:(NSObject *)arg0 above:(UITextEffectsWindowNoAbove *)arg1;
- (void)exchangeChildAtIndex:(unsigned int)arg0 withChildAtIndex:(unsigned int)arg1;
- (char)shouldSnapWhileResizing;
- (float)interimPositionX;
- (void)setInterimPositionX:(float)arg0;
- (float)interimPositionY;
- (void)setInterimPositionY:(float)arg0;
- (void)fixTransformFromInterimPosition;
- (struct CGPoint)positionInRootForAttachmentPositioner;
- (char)supportsResize;
- (char)supportsInspectorPositioning;
- (char)supportsFlipping;
- (struct CGPoint)lastInterimPosition;
- (TPPageLayout *)pageLayout;
- (struct CGRect)clipRect;
- (void)dealloc;
- (TSDAbstractLayout *)init;
- (struct CGRect)frame;
- (struct CGAffineTransform)transform;
- (TSDLayoutGeometry *)geometry;
- (void)setGeometry:(TSDLayoutGeometry *)arg0;
- (unsigned int)pageIndex;
- (void)removeFromParent;
- (TSDAbstractLayout *)root;
- (void)setChildren:(NSArray *)arg0;
- (void)addChild:(OADDrawable *)arg0;
- (void)insertChild:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)replaceChild:(NSObject *)arg0 with:(OADDrawable *)arg1;
- (TSDAbstractLayout *)parent;
- (void)setParent:(TSDAbstractLayout *)arg0;
- (NSArray *)children;

@end
