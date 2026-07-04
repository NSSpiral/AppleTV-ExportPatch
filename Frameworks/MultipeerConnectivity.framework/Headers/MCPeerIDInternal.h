/* Runtime dump - MCPeerIDInternal
 * Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCPeerIDInternal : NSObject
{
    NSString * _idString;
    NSString * _displayName;
    unsigned long long _pid64;
}

@property (readonly, nonatomic) NSString * idString;
@property (readonly, nonatomic) unsigned long long pid64;
@property (readonly, nonatomic) NSString * displayName;

- (NSString *)idString;
- (MCPeerIDInternal *)initWithIDString:(NSString *)arg0 pid64:(unsigned long long)arg1 displayName:(NSString *)arg2;
- (unsigned long long)pid64;
- (void)dealloc;
- (NSString *)displayName;

@end
