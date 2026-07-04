/* Runtime dump - WPZoneTracker
 * Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPZoneTracker : NSObject <XPCClientDelegate>
{
    char _wantEntry;
    char _wantExit;
    int _state;
    XPCClient * _connection;
    <WPZoneTrackerDelegate> * _delegate;
}

@property int state;
@property (retain, nonatomic) XPCClient * connection;
@property (weak, nonatomic) <WPZoneTrackerDelegate> * delegate;
@property (nonatomic) char wantEntry;
@property (nonatomic) char wantExit;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)connectionInterrupted;
- (void)dealloc;
- (void)setDelegate:(<WPZoneTrackerDelegate> *)arg0;
- (NSString *)description;
- (<WPZoneTrackerDelegate> *)delegate;
- (int)state;
- (void)setState:(int)arg0;
- (void).cxx_destruct;
- (XPCClient *)connection;
- (void)setConnection:(XPCClient *)arg0;
- (WPZoneTracker *)initWithDelegate:(<WPZoneTrackerDelegate> *)arg0 queue:(NSObject *)arg1;
- (WPZoneTracker *)initWithDelegate:(<WPZoneTrackerDelegate> *)arg0;
- (void)messageArrived:(NSObject *)arg0;
- (void)connectionDied;
- (void)changeState:(int)arg0;
- (void)unregisterAllZoneChanges;
- (void)setWantEntry:(char)arg0;
- (void)setWantExit:(char)arg0;
- (char)wantEntry;
- (char)wantExit;
- (void)registerZonesFailed:(id)arg0;
- (void)zonesEntered:(id)arg0;
- (void)zonesExited:(id)arg0;
- (void)registerForZoneChangesMatching:(id)arg0;
- (void)unregisterForZoneChanges:(id)arg0;
- (void)getCurrentTrackedZones;

@end
