/* Runtime dump - TRNowPlayingArtworkUpdatePacketEvent
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRNowPlayingArtworkUpdatePacketEvent : TRPacketEvent
{
    NSData * _artworkData;
    NSString * _artworkMIMEType;
    NSDictionary * _nowPlayingInfo;
}

@property (readonly, nonatomic) NSData * artworkData;
@property (readonly, nonatomic) NSString * artworkMIMEType;
@property (readonly, nonatomic) NSDictionary * nowPlayingInfo;

+ (unsigned int)_packetEventType;

- (NSDictionary *)nowPlayingInfo;
- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)artworkMIMEType;
- (NSData *)artworkData;
- (NSString *)_initWithVersion:(unsigned int)arg0 payloadDictionary:(NSDictionary *)arg1;
- (TRNowPlayingArtworkUpdatePacketEvent *)initArtworkData:(NSData *)arg0 artworkMIMEType:(NSString *)arg1 nowPlayingInfo:(NSDictionary *)arg2;

@end
