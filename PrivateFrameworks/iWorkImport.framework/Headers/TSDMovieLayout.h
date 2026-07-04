/* Runtime dump - TSDMovieLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMovieLayout : TSDMediaLayout
{
    TSDInfoGeometry * mDynamicInfoGeometry;
}

- (NSDictionary *)layoutGeometryFromInfo;
- (NSObject *)computeLayoutGeometry;
- (void)processChangedProperty:(int)arg0;
- (NSString *)i_computeWrapPath;
- (char)supportsRotation;
- (struct CGRect)computeAlignmentFrameInRoot:(NSObject *)arg0;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (struct CGRect)fullReflectionBoundsForRect:(NSObject *)arg0;
- (struct CGRect)fullReflectionFrame;
- (TSDMovieLayout *)initWithInfo:(NSDictionary *)arg0;
- (void)dealloc;
- (NSDictionary *)movieInfo;

@end
