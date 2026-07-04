/* Runtime dump - CKDPRecordSaveRequestConflictLoserUpdate
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordSaveRequestConflictLoserUpdate : PBCodable <NSCopying>
{
    NSMutableArray * _conflictLoserEtags;
}

@property (retain, nonatomic) NSMutableArray * conflictLoserEtags;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPRecordSaveRequestConflictLoserUpdate *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSMutableArray *)conflictLoserEtags;
- (void)setConflictLoserEtags:(NSMutableArray *)arg0;
- (void)addConflictLoserEtags:(id)arg0;
- (unsigned int)conflictLoserEtagsCount;
- (void)clearConflictLoserEtags;
- (NSObject *)conflictLoserEtagsAtIndex:(unsigned int)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
