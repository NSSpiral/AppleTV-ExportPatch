/* Runtime dump - SBCClientConfiguration
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
 */

@interface SBCClientConfiguration : NSObject <NSSecureCoding>
{
    SBCPlaybackPositionDomain * _playbackPositionDomain;
}

@property (readonly, nonatomic) SBCPlaybackPositionDomain * playbackPositionDomain;

+ (char)supportsSecureCoding;

- (SBCClientConfiguration *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (SBCPlaybackPositionDomain *)playbackPositionDomain;
- (SBCClientConfiguration *)initWithPlaybackPositionDomain:(SBCPlaybackPositionDomain *)arg0;

@end
