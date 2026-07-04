/* Runtime dump - AXEventProcessor
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXEventProcessor : NSObject
{
    char _shouldRunHIDReceiveThreadRunloop;
    char _shouldNotifyUserEventOccurred;
    char _ignoreAllHIDEvents;
    char _ignoreAllSystemEvents;
    char _handlingHIDEvents;
    char _handlingSystemEvents;
    NSString * _HIDEventTapIdentifier;
    int _HIDEventTapPriority;
    NSThread * _HIDEventReceiveThread;
    id _HIDEventHandler;
    NSString * _systemEventTapIdentifier;
    int _systemEventTapPriority;
    id _systemEventHandler;
    NSMutableArray * _hidActualEventTapEnabledReasons;
    NSMutableArray * _systemActualEventTapEnabledReasons;
}

@property (nonatomic) char shouldNotifyUserEventOccurred;
@property (retain, nonatomic) NSString * HIDEventTapIdentifier;
@property (nonatomic) int HIDEventTapPriority;
@property (retain, nonatomic) NSThread * HIDEventReceiveThread;
@property (copy, nonatomic) id HIDEventHandler;
@property (nonatomic) char ignoreAllHIDEvents;
@property (readonly, nonatomic) NSArray * hidEventTapEnabledReasons;
@property (retain, nonatomic) NSString * systemEventTapIdentifier;
@property (nonatomic) int systemEventTapPriority;
@property (copy, nonatomic) id systemEventHandler;
@property (nonatomic) char ignoreAllSystemEvents;
@property (readonly, nonatomic) NSArray * systemEventTapEnabledReasons;
@property (nonatomic) char handlingHIDEvents;
@property (retain, nonatomic) NSMutableArray * hidActualEventTapEnabledReasons;
@property (nonatomic) char handlingSystemEvents;
@property (retain, nonatomic) NSMutableArray * systemActualEventTapEnabledReasons;

- (void)dealloc;
- (void)setHIDEventTapIdentifier:(NSString *)arg0;
- (void)setHIDEventTapPriority:(int)arg0;
- (void)setSystemEventTapIdentifier:(NSString *)arg0;
- (void)setSystemEventTapPriority:(int)arg0;
- (void)setHidActualEventTapEnabledReasons:(NSMutableArray *)arg0;
- (void)setSystemActualEventTapEnabledReasons:(NSMutableArray *)arg0;
- (void)_runHIDEventReceiveThread;
- (void)setHIDEventHandler:(id /* block */)arg0;
- (void)setSystemEventHandler:(id /* block */)arg0;
- (void)setHIDEventReceiveThread:(NSObject *)arg0;
- (NSMutableArray *)hidActualEventTapEnabledReasons;
- (NSString *)HIDEventTapIdentifier;
- (char)isHandlingHIDEvents;
- (void)setHandlingHIDEvents:(char)arg0;
- (void)_installHIDEventFilter;
- (void)_uninstallHIDEventFilter;
- (int)HIDEventTapPriority;
- (NSMutableArray *)systemActualEventTapEnabledReasons;
- (NSString *)systemEventTapIdentifier;
- (char)isHandlingSystemEvents;
- (void)setHandlingSystemEvents:(char)arg0;
- (void)_installSystemEventFilter;
- (void)_uninstallSystemEventFilter;
- (int)systemEventTapPriority;
- (char)shouldNotifyUserEventOccurred;
- (id /* block */)HIDEventHandler;
- (id /* block */)systemEventHandler;
- (AXEventProcessor *)initWithHIDTapIdentifier:(NSString *)arg0 HIDEventTapPriority:(int)arg1 systemEventTapIdentifier:(NSString *)arg2 systemEventTapPriority:(int)arg3;
- (NSArray *)hidEventTapEnabledReasons;
- (void)beginHandlingHIDEventsForReason:(NSString *)arg0;
- (void)endHandlingHIDEventsForReason:(NSString *)arg0;
- (void)raiseHIDEventTapPriorityToMaximum;
- (void)restoreHIDEventTapPriorityToDefault;
- (NSArray *)systemEventTapEnabledReasons;
- (void)beginHandlingSystemEventsForReason:(NSString *)arg0;
- (void)endHandlingSystemEventsForReason:(NSString *)arg0;
- (void)raiseSystemEventTapPriorityToMaximum;
- (void)restoreSystemEventTapPriorityToDefault;
- (void)setShouldNotifyUserEventOccurred:(char)arg0;
- (NSThread *)HIDEventReceiveThread;
- (char)ignoreAllHIDEvents;
- (void)setIgnoreAllHIDEvents:(char)arg0;
- (char)ignoreAllSystemEvents;
- (void)setIgnoreAllSystemEvents:(char)arg0;

@end
