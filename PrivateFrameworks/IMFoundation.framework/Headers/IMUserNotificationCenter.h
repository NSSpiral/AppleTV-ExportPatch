/* Runtime dump - IMUserNotificationCenter
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMUserNotificationCenter : NSObject
{
    NSMutableDictionary * _identifierToIMUserNotificationQueueMap;
    NSMutableDictionary * _identifierToListenerQueueMap;
    NSMutableDictionary * _identifierToBlockQueueMap;
    NSMutableDictionary * _identifierToRunLoopSourcesMap;
    NSMutableDictionary * _identifierToCFUserNotificationMap;
}

@property (retain, nonatomic) NSMutableDictionary * identifierToIMUserNotificationQueueMap;
@property (retain, nonatomic) NSMutableDictionary * identifierToListenerQueueMap;
@property (retain, nonatomic) NSMutableDictionary * identifierToBlockQueueMap;
@property (retain, nonatomic) NSMutableDictionary * identifierToRunLoopSourcesMap;
@property (retain, nonatomic) NSMutableDictionary * identifierToCFUserNotificationMap;

+ (IMUserNotificationCenter *)sharedInstance;

- (void)dealloc;
- (void)removeListener:(BSActionListener *)arg0;
- (NSString *)_dequeueUserNotificationForIdentifier:(NSString *)arg0;
- (NSString *)_dequeueListenerForIdentifier:(NSString *)arg0;
- (NSString *)_dequeueBlockForIdentifier:(SEL)arg0;
- (NSString *)_frontUserNotificationForIdentifier:(NSString *)arg0;
- (void)_displayNextUserNotificationForIdentifier:(NSString *)arg0;
- (void)addUserNotification:(NSNotification *)arg0 listener:(NSXPCListener *)arg1 completionHandler:(id /* block */)arg2;
- (void)_enqueueUserNotification:(NSNotification *)arg0 forIdentifier:(NSString *)arg1;
- (void)_enqueueListener:(id)arg0 forIdentifier:(NSString *)arg1;
- (void)_enqueueBlock:(id /* block */)arg0 forIdentifier:(/* block */ id)arg1;
- (void)_cancelActiveUserNotificationForIdentifier:(NSString *)arg0;
- (NSString *)_frontListenerForIdentifier:(NSString *)arg0;
- (NSString *)_frontBlockForIdentifier:(SEL)arg0;
- (void)_handleUserNotification:(struct __CFUserNotification *)arg0 responseFlags:(unsigned long)arg1;
- (void)addUserNotification:(NSNotification *)arg0 listener:(NSXPCListener *)arg1;
- (unsigned int)countForIdentifier:(NSString *)arg0;
- (void)removeNotificationsForServiceIdentifier:(NSString *)arg0;
- (void)removeAllListeners;
- (NSMutableDictionary *)identifierToIMUserNotificationQueueMap;
- (void)setIdentifierToIMUserNotificationQueueMap:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)identifierToListenerQueueMap;
- (void)setIdentifierToListenerQueueMap:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)identifierToBlockQueueMap;
- (void)setIdentifierToBlockQueueMap:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)identifierToRunLoopSourcesMap;
- (void)setIdentifierToRunLoopSourcesMap:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)identifierToCFUserNotificationMap;
- (void)setIdentifierToCFUserNotificationMap:(NSMutableDictionary *)arg0;

@end
