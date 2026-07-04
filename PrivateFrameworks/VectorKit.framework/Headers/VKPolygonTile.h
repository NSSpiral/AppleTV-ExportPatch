/* Runtime dump - VKPolygonTile
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPolygonTile : VKVectorTile
{
    NSMutableArray * _polygonGroups;
    NSMutableArray * _coastlineGroups;
    float _alpha;
    float _scale;
    float _minLayeringHeight;
    float _maxLayeringHeight;
    VKAnimation * _animation;
    VKAnimation * _animationForPitch;
}

@property (readonly, nonatomic) NSArray * polygonGroups;
@property (readonly, nonatomic) NSArray * coastlineGroups;
@property (nonatomic) float alpha;
@property (nonatomic) float scale;
@property (readonly, nonatomic) float minLayeringHeight;
@property (readonly, nonatomic) float maxLayeringHeight;
@property (retain, nonatomic) VKAnimation * animation;
@property (retain, nonatomic) VKAnimation * animationForPitch;

- (void)dealloc;
- (float)alpha;
- (void)setAlpha:(float)arg0;
- (float)scale;
- (VKAnimation *)animation;
- (void)setScale:(float)arg0;
- (void)setAnimation:(VKAnimation *)arg0;
- (VKAnimation *)animationForPitch;
- (float)minLayeringHeight;
- (float)maxLayeringHeight;
- (void)setAnimationForPitch:(VKAnimation *)arg0;
- (NSArray *)polygonGroups;
- (NSArray *)coastlineGroups;
- (void)buildMeshesWithStyleSession:(struct /* ? */ *)arg0 device:(struct _release_objc)arg1 triangulator:(VKTriangulator *)arg2 prepareExtrusion:(struct /* ? */)arg3;
- (void)buildCoastlinesWithStyleSession:(struct StyleResolutionSession<geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > *)arg0;
- (VKPolygonTile *)initWithKey:(struct VKTileKey *)arg0 modelTile:(struct VKTileKey)arg1 prepareExtrusion:(char)arg2 styleManager:(char)arg3 sharedResources:(VKSharedResources *)arg4 contentScale:(float)arg5 device:(float)arg6;

@end
