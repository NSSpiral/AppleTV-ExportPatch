/* Runtime dump - IDSContinuity
 * Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSContinuity : NSObject
{
    _IDSContinuity * _internal;
}

@property (readonly) int state;

- (void)dealloc;
- (int)state;
- (IDSContinuity *)initWithDelegate:(NSObject *)arg0 queue:(NSObject *)arg1;
- (void)startAdvertisingOfType:(int)arg0 withData:(NSData *)arg1 withOptions:(unsigned long long)arg2;
- (void)stopAdvertisingOfType:(int)arg0;
- (void)startScanningForType:(int)arg0 withData:(NSData *)arg1 peers:(id)arg2 withOptions:(unsigned long long)arg3;
- (void)startScanningForType:(int)arg0 withData:(NSData *)arg1 withOptions:(unsigned long long)arg2;
- (void)stopScanningForType:(int)arg0;
- (void)connectToPeer:(NSObject *)arg0;
- (void)disconnectFromPeer:(NSObject *)arg0;
- (void)startTrackingPeer:(NSObject *)arg0;
- (void)stopTrackingPeer:(NSObject *)arg0;
- (void)startTrackingPeer:(NSObject *)arg0 forType:(int)arg1;
- (void)stopTrackingPeer:(NSObject *)arg0 forType:(int)arg1;

@end
