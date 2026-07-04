/* Runtime dump - MRMediaRemoteServiceClient
 * Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRMediaRemoteServiceClient : NSObject
{
    NSObject<OS_dispatch_queue> * _serialQueue;
    unsigned int _registeredNowPlayingObservers;
    NSMutableArray * _registeredOrigins;
    MRAVRoutingClientController * _routingClientController;
    char _receivesExternalScreenTypeChangedNotifications;
    char _receivesSupportedCommandsNotifications;
    char _receivesRoutesChangedNotifications;
    char _receivesOriginChangedNotifications;
    char _receivesPlaybackErrorNotifications;
    NSArray * _nowPlayingNotificationObservers;
    NSArray * _routingNotificationObservers;
    NSArray * _originNotificationObservers;
    struct MRMediaRemoteService * _service;
    NSArray * _externalScreenTypeNotificationObservers;
}

@property (readonly, nonatomic) struct MRMediaRemoteService * service;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * serviceQueue;
@property (readonly, nonatomic) char registeredForNowPlayingNotifications;
@property (nonatomic) char receivesExternalScreenTypeChangedNotifications;
@property (nonatomic) char receivesSupportedCommandsNotifications;
@property (nonatomic) char receivesRoutesChangedNotifications;
@property (nonatomic) char receivesOriginChangedNotifications;
@property (nonatomic) char receivesPlaybackErrorNotifications;
@property (readonly, nonatomic) NSArray * registeredOrigins;
@property (retain, nonatomic) NSArray * externalScreenTypeNotificationObservers;
@property (retain, nonatomic) NSArray * nowPlayingNotificationObservers;
@property (retain, nonatomic) NSArray * routingNotificationObservers;
@property (retain, nonatomic) NSArray * originNotificationObservers;

+ (MRMediaRemoteServiceClient *)sharedServiceClient;

- (NSObject<OS_dispatch_queue> *)serviceQueue;
- (void)dealloc;
- (MRMediaRemoteServiceClient *)init;
- (struct MRMediaRemoteService *)service;
- (void)registerForNowPlayingNotificationsWithQueue:(NSObject *)arg0;
- (void)unregisterForNowPlayingNotifications;
- (void)setReceivesSupportedCommandsNotifications:(char)arg0;
- (void)setRoutingNotificationObservers:(NSArray *)arg0;
- (void)setExternalScreenTypeNotificationObservers:(NSArray *)arg0;
- (void)setOriginNotificationObservers:(NSArray *)arg0;
- (void)setNowPlayingNotificationObservers:(NSArray *)arg0;
- (char)isRegisteredForNowPlayingNotifications;
- (void)setReceivesRoutesChangedNotifications:(char)arg0;
- (void)setReceivesExternalScreenTypeChangedNotifications:(char)arg0;
- (void)setReceivesOriginChangedNotifications:(char)arg0;
- (NSArray *)registeredOrigins;
- (char)registerOrigin:(struct _MROrigin *)arg0;
- (char)unregisterOrigin:(struct _MROrigin *)arg0;
- (void)unregisterAllOrigins;
- (void)fetchPickableRoutesWithCategory:(NSString *)arg0 completion:(id /* block */)arg1;
- (NSArray *)nowPlayingNotificationObservers;
- (NSArray *)routingNotificationObservers;
- (NSArray *)originNotificationObservers;
- (char)receivesExternalScreenTypeChangedNotifications;
- (char)receivesSupportedCommandsNotifications;
- (char)receivesRoutesChangedNotifications;
- (char)receivesOriginChangedNotifications;
- (char)receivesPlaybackErrorNotifications;
- (void)setReceivesPlaybackErrorNotifications:(char)arg0;
- (NSArray *)externalScreenTypeNotificationObservers;

@end
