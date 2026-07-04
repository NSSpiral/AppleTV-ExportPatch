/* Runtime dump - DAPriorityManager
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAPriorityManager : NSObject
{
    NSMapTable * _clientsToPriorityRequests;
    int _currentPriority;
    int _foregroundDataclasses;
}

@property (retain, nonatomic) NSMapTable * clientsToPriorityRequests;
@property (nonatomic) int foregroundDataclasses;
@property (readonly, nonatomic) int currentPriority;

+ (void)vendPriorityManagers;
+ (DAPriorityManager *)sharedManager;

- (void)dealloc;
- (DAPriorityManager *)init;
- (void).cxx_destruct;
- (void)bumpDataclassesToUIPriority:(int)arg0;
- (void)requestPriority:(int)arg0 forClient:(struct _GEOTileKey)arg1 dataclasses:(int)arg2;
- (id)appIDsToDataclasses;
- (void)_setNewPriority;
- (void)_SBApplicationStateChanged:(NSNotification *)arg0;
- (NSMapTable *)clientsToPriorityRequests;
- (int)_recalculatePriority;
- (void)_setForegroundDataclasses:(int)arg0;
- (void)setClientsToPriorityRequests:(NSMapTable *)arg0;
- (int)currentPriority;
- (int)foregroundDataclasses;
- (void)setForegroundDataclasses:(int)arg0;
- (NSString *)stateString;

@end
