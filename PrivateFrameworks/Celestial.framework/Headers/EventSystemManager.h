/* Runtime dump - EventSystemManager
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface EventSystemManager : NSObject
{
    struct __IOHIDEventSystemClient * eventSystemClient;
    NSMutableArray * clientList;
    struct __CFRunLoop * runLoop;
    char manageAccel;
    int accelEventIndex;
    int accelUpdateInternalUS;
}

+ (EventSystemManager *)sharedEventSystem;

- (void)dealloc;
- (EventSystemManager *)init;
- (void)addClient:(NSObject *)arg0;
- (void)removeClient:(NSObject *)arg0;
- (char)managingAccel;
- (void)setAccelUpdateInterval:(double)arg0;
- (void)updateClientState;
- (void)refreshEventSystem;
- (struct __IOHIDEventSystemClient *)eventSystemClient;
- (NSMutableArray *)clientList;

@end
