/* Runtime dump - MRNowPlayingArtwork
 * Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingArtwork : NSObject

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) char hasArtworkData;

+ (NSDictionary *)createNowPlayingArtworkFromXPCDictionary:(NSDictionary *)arg0;

- (unsigned int)type;
- (char)hasArtworkData;
- (void)bindToXPCDictionary:(NSDictionary *)arg0;
- (NSData *)copyImageData;

@end
