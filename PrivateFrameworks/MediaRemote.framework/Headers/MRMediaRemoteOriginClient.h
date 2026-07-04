/* Runtime dump - MRMediaRemoteOriginClient
 * Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRMediaRemoteOriginClient : NSObject
{
    char _canBeNowPlayingApp;
    char _isOverrideApp;
    char _keepAlive;
    id _commandHandlerBlock;
    NSMutableDictionary * _commandHandlerBlocks;
    int _notifyRestoreClientStateForLaunch;
    int _notifyDidLaunchToken;
    NSDictionary * _nowPlayingInfo;
    MRNowPlayingArtwork * _nowPlayingArtwork;
    struct _MROrigin * _origin;
    unsigned int _routeDiscoveryMode;
}

@property (readonly, nonatomic) struct _MROrigin * origin;
@property (nonatomic) char canBeNowPlayingApp;
@property (nonatomic) char isOverrideApp;
@property (nonatomic) char keepAlive;
@property (retain, nonatomic) NSDictionary * nowPlayingInfo;
@property (retain, nonatomic) MRNowPlayingArtwork * nowPlayingArtwork;
@property (nonatomic) unsigned int routeDiscoveryMode;
@property (readonly, copy, nonatomic) NSArray * commandHandlerBlocks;

- (unsigned int)routeDiscoveryMode;
- (void)setRouteDiscoveryMode:(unsigned int)arg0;
- (NSDictionary *)nowPlayingInfo;
- (void)dealloc;
- (struct _MROrigin *)origin;
- (void)setCanBeNowPlayingApp:(char)arg0;
- (char)isOverrideApp;
- (void)setIsOverrideApp:(char)arg0;
- (void)setKeepAlive:(char)arg0;
- (MRNowPlayingArtwork *)nowPlayingArtwork;
- (void)setNowPlayingArtwork:(MRNowPlayingArtwork *)arg0;
- (void)removeCommandHandlerBlockForKey:(NSString *)arg0;
- (void)addCommandHandlerBlock:(id /* block */)arg0 forKey:(/* block */ id)arg1;
- (NSArray *)commandHandlerBlocks;
- (void)_avSystemControllerServerConnectionDiedNotification:(NSNotification *)arg0;
- (char)canBeNowPlayingApp;
- (MRMediaRemoteOriginClient *)initWithOrigin:(struct _MROrigin *)arg0;
- (char)keepAlive;
- (void)setNowPlayingInfo:(NSDictionary *)arg0;

@end
