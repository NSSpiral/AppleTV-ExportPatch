/* Runtime dump - BRFieldPkgItem
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRFieldPkgItem : PBCodable <NSCopying>
{
    long long _mtime;
    NSString * _path;
    NSData * _quarantineInfo;
    NSData * _signature;
    NSString * _symlinkContent;
    int _type;
    char _isExecutable;
    char _isWritable;
    struct ? _has;
}

@property (nonatomic) int type;
@property (readonly, nonatomic) char hasPath;
@property (retain, nonatomic) NSString * path;
@property (nonatomic) char hasMtime;
@property (nonatomic) long long mtime;
@property (nonatomic) char hasIsWritable;
@property (nonatomic) char isWritable;
@property (nonatomic) char hasIsExecutable;
@property (nonatomic) char isExecutable;
@property (readonly, nonatomic) char hasSymlinkContent;
@property (retain, nonatomic) NSString * symlinkContent;
@property (readonly, nonatomic) char hasQuarantineInfo;
@property (retain, nonatomic) NSData * quarantineInfo;
@property (readonly, nonatomic) char hasSignature;
@property (retain, nonatomic) NSData * signature;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setType:(int)arg0;
- (int)type;
- (NSString *)path;
- (BRFieldPkgItem *)copyWithZone:(struct _NSZone *)arg0;
- (void)setPath:(NSString *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)clear;
- (void).cxx_destruct;
- (long long)mtime;
- (char)isExecutable;
- (char)isWritable;
- (void)setMtime:(long long)arg0;
- (NSData *)quarantineInfo;
- (void)setQuarantineInfo:(NSData *)arg0;
- (void)setSymlinkContent:(NSString *)arg0;
- (void)setSignature:(NSData *)arg0;
- (char)hasPath;
- (void)setHasMtime:(char)arg0;
- (char)hasMtime;
- (void)setIsWritable:(char)arg0;
- (void)setHasIsWritable:(char)arg0;
- (char)hasIsWritable;
- (void)setIsExecutable:(char)arg0;
- (void)setHasIsExecutable:(char)arg0;
- (char)hasIsExecutable;
- (char)hasSymlinkContent;
- (char)hasQuarantineInfo;
- (char)hasSignature;
- (NSString *)symlinkContent;
- (NSData *)signature;
- (void)updateWithPkgItem:(NSObject *)arg0;
- (BRFieldPkgItem *)initWithPkgItem:(NSObject *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
