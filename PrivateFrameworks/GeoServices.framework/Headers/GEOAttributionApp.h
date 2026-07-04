/* Runtime dump - GEOAttributionApp
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAttributionApp : PBCodable <NSCopying>
{
    NSString * _appBundleIdentifier;
    NSMutableArray * _handledSchemes;
}

@property (retain, nonatomic) NSString * appBundleIdentifier;
@property (retain, nonatomic) NSMutableArray * handledSchemes;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOAttributionApp *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSMutableArray *)handledSchemes;
- (void)setAppBundleIdentifier:(NSString *)arg0;
- (void)setHandledSchemes:(NSMutableArray *)arg0;
- (void)addHandledSchemes:(id)arg0;
- (unsigned int)handledSchemesCount;
- (void)clearHandledSchemes;
- (NSObject *)handledSchemesAtIndex:(unsigned int)arg0;
- (NSString *)appBundleIdentifier;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
