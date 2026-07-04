/* Runtime dump - VKGGLDebugTileData
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGGLDebugTileData : NSObject
{
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> > _namedLineMesh;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> > _unnamedLineMesh;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> > _polygonLineMesh;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> > _coastLineMesh;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > _poiPointsMesh;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > _verticesPointsMesh;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > _junctionsPointsMesh;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > _overpassPointsMesh;
    unsigned int _namedLineCount;
    unsigned int _namedLineVertCount;
    unsigned int _unnamedLineCount;
    unsigned int _unnamedLineVertCount;
    unsigned int _polygonCount;
    unsigned int _polygonVertCount;
    unsigned int _poiCount;
    unsigned int _vertexCount;
    unsigned int _junctionCount;
    unsigned int _overpassCount;
    unsigned int _coastLineCount;
    unsigned int _coastLineVertCount;
}

@property (readonly, nonatomic) struct BaseMesh * namedLineMesh;
@property (readonly, nonatomic) struct BaseMesh * unnamedLineMesh;
@property (readonly, nonatomic) struct BaseMesh * polygonLineMesh;
@property (readonly, nonatomic) struct BaseMesh * coastLineMesh;
@property (readonly, nonatomic) struct BaseMesh * poiPointsMesh;
@property (readonly, nonatomic) struct BaseMesh * verticesPointsMesh;
@property (readonly, nonatomic) struct BaseMesh * junctionsPointsMesh;
@property (readonly, nonatomic) struct BaseMesh * overpassPointsMesh;
@property (readonly, nonatomic) unsigned int namedLineCount;
@property (readonly, nonatomic) unsigned int namedLineVertCount;
@property (readonly, nonatomic) unsigned int unnamedLineCount;
@property (readonly, nonatomic) unsigned int unnamedLineVertCount;
@property (readonly, nonatomic) unsigned int polygonCount;
@property (readonly, nonatomic) unsigned int polygonVertCount;
@property (readonly, nonatomic) unsigned int poiCount;
@property (readonly, nonatomic) unsigned int vertexCount;
@property (readonly, nonatomic) unsigned int junctionCount;
@property (readonly, nonatomic) unsigned int overpassCount;
@property (readonly, nonatomic) unsigned int coastLineCount;
@property (readonly, nonatomic) unsigned int coastLineVertCount;

- (void).cxx_construct;
- (void).cxx_destruct;
- (VKGGLDebugTileData *)initWithTile:(VKLabelTile *)arg0;
- (void)_fillInDebugData:(NSData *)arg0;
- (struct BaseMesh *)namedLineMesh;
- (struct BaseMesh *)unnamedLineMesh;
- (struct BaseMesh *)verticesPointsMesh;
- (struct BaseMesh *)poiPointsMesh;
- (struct BaseMesh *)polygonLineMesh;
- (struct BaseMesh *)junctionsPointsMesh;
- (struct BaseMesh *)overpassPointsMesh;
- (struct BaseMesh *)coastLineMesh;
- (unsigned int)namedLineCount;
- (unsigned int)namedLineVertCount;
- (unsigned int)unnamedLineCount;
- (unsigned int)unnamedLineVertCount;
- (unsigned int)polygonCount;
- (unsigned int)polygonVertCount;
- (unsigned int)poiCount;
- (unsigned int)vertexCount;
- (unsigned int)junctionCount;
- (unsigned int)overpassCount;
- (unsigned int)coastLineCount;
- (unsigned int)coastLineVertCount;

@end
