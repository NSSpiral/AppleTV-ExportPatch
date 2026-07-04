/* Runtime dump - VKLabelTile
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelTile : VKTile
{
    struct shared_ptr<vk::LabelTile> _labelTile;
}

@property (readonly, nonatomic) struct shared_ptr<vk::LabelTile> labelTile;

- (NSString *)description;
- (void).cxx_construct;
- (void).cxx_destruct;
- (VKLabelTile *)initWithKey:(struct VKTileKey *)arg0 modelTile:(struct VKTileKey)arg1 tileType:(NSObject *)arg2 labelManager:(unsigned char)arg3;
- (struct shared_ptr<vk::LabelTile>)labelTile;

@end
