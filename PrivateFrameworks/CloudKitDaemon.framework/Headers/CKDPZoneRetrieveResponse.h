/* Runtime dump - CKDPZoneRetrieveResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPZoneRetrieveResponse : PBCodable <NSCopying>
{
    NSMutableArray * _zoneSummarys;
}

@property (retain, nonatomic) NSMutableArray * zoneSummarys;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPZoneRetrieveResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)addZoneSummary:(CKDPZoneRetrieveResponseZoneSummary *)arg0;
- (unsigned int)zoneSummarysCount;
- (void)clearZoneSummarys;
- (NSObject *)zoneSummaryAtIndex:(unsigned int)arg0;
- (NSMutableArray *)zoneSummarys;
- (void)setZoneSummarys:(NSMutableArray *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
