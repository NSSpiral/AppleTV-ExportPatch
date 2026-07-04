/* Runtime dump - LSResumableActivitiesControlManager
 * Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSResumableActivitiesControlManager : NSObject
{
    NSXPCConnection * connection;
    id _delegate;
}

@property id delegate;
@property (retain) NSXPCConnection * connection;

+ (NSObject *)resumableActivitiesControlManager;

- (void)terminateServer;
- (NSString *)matchingUUIDForString:(NSString *)arg0;
- (id)advertisedItemUUID;
- (NSObject *)allUUIDsOfType:(unsigned int)arg0;
- (id)enabledUUIDs;
- (id)currentAdvertisedItemUUID;
- (NSDictionary *)debuggingInfo;
- (void)restartServer;
- (void)injectBTLEItem:(NSObject *)arg0 type:(unsigned int)arg1 identifier:(NSString *)arg2 title:(NSString *)arg3 activityPayload:(NSData *)arg4 frameworkPayload:(NSData *)arg5 payloadDelay:(double)arg6;
- (void)callWillSaveDelegate:(NSObject *)arg0;
- (void)callWillSaveDelegate:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)callDidSaveDelegate:(NSObject *)arg0;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (LSResumableActivitiesControlManager *)init;
- (NSObject *)delegate;
- (NSXPCConnection *)connection;
- (void)setConnection:(NSXPCConnection *)arg0;
- (NSNumber *)status;

@end
