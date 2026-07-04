/* Runtime dump - GKSessionGlobals
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKSessionGlobals : NSObject
{
    unsigned int * _activePIDList;
    unsigned long _activePIDListSize;
    unsigned long _activePIDListCount;
    struct _opaque_pthread_mutex_t _lock;
}

- (GKSessionGlobals *)init;
- (void)lock;
- (void)unlock;
- (void)unregisterPID:(unsigned int)arg0;
- (void)registerPID:(unsigned int)arg0;
- (char)hasActivePID:(unsigned int)arg0;

@end
