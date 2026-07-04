/* Runtime dump - BRCLocalVersion
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCLocalVersion : BRCVersion
{
    CKRecord * _uploadedAssets;
    NSError * _uploadError;
}

@property (retain, nonatomic) CKRecord * uploadedAssets;
@property (retain, nonatomic) NSError * uploadError;

+ (char)supportsSecureCoding;

- (BRCLocalVersion *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (BRCLocalVersion *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSError *)uploadError;
- (NSString *)descriptionWithContext:(NSObject *)arg0;
- (void)updateFromFSAtPath:(NSString *)arg0;
- (BRCLocalVersion *)initFromResultSet:(NSSet *)arg0 pos:(int)arg1;
- (BRCLocalVersion *)initWithVersion:(NSString *)arg0;
- (void)sqliteBind:(struct sqlite3_stmt *)arg0 index:(int)arg1;
- (void)_clearSignatures:(unsigned int)arg0 isPackage:(char)arg1;
- (BRCLocalVersion *)initWithLocalVersion:(char)arg0;
- (void)updateLocationAndMetaFromFSAtPath:(NSString *)arg0 updateFilename:(char)arg1;
- (id)isPackageObj;
- (id)sizeObj;
- (unsigned long long)diffAgainstLocalVersion:(NSString *)arg0;
- (BRCLocalVersion *)initForPackage:(char)arg0;
- (BRCLocalVersion *)initWithServerVersion:(NSString *)arg0;
- (char)isMissingUploadsWithDiffs:(unsigned long long)arg0;
- (CKRecord *)uploadedAssets;
- (void)setUploadedAssets:(CKRecord *)arg0;
- (void)setUploadError:(NSError *)arg0;

@end
