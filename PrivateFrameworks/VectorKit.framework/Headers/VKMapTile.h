/* Runtime dump - VKMapTile
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapTile : VKTile <NSCopying>
{
    id _tiles;
    id _states;
    id _stateDates;
    id _stateMetas;
    id _localBounds;
    VKRasterTile * _rasterized;
    char _needsRasterization;
    float _maximumStyleZ;
    struct shared_ptr<vk::LabelMapTile> _labelMapTile;
}

@property (readonly, nonatomic) float maximumStyleZ;
@property (retain, nonatomic) VKRasterTile * rasterized;
@property (nonatomic) char needsRasterization;
@property (nonatomic) struct shared_ptr<vk::LabelMapTile> labelMapTile;

- (void)dealloc;
- (NSString *)description;
- (VKMapTile *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)updateViewDependentStateWithContext:(NSObject *)arg0;
- (VKMapTile *)initWithKey:(struct VKTileKey *)arg0;
- (NSString *)detailedDescription;
- (CALayer *)tileForLayer:(unsigned long long)arg0;
- (float)maximumStyleZ;
- (VKRasterTile *)rasterized;
- (struct shared_ptr<vk::LabelMapTile>)labelMapTile;
- (void)setLabelMapTile:(struct shared_ptr<vk::LabelMapTile>)arg0;
- (void)setRasterized:(VKRasterTile *)arg0;
- (unsigned int)tileStateForLayer:(unsigned long long)arg0;
- (void)setTile:(VKLabelTile *)arg0 state:(unsigned int)arg1 metadata:(NSDictionary *)arg2 forLayer:(unsigned long long)arg3;
- (void)setNeedsRasterization:(char)arg0;
- (char)needsRasterization;
- (void)_setTile:(id)arg0 state:(unsigned int)arg1 metadata:(NSDictionary *)arg2 forLayer:(unsigned long long)arg3 timestamp:(double)arg4;
- (struct ?)localBoundsForLayer:(unsigned long long)arg0;

@end
