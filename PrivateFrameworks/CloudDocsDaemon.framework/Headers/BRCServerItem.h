/* Runtime dump - BRCServerItem
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCServerItem : NSObject <BRCItem>
{
    BRCAccountSession * _session;
    BRCServerZone * _zone;
    BRCLocalContainer * _container;
    unsigned int _sharingOptions;
    char _needsInsert;
    NSNumber * _ownerKey;
    BRCItemID * _itemID;
    NSString * _originalName;
    BRCStatInfo * _st;
    BRCVersion * _latestVersion;
    BRCServerZone * _serverZone;
    long long _rank;
}

@property (readonly, nonatomic) long long rank;
@property (readonly, nonatomic) NSString * originalName;
@property (readonly, nonatomic) BRCStatInfo * st;
@property (readonly, nonatomic) BRCVersion * latestVersion;
@property (readonly, nonatomic) char isDead;
@property (readonly, nonatomic) char isLive;
@property (readonly, nonatomic) char isAlias;
@property (readonly, nonatomic) char isPackage;
@property (readonly, nonatomic) char isDocument;
@property (readonly, nonatomic) char isDirectory;
@property (readonly, nonatomic) BRCItemID * itemID;
@property (readonly, nonatomic) NSNumber * ownerKey;
@property (readonly, nonatomic) BRCAccountSession * session;
@property (readonly, nonatomic) BRCServerZone * serverZone;
@property (readonly, nonatomic) BRCLocalContainer * container;
@property (nonatomic) unsigned int sharingOptions;

+ (char)supportsSecureCoding;

- (BRCServerItem *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (BRCServerItem *)copyWithZone:(struct _NSZone *)arg0;
- (BRCLocalContainer *)container;
- (void).cxx_destruct;
- (BRCAccountSession *)session;
- (char)isDocument;
- (char)isAlias;
- (BRCStatInfo *)st;
- (char)isDead;
- (BRCItemID *)itemID;
- (unsigned int)sharingOptions;
- (NSNumber *)ownerKey;
- (NSString *)descriptionWithContext:(NSObject *)arg0;
- (BRCServerZone *)serverZone;
- (char)isDirectory;
- (char)isPackage;
- (unsigned long long)diffAgainstServerItem:(NSObject *)arg0;
- (BRCVersion *)latestVersion;
- (long long)rank;
- (char)validateLoggingToFile:(struct __sFILE *)arg0;
- (char)isLive;
- (void)setSharingOptions:(unsigned int)arg0;
- (BRCServerItem *)initFromPQLResultSet:(NSSet *)arg0 serverZone:(BRCServerZone *)arg1 error:(id *)arg2;
- (BRCServerItem *)initWithServerItem:(BRCServerItem *)arg0;
- (NSObject *)newLocalItemWithServerZone:(BRCServerZone *)arg0 dbRowID:(unsigned long long)arg1;
- (NSString *)originalName;

@end
