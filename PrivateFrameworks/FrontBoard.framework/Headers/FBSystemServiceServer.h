/* Runtime dump - FBSystemServiceServer
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSystemServiceServer : BSBaseXPCServer

+ (FBSystemServiceServer *)sharedInstance;

- (void)dealloc;
- (void)_handleConnect:(id)arg0 forClient:(struct _GEOTileKey)arg1;
- (void)_handleUIAppCheckIn:(id)arg0 forClient:(struct _GEOTileKey)arg1;
- (void)_handleSetBadgeValue:(id)arg0 forClient:(struct _GEOTileKey)arg1;
- (void)_handleGetBadgeValue:(id)arg0 forClient:(struct _GEOTileKey)arg1;
- (void)_handleAppRequestBrightness:(id)arg0 forClient:(struct _GEOTileKey)arg1;
- (void)_handleSetNextWakeInterval:(id)arg0 forClient:(struct _GEOTileKey)arg1;
- (void)_handleIsClientLoggingEnabled:(id)arg0 forClient:(struct _GEOTileKey)arg1;
- (void)_handleSystemApplicationBundleIdentifier:(NSString *)arg0;
- (void)_handlePidForApplication:(id)arg0;
- (void)_handleCanActivateApplication:(id)arg0;
- (void)_handleActivateApplication:(id)arg0;
- (void)_handleActivateURL:(NSURL *)arg0;
- (void)_handleActions:(id)arg0;
- (void)_handleTerminateApplication:(id)arg0;
- (void)_handleTerminateApplicationGroup:(NSObject *)arg0;
- (void)_handleShutdown:(id)arg0 forClient:(struct _GEOTileKey)arg1;
- (NSString *)_stringFromMessage:(NSString *)arg0 key:(char *)arg1;
- (Class)queue_classForNewClientConnection:(NSURLConnection *)arg0;
- (void)queue_clientAdded:(id)arg0;
- (void)queue_clientRemoved:(id)arg0;
- (void)queue_handleMessage:(NSString *)arg0 client:(NSObject *)arg1;
- (char)ping;

@end
