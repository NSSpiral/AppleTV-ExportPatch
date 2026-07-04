/* Runtime dump - BRCLocalStatInfo
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCLocalStatInfo : BRCStatInfo
{
    NSNumber * _processingStamp;
    NSNumber * _documentID;
    NSNumber * _fileID;
    BRCGenerationID * _generationID;
    NSNumber * _stagedFileID;
    unsigned int _stagedGenerationID;
    NSString * _localName;
    NSString * _bouncedName;
}

@property (readonly, nonatomic) NSNumber * documentID;
@property (readonly, nonatomic) NSNumber * fileID;
@property (readonly, nonatomic) BRCGenerationID * generationID;
@property (readonly, nonatomic) NSNumber * stagedFileID;
@property (readonly, nonatomic) NSNumber * stagedFileIDForDB;
@property (readonly, nonatomic) unsigned int stagedGenerationID;
@property (readonly, nonatomic) NSString * localName;
@property (readonly, nonatomic) NSString * bouncedName;
@property (readonly, nonatomic) NSNumber * lostStamp;
@property (readonly, nonatomic) NSNumber * fileObjectID;
@property (readonly, nonatomic) NSNumber * processingStamp;

+ (char)supportsSecureCoding;

- (BRCLocalStatInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (BRCLocalStatInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSString *)filename;
- (NSNumber *)fileObjectID;
- (NSNumber *)documentID;
- (NSNumber *)fileID;
- (BRCGenerationID *)generationID;
- (NSString *)localName;
- (NSNumber *)processingStamp;
- (NSNumber *)stagedFileIDForDB;
- (unsigned int)stagedGenerationID;
- (NSString *)bouncedName;
- (NSString *)descriptionWithContext:(NSObject *)arg0 origName:(NSString *)arg1;
- (char)checkStateWithItemID:(NSObject *)arg0 logToFile:(struct __sFILE *)arg1;
- (void)setFilename:(NSString *)arg0;
- (void)updateFromFSAtPath:(NSString *)arg0 itemID:(unsigned long long)arg1 parentID:(NSObject *)arg2 isPackageFault:(char)arg3;
- (BRCLocalStatInfo *)initWithLocalStatInfo:(NSDictionary *)arg0;
- (void)setFilename:(NSString *)arg0 forceRename:(char)arg1;
- (void)_updateMetadataFromFSAtPath:(NSString *)arg0 itemID:(unsigned long long)arg1 parentID:(NSObject *)arg2 isPackageFault:(char)arg3;
- (NSNumber *)lostStamp;
- (BRCLocalStatInfo *)initFromResultSet:(NSSet *)arg0 pos:(int)arg1 container:(NSObject *)arg2;
- (BRCLocalStatInfo *)initWithRelativePath:(NSString *)arg0 itemID:(unsigned long long)arg1 parentID:(NSObject *)arg2;
- (void)_setParentID:(NSObject *)arg0;
- (void)_setCKInfo:(NSDictionary *)arg0;
- (void)_markClearedFromStage;
- (void)_moveItemAsideWithUUIDString;
- (void)_generatedBouncedFilename:(NSString *)arg0;
- (void)_migrateBouncedNameToLocalName;
- (void)_clearBouncedName;
- (unsigned long long)diffAgainstLocalInfo:(NSDictionary *)arg0;
- (void)updateLocationAndMetaFromFSAtPath:(NSString *)arg0 itemID:(unsigned long long)arg1 parentID:(NSObject *)arg2 isPackageFault:(char)arg3;
- (void)_markReserved;
- (void)_markAlmostDead;
- (void)_markDead;
- (void)_markLostAddingBackoffWithMode:(unsigned char)arg0 container:(NSObject *)arg1;
- (void)_markStagedWithFileID:(NSNumber *)arg0 generationID:(unsigned int)arg1 documentID:(NSNumber *)arg2;
- (void)_updateStatMeta:(id)arg0;
- (void)_markLiveFromStageAsFault:(char)arg0;
- (void)_clearFileID;
- (void)_clearGenerationID;
- (NSNumber *)stagedFileID;

@end
