/* Runtime dump - BRCDesiredVersion
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDesiredVersion : BRCVersion <PQLBindable>
{
    id _flags;
    NSError * _downloadError;
    NSString * _serverName;
}

@property (retain, nonatomic) NSError * downloadError;
@property (readonly, nonatomic) NSString * serverName;
@property (nonatomic) unsigned int options;
@property (readonly, nonatomic) char isFault;
@property (readonly, nonatomic) char wantsContent;
@property (readonly, nonatomic) char userInitiated;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;

- (BRCDesiredVersion *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (BRCDesiredVersion *)copyWithZone:(struct _NSZone *)arg0;
- (void)setOptions:(unsigned int)arg0;
- (unsigned int)options;
- (void).cxx_destruct;
- (char)isFault;
- (char)wantsContent;
- (NSError *)downloadError;
- (NSString *)descriptionWithContext:(NSObject *)arg0;
- (void)sqliteBind:(struct sqlite3_stmt *)arg0 index:(int)arg1;
- (char)userInitiated;
- (void)setDownloadError:(NSError *)arg0;
- (BRCDesiredVersion *)initWithDesiredVersion:(BRCDesiredVersion *)arg0;
- (BRCDesiredVersion *)initWithServerVersion:(NSString *)arg0 serverName:(NSString *)arg1;
- (char)isStillValidForEtag:(id)arg0;
- (NSString *)serverName;

@end
