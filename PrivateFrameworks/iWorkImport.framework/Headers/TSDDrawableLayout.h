/* Runtime dump - TSDDrawableLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDDrawableLayout : TSDLayout <TSDWrappable>
{
    TSDWrapSegments * mCachedWrapSegments;
    TSUBezierPath * mCachedWrapPath;
    TSUBezierPath * mCachedExternalWrapPath;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char hasAlpha;

- (int)wrapDirection;
- (void)invalidateExteriorWrap;
- (void)processChangedProperty:(int)arg0;
- (struct CGRect)boundsInfluencingExteriorWrap;
- (NSString *)i_computeWrapPath;
- (int)wrapFitType;
- (NSString *)i_wrapPath;
- (struct CGPath *)wrapPath;
- (void)parentDidChange;
- (void)dragBy:(struct CGPoint)arg0;
- (NSString *)i_externalWrapPath;
- (char)allowsConnections;
- (char)supportsInspectorPositioning;
- (char)isHTMLWrap;
- (id)i_computeWrapPathClosed:(char)arg0;
- (void)invalidateParentForWrap;
- (void)i_invalidateWrap;
- (struct CGRect)boundsInRoot;
- (id)wrapSegments;
- (char)hasAlpha;
- (void)dealloc;
- (void)invalidate;
- (void)setGeometry:(TSDInfoGeometry *)arg0;
- (int)wrapType;

@end
