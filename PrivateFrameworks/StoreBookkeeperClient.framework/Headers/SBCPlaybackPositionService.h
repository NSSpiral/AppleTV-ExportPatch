/* Runtime dump - SBCPlaybackPositionService
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
 */

@interface SBCPlaybackPositionService : SBCXPCService <SBCPlaybackPositionServiceProtocol>
{
    char _usingPlaybackPositions;
    SBCPlaybackPositionDomain * _playbackPositionDomain;
}

@property (readonly, nonatomic) SBCPlaybackPositionDomain * playbackPositionDomain;
@property (readonly) char usingPlaybackPositions;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)serviceForSyncDomain:(NSString *)arg0;
+ (NSString *)_serviceForPlaybackPositionDomain:(NSString *)arg0;
+ (NSString *)serviceForValueDomain:(NSString *)arg0;
+ (Class)XPCServiceInterfaceClass;

- (void)savePlaybackPositionEntity:(SEL)arg0 isCheckpoint:(char)arg1;
- (void)beginAccessingPlaybackPositionEntities;
- (void)endAccessingPlaybackPositionEntities;
- (void).cxx_destruct;
- (void)synchronizeImmediatelyWithCompletionHandler:(SEL)arg0;
- (SBCPlaybackPositionDomain *)playbackPositionDomain;
- (void)deletePlaybackPositionEntity:(SEL)arg0;
- (void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(SEL)arg0;
- (SBCPlaybackPositionService *)initWithPlaybackPositionDomain:(SBCPlaybackPositionDomain *)arg0;
- (void)didConnectToService;
- (void)deletePlaybackPositionEntities;
- (void)pullPlaybackPositionEntity:(SEL)arg0 completionBlock:(id /* block */)arg1;
- (void)pushPlaybackPositionEntity:(SEL)arg0 completionBlock:(id /* block */)arg1;
- (char)usingPlaybackPositions;

@end
