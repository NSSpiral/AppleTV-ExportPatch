/* Runtime dump - MCBook
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCBook : NSObject <NSCopying>
{
    NSString * _author;
    NSString * _title;
    NSString * _kind;
    NSString * _fullPath;
    NSString * _version;
    NSString * _persistentID;
    NSNumber * _iTunesStoreID;
    NSString * _buyParams;
    NSString * _state;
    NSNumber * _downloadIdentifier;
    MCBook * _previousVersion;
}

@property (copy, nonatomic) NSString * author;
@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * kind;
@property (copy, nonatomic) NSString * fullPath;
@property (copy, nonatomic) NSString * version;
@property (copy, nonatomic) NSString * persistentID;
@property (retain, nonatomic) NSNumber * iTunesStoreID;
@property (copy, nonatomic) NSString * buyParams;
@property (retain, nonatomic) NSString * state;
@property (retain, nonatomic) NSNumber * downloadIdentifier;
@property (retain, nonatomic) MCBook * previousVersion;

- (NSNumber *)downloadIdentifier;
- (MCBook *)init;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (NSString *)state;
- (void)setState:(NSString *)arg0;
- (NSString *)title;
- (MCBook *)copyWithZone:(struct _NSZone *)arg0;
- (void)setVersion:(NSString *)arg0;
- (NSString *)version;
- (void).cxx_destruct;
- (NSString *)kind;
- (void)setBuyParams:(NSString *)arg0;
- (NSString *)buyParams;
- (void)setKind:(NSString *)arg0;
- (NSString *)friendlyName;
- (MCBook *)initWithManifestDictionary:(NSDictionary *)arg0;
- (void)setFullPath:(NSString *)arg0;
- (NSNumber *)iTunesStoreID;
- (void)setITunesStoreID:(NSNumber *)arg0;
- (void)setDownloadIdentifier:(NSNumber *)arg0;
- (NSDictionary *)manifestDictionary;
- (void)updateBookAttributesByCopyingFromBook:(id)arg0;
- (MCBook *)previousVersion;
- (void)setPreviousVersion:(MCBook *)arg0;
- (NSString *)persistentID;
- (void)setAuthor:(NSString *)arg0;
- (NSString *)author;
- (NSString *)fullPath;
- (void)setPersistentID:(NSString *)arg0;

@end
