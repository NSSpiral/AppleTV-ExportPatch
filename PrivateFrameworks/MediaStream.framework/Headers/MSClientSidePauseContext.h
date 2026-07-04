/* Runtime dump - MSClientSidePauseContext
 * Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSClientSidePauseContext : NSObject
{
    NSString * _UUID;
    NSObject<OS_dispatch_queue> * _timerQueue;
    NSXPCConnection * _server;
    MSTimerGate * _gate;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> * timerQueue;
@property (retain, nonatomic) NSXPCConnection * server;
@property (retain, nonatomic) MSTimerGate * gate;

- (NSXPCConnection *)server;
- (void)resume;
- (void).cxx_destruct;
- (MSClientSidePauseContext *)initWithServer:(NSXPCConnection *)arg0;
- (void)setServer:(NSXPCConnection *)arg0;
- (MSTimerGate *)gate;
- (void)setGate:(MSTimerGate *)arg0;
- (void)setTimerQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSObject<OS_dispatch_queue> *)timerQueue;
- (void)timerQueueTimerFired;
- (void)timerQueuePing;

@end
