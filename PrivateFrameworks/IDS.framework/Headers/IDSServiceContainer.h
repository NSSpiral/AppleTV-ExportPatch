/* Runtime dump - IDSServiceContainer
 * Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSServiceContainer : NSObject
{
    IDSServiceMonitor * _monitor;
    NSMutableSet * _listeners;
}

@property (retain, nonatomic) IDSServiceMonitor * monitor;
@property (readonly, retain, nonatomic) NSMutableSet * listeners;

- (void)dealloc;
- (NSMutableSet *)listeners;
- (IDSServiceContainer *)initWithService:(NSObject *)arg0;
- (char)removeListenerID:(NSObject *)arg0;
- (char)hasListenerID:(NSObject *)arg0;
- (char)addListenerID:(NSObject *)arg0;
- (IDSServiceMonitor *)monitor;
- (void)setMonitor:(IDSServiceMonitor *)arg0;

@end
