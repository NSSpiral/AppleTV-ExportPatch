/* Runtime dump - BRMarimbaSlideshowMusicSetting
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRMarimbaSlideshowMusicSetting : NSObject
{
    id _serverID;
    unsigned int _clientType;
    NSNumber * _playlistID;
}

@property (retain, nonatomic) id serverID;
@property (nonatomic) unsigned int clientType;
@property (retain, nonatomic) NSNumber * playlistID;

- (void)setPlaylistID:(NSNumber *)arg0;
- (NSNumber *)playlistID;
- (BRMarimbaSlideshowMusicSetting *)initWithServer:(NSObject *)arg0 playlistID:(NSNumber *)arg1;
- (BRMarimbaSlideshowMusicSetting *)initWithServerID:(ATVHSDataServerID *)arg0 clientType:(unsigned int)arg1 playlistID:(NSNumber *)arg2;
- (void)dealloc;
- (NSString *)description;
- (unsigned int)clientType;
- (NSURL *)serverID;
- (void)setServerID:(NSURL *)arg0;
- (void)setClientType:(unsigned int)arg0;

@end
