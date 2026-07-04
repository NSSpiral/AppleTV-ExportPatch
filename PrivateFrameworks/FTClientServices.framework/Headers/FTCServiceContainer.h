/* Runtime dump - FTCServiceContainer
 * Image: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
 */

@interface FTCServiceContainer : NSObject
{
    FTCServiceMonitor * _monitor;
    NSMutableSet * _listeners;
}

@property (retain, nonatomic) FTCServiceMonitor * monitor;
@property (readonly, retain, nonatomic) NSMutableSet * listeners;

- (FTCServiceContainer *)initWithServiceType:(int)arg0;
- (void)dealloc;
- (NSMutableSet *)listeners;
- (char)removeListenerID:(NSObject *)arg0;
- (char)hasListenerID:(NSObject *)arg0;
- (char)addListenerID:(NSObject *)arg0;
- (FTCServiceMonitor *)monitor;
- (void)setMonitor:(FTCServiceMonitor *)arg0;

@end
