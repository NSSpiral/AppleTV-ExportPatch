/* Runtime dump - GEOPlaceDataCacheUsageFeedbackCollection
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataCacheUsageFeedbackCollection : PBCodable <NSCopying>
{
    NSMutableArray * _cacheFeedbacks;
}

@property (retain, nonatomic) NSMutableArray * cacheFeedbacks;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPlaceDataCacheUsageFeedbackCollection *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setCacheFeedbacks:(NSMutableArray *)arg0;
- (void)addCacheFeedback:(GEOPlaceDataCacheFeedback *)arg0;
- (unsigned int)cacheFeedbacksCount;
- (void)clearCacheFeedbacks;
- (NSObject *)cacheFeedbackAtIndex:(unsigned int)arg0;
- (NSMutableArray *)cacheFeedbacks;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
