/* Runtime dump - GKHostReachability
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKHostReachability : GKReachability
{
    NSString * _hostName;
    NSError * _error;
}

@property (retain, nonatomic) NSString * hostName;
@property (retain, nonatomic) NSError * error;

+ (NSString *)_gkReachabilityWithHostName:(NSString *)arg0;

- (void)dealloc;
- (void)setHostName:(NSString *)arg0;
- (NSError *)error;
- (NSString *)hostName;
- (void)setError:(NSError *)arg0;

@end
