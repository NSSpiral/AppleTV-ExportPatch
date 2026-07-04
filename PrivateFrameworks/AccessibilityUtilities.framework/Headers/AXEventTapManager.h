/* Runtime dump - AXEventTapManager
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXEventTapManager : NSObject
{
    NSMutableArray * _eventTaps;
    NSMutableArray * _addedEventTapPairs;
    NSMutableSet * _removedEventTapIdentifiers;
    char _isEnumeratingEventTaps;
    char _shouldReorderEventTaps;
    id _installationGSCallback;
    id _installationHIDCallback;
    NSRecursiveLock * _eventTapLock;
    struct __IOHIDEventSystemClient * _ioSystemPostBackClient;
    id _installationEventRepPost;
}

@property (copy, nonatomic) id installationGSCallback;
@property (copy, nonatomic) id installationHIDCallback;
@property (copy, nonatomic) id installationEventRepPost;

+ (AXEventTapManager *)sharedManager;

- (void)dealloc;
- (AXEventTapManager *)init;
- (NSString *)description;
- (void)setInstallationGSCallback:(id /* block */)arg0;
- (void)setInstallationHIDCallback:(id /* block */)arg0;
- (void)setInstallationEventRepPost:(id)arg0;
- (void)_enumerateEventTapPairsUsingBlock:(id /* block */)arg0;
- (void)_reorderEventTaps;
- (void)_setGSEventTapCallback:(void *)arg0;
- (void)_setHIDEventTapCallback:(void *)arg0;
- (id)_copyCurrentEventTapPairs;
- (void)_setEventTapPriority:(id)arg0 priority:(int)arg1;
- (void)_installHIDFilter:(NSObject *)arg0;
- (void)_installSystemEventTap:(id)arg0;
- (void)_installEventTap:(id)arg0;
- (void)_removeHIDEventTapFilter:(NSObject *)arg0;
- (void)sendHIDSystemEvent:(NSObject *)arg0 senderID:(unsigned long long)arg1;
- (void)sendEvent:(NSObject *)arg0 afterTap:(id)arg1 useGSEvent:(char)arg2 namedTaps:(id)arg3;
- (char)_processHIDEvent:(struct __IOHIDEvent *)arg0 taskPort:(unsigned int)arg1 bundleId:(NSString *)arg2;
- (char)_processGSEvent:(struct ? *)arg0;
- (void)setEventTapPriority:(id)arg0 priority:(int)arg1;
- (id)installEventTap:(id)arg0 identifier:(/* block */ id)arg1 type:(NSObject *)arg2;
- (void)removeEventTap:(AXSubsystemEventTap *)arg0;
- (id /* block */)installationGSCallback;
- (id /* block */)installationHIDCallback;
- (id)installationEventRepPost;

@end
