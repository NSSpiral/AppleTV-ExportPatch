/* Runtime dump - MKTileOverlayTile
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTileOverlayTile : NSObject
{
    struct ? _path;
    struct ? _frame;
    float _scale;
    NSData * _image;
}

@property (nonatomic) struct ? path;
@property (nonatomic) struct ? frame;
@property (nonatomic) float scale;
@property (retain, nonatomic) NSData * image;

- (void)setImage:(NSData *)arg0;
- (void)setFrame:(struct ?)arg0;
- (struct ?)frame;
- (NSString *)description;
- (float)scale;
- (struct ?)path;
- (NSData *)image;
- (void)setScale:(float)arg0;
- (void)setPath:(struct ?)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
