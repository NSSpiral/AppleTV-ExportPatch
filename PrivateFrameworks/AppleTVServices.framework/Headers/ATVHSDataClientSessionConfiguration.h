/* Runtime dump - ATVHSDataClientSessionConfiguration
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSDataClientSessionConfiguration : NSObject <NSSecureCoding>
{
    char _dpapImportInProgress;
    unsigned long _sessionID;
    NSString * _daapDatabaseName;
    unsigned long _daapDatabaseID;
    unsigned long _daapBasePlaylistID;
    unsigned long _daapDatabaseRevision;
    unsigned long _daapProtocolMajorVersion;
    unsigned long _daapProtocolMinorVersion;
    unsigned long _dpapDatabaseID;
    unsigned long _dpapProtocolMajorVersion;
    unsigned long _dpapProtocolMinorVersion;
    unsigned long _photoDatabaseRevision;
    unsigned long _drmRevision;
    struct FPSAPContextOpaque_ * _fairPlaySAPContext;
    unsigned long long _daapDatabasePersistentID;
    unsigned long long _daapBasePlaylistPersistentID;
    unsigned long long _dpapDatabasePersistentID;
}

@property (nonatomic) unsigned long sessionID;
@property (copy, nonatomic) NSString * daapDatabaseName;
@property (nonatomic) unsigned long daapDatabaseID;
@property (nonatomic) unsigned long long daapDatabasePersistentID;
@property (nonatomic) unsigned long daapBasePlaylistID;
@property (nonatomic) unsigned long daapDatabaseRevision;
@property (nonatomic) unsigned long long daapBasePlaylistPersistentID;
@property (nonatomic) unsigned long daapProtocolMajorVersion;
@property (nonatomic) unsigned long daapProtocolMinorVersion;
@property (nonatomic) unsigned long dpapDatabaseID;
@property (nonatomic) char dpapImportInProgress;
@property (nonatomic) unsigned long long dpapDatabasePersistentID;
@property (nonatomic) unsigned long dpapProtocolMajorVersion;
@property (nonatomic) unsigned long dpapProtocolMinorVersion;
@property (nonatomic) unsigned long photoDatabaseRevision;
@property (nonatomic) unsigned long drmRevision;
@property (nonatomic) struct FPSAPContextOpaque_ * fairPlaySAPContext;

+ (char)supportsSecureCoding;

- (ATVHSDataClientSessionConfiguration *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (ATVHSDataClientSessionConfiguration *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void).cxx_destruct;
- (void)setFairPlaySAPContext:(struct FPSAPContextOpaque_ *)arg0;
- (void)setDPAPDatabaseID:(unsigned long)arg0;
- (void)setDPAPDatabasePersistentID:(unsigned long long)arg0;
- (void)setDAAPDatabaseName:(NSString *)arg0;
- (void)setDAAPDatabaseID:(unsigned long)arg0;
- (void)setDAAPDatabasePersistentID:(unsigned long long)arg0;
- (unsigned long)daapDatabaseID;
- (unsigned long long)daapDatabasePersistentID;
- (unsigned long)dpapDatabaseID;
- (unsigned long long)dpapDatabasePersistentID;
- (struct FPSAPContextOpaque_ *)fairPlaySAPContext;
- (unsigned long)photoDatabaseRevision;
- (void)setPhotoDatabaseRevision:(unsigned long)arg0;
- (char)isDPAPImportInProgress;
- (unsigned long)daapProtocolMajorVersion;
- (unsigned long)daapProtocolMinorVersion;
- (void)setDPAPImportInProgress:(char)arg0;
- (void)setDAAPBasePlaylistID:(unsigned long)arg0;
- (void)setDAAPBasePlaylistPersistentID:(unsigned long long)arg0;
- (void)setDAAPProtocolMajorVersion:(unsigned long)arg0;
- (void)setDAAPProtocolMinorVersion:(unsigned long)arg0;
- (void)setDPAPProtocolMajorVersion:(unsigned long)arg0;
- (void)setDPAPProtocolMinorVersion:(unsigned long)arg0;
- (unsigned long)daapDatabaseRevision;
- (void)setDAAPDatabaseRevision:(unsigned long)arg0;
- (unsigned long)drmRevision;
- (void)setDRMRevision:(unsigned long)arg0;
- (unsigned long)daapBasePlaylistID;
- (char)_isEqualToSessionConfiguration:(NSDictionary *)arg0;
- (NSString *)daapDatabaseName;
- (unsigned long long)daapBasePlaylistPersistentID;
- (unsigned long)dpapProtocolMajorVersion;
- (unsigned long)dpapProtocolMinorVersion;
- (unsigned long)sessionID;
- (void)setSessionID:(unsigned long)arg0;

@end
