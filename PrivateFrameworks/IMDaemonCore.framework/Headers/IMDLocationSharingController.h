/* Runtime dump - IMDLocationSharingController
 * Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDLocationSharingController : NSObject
{
    FMFSession * _session;
}

+ (IMDLocationSharingController *)sharedInstance;

- (void)dealloc;
- (IMDLocationSharingController *)init;
- (void)_generateLocationSharingItemWithHandleID:(NSObject *)arg0 direction:(long long)arg1 action:(long long)arg2;
- (void)didStartSharingMyLocationWithHandle:(id)arg0;
- (void)didStopSharingMyLocationWithHandle:(id)arg0;
- (void)didStartAbilityToGetLocationForHandle:(id)arg0;
- (void)didStopAbilityToGetLocationForHandle:(id)arg0;
- (void)didFailToHandleMappingPacket:(NSData *)arg0 error:(NSError *)arg1;
- (void)receivedIncomingLocationSharePacket:(NSData *)arg0;
- (void)_forwardMappingPacket:(NSData *)arg0 toID:(NSObject *)arg1 account:(NSObject *)arg2;
- (void)sendMappingPacket:(NSData *)arg0 toHandle:(_NSStdIOFileHandle *)arg1 account:(NSObject *)arg2;

@end
