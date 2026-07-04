/* Runtime dump - KNBuildChunkIdentifier
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNBuildChunkIdentifier : NSObject <NSCopying>
{
    NSUUID * _buildUUID;
    int _chunkID;
}

@property (readonly, nonatomic) NSUUID * buildUUID;
@property (readonly, nonatomic) int chunkID;
@property (readonly, nonatomic) char valid;
@property (readonly, nonatomic) char empty;

+ (NSString *)emptyIdentifier;

- (void)saveToMessage:(struct BuildChunkIdentifierArchive *)arg0;
- (NSUUID *)buildUUID;
- (KNBuildChunkIdentifier *)initEmptyIdentifier;
- (int)chunkID;
- (KNBuildChunkIdentifier *)initWithBuild:(KNBuild *)arg0 chunkID:(int)arg1;
- (NSString *)resolveToChunkUsingContext:(NSObject *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (char)isValid;
- (KNBuildChunkIdentifier *)copyWithZone:(struct _NSZone *)arg0;
- (char)isEmpty;
- (KNBuildChunkIdentifier *)initWithMessage:(struct BuildChunkIdentifierArchive *)arg0;

@end
