/* Runtime dump - MRMediaRemoteOriginClientManager
 * Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRMediaRemoteOriginClientManager : NSObject
{
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMutableDictionary * _originClients;
}

+ (MRMediaRemoteOriginClientManager *)sharedManager;

- (void)dealloc;
- (MRMediaRemoteOriginClientManager *)init;
- (NSObject *)localClient;
- (id)clientForOrigin:(struct _MROrigin *)arg0;

@end
