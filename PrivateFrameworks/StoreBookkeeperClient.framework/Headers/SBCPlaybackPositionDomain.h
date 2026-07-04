/* Runtime dump - SBCPlaybackPositionDomain
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
 */

@interface SBCPlaybackPositionDomain : NSObject <NSCopying, NSSecureCoding>
{
    char _supportsSyncProtocol;
    NSString * _domainIdentifier;
    NSString * _ubiquitousDatabasePath;
    NSString * _foreignDatabasePath;
}

@property (readonly, nonatomic) NSString * domainIdentifier;
@property (retain, nonatomic) NSString * ubiquitousDatabasePath;
@property (readonly, nonatomic) NSString * foreignDatabasePath;
@property (nonatomic) char supportsSyncProtocol;

+ (char)supportsSecureCoding;
+ (NSString *)domainForSyncingMusicLibraryWithLibraryPath:(NSString *)arg0;
+ (SBCPlaybackPositionDomain *)allSyncingDomains;
+ (NSArray *)domainForExtrasValues;

- (NSString *)domainIdentifier;
- (SBCPlaybackPositionDomain *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (SBCPlaybackPositionDomain *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (char)supportsSyncProtocol;
- (SBCPlaybackPositionDomain *)initWithDomainIdentifier:(NSString *)arg0 foreignDatabasePath:(NSString *)arg1;
- (void)setSupportsSyncProtocol:(char)arg0;
- (void)setUbiquitousDatabasePath:(NSString *)arg0;
- (NSString *)ubiquitousDatabasePath;
- (NSString *)foreignDatabasePath;

@end
