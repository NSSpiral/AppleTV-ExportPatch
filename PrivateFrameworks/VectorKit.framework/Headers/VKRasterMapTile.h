/* Runtime dump - VKRasterMapTile
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterMapTile : NSObject
{
    struct shared_ptr<ggl::BitmapDataBase> _bitmapData;
    struct VKTileKey _superTileKey;
    struct VKTileKey _finalTileKey;
    float _scale;
    struct CGImage * _image;
}

@property (readonly, nonatomic) struct VKRasterTileKey tileKey;

- (void)dealloc;
- (struct CGImage *)_image;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct VKRasterTileKey)tileKey;
- (NSString *)tileForKey:(struct VKRasterTileKey *)arg0;
- (NSString *)imageDataInFormat:(unsigned int)arg0;
- (char)writeImageToFile:(NSString *)arg0 format:(unsigned int)arg1 error:(id *)arg2;
- (VKRasterMapTile *)initWithBitmapData:(struct shared_ptr<ggl::BitmapDataBase>)arg0 tileKey:(struct __shared_weak_count *)arg1 scale:(float)arg2;
- (VKRasterMapTile *)initWithBitmapData:(struct shared_ptr<ggl::BitmapDataBase>)arg0 superKey:(struct __shared_weak_count *)arg1 finalKey:(NSString *)arg2 scale:(struct VKTileKey *)arg3;
- (void)foreachTileOfSize:(unsigned int)arg0 perform:(id)arg1 completion:(/* block */ id)arg2;

@end
