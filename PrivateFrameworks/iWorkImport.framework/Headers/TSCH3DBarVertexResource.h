/* Runtime dump - TSCH3DBarVertexResource
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DBarVertexResource : TSCH3DAbstractBarVertexResource
{
    TSCH3DBarExtrusionGeometry * mGeometry;
}

- (int)verticesOffset;
- (int)numVertices;
- (int)capOffset;
- (int)numCapVertices;
- (TSCH3DBarVertexResource *)initWithGeometry:(NSObject *)arg0;
- (void)dealloc;
- (SCNGeometry *)geometry;
- (NSObject *)get;

@end
