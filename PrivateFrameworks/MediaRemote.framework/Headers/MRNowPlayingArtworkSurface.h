/* Runtime dump - MRNowPlayingArtworkSurface
 * Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingArtworkSurface : MRNowPlayingArtwork
{
    struct __IOSurface * _surface;
}

@property (readonly, nonatomic) struct __IOSurface * surface;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)type;
- (MRNowPlayingArtworkSurface *)initWithSurface:(struct __IOSurface *)arg0;
- (char)hasArtworkData;
- (void)bindToXPCDictionary:(NSDictionary *)arg0;
- (NSData *)copyImageData;
- (struct __IOSurface *)surface;

@end
