/* Runtime dump - MKTileOverlayRequesterOp
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTileOverlayRequesterOp : NSObject
{
    struct _GEOTileKey _key;
    MKTileOverlayRequester * _delegate;
    NSData * _data;
}

@property (nonatomic) struct _GEOTileKey key;
@property (weak, nonatomic) MKTileOverlayRequester * delegate;
@property (retain, nonatomic) NSData * data;

- (void)cancel;
- (void)setDelegate:(MKTileOverlayRequester *)arg0;
- (MKTileOverlayRequester *)delegate;
- (struct _GEOTileKey)key;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (void)start;
- (void).cxx_construct;
- (void)setKey:(struct _GEOTileKey)arg0;
- (void).cxx_destruct;

@end
