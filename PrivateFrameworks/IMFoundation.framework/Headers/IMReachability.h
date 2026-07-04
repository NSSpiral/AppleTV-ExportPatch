/* Runtime dump - IMReachability
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMReachability : NSObject
{
    char _gettingFlags;
    <IMReachabilityDelegate> * _delegate;
    unsigned int _flags;
    NSString * _description;
    void * _reachabilityRef;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) unsigned int flags;
@property (nonatomic) <IMReachabilityDelegate> * delegate;
@property (readonly, nonatomic) char connectionRequired;
@property (nonatomic) NSObject<OS_dispatch_queue> * _queue;
@property (nonatomic) void * reachabilityRef;
@property (retain, nonatomic) NSString * reachabilityDescription;
@property (nonatomic) char gettingFlags;

+ (NSString *)reachabilityWithHostName:(NSString *)arg0;
+ (NSString *)reachabilityWithRemoteAddress:(int)arg0;
+ (NSString *)reachabilityWithLocalAddress:(char)arg0 remoteAddress:(int)arg1;

- (void)setFlags:(unsigned int)arg0;
- (void)dealloc;
- (void)setDelegate:(<IMReachabilityDelegate> *)arg0;
- (NSString *)description;
- (<IMReachabilityDelegate> *)delegate;
- (NSObject<OS_dispatch_queue> *)_queue;
- (unsigned int)flags;
- (IMReachability *)initWithRemoteHost:(NSString *)arg0 delegate:(<IMReachabilityDelegate> *)arg1;
- (void)set_queue:(NSObject<OS_dispatch_queue> *)arg0;
- (IMReachability *)initWithLocalSocketAddress:(NSString *)arg0 remoteSocketAddress:(NSString *)arg1 delegate:(<IMReachabilityDelegate> *)arg2;
- (void)_handleCallbackForSCNetworkReachability:(struct __SCNetworkReachability *)arg0;
- (IMReachability *)_initWithReachabilityRef:(struct __SCNetworkReachability *)arg0 description:(NSString *)arg1 delegate:(<IMReachabilityDelegate> *)arg2;
- (void)_forceGetFlagsIfNecessary;
- (char)connectionRequired;
- (char)gettingFlags;
- (void)setGettingFlags:(char)arg0;
- (NSString *)reachabilityDescription;
- (void)setReachabilityDescription:(NSString *)arg0;
- (void *)reachabilityRef;
- (void)setReachabilityRef:(void *)arg0;

@end
