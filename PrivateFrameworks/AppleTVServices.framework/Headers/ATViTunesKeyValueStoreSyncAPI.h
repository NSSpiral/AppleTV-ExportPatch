/* Runtime dump - ATViTunesKeyValueStoreSyncAPI
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATViTunesKeyValueStoreSyncAPI : NSObject

+ (void)_callSyncHandler:(id /* block */)arg0 queue:(/* block */ id)arg1 success:(char)arg2 newVersion:(char)arg3 rejectedKeys:(NSArray *)arg4 putOKKeys:(NSArray *)arg5 peerPutItems:(NSArray *)arg6;
+ (void)syncDomain:(NSString *)arg0 version:(NSString *)arg1 conflictDetection:(int)arg2 puts:(char *)arg3 queue:(NSObject *)arg4 handler:(<BRSelectionHandler> *)arg5;

@end
