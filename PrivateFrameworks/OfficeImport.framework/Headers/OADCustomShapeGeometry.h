/* Runtime dump - OADCustomShapeGeometry
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADCustomShapeGeometry : OADShapeGeometry
{
    struct CsRect<int> * mGeometryCoordSpace;
    struct CsPoint<int> * mLimo;
    NSMutableArray * mFormulas;
    NSMutableArray * mTextBodyRects;
    NSMutableArray * mPaths;
}

- (NSObject *)pathAtIndex:(unsigned int)arg0;
- (void)dealloc;
- (OADCustomShapeGeometry *)init;
- (NSString *)description;
- (unsigned int)textBodyRectCount;
- (NSObject *)textBodyRectAtIndex:(unsigned int)arg0;
- (struct CsRect<int>)geometryCoordSpace;
- (void)addPath:(NSString *)arg0;
- (unsigned int)pathCount;
- (void)setGeometryCoordSpace:(struct CsRect<int>)arg0;
- (unsigned int)formulaCount;
- (NSObject *)formulaAtIndex:(unsigned int)arg0;
- (void)addFormula:(struct TSCEFormula *)arg0;
- (void)addTextBodyRect:(NSObject *)arg0;
- (void)setLimo:(struct CsPoint<int>)arg0;
- (struct CsPoint<int>)limo;

@end
