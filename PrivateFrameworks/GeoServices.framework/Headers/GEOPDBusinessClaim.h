/* Runtime dump - GEOPDBusinessClaim
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDBusinessClaim : PBCodable <NSCopying>
{
    NSString * _buttonLabel;
    NSString * _descriptionText;
    NSString * _titleText;
    char _buttonEnabled;
    struct ? _has;
}

@property (readonly, nonatomic) char hasButtonLabel;
@property (retain, nonatomic) NSString * buttonLabel;
@property (nonatomic) char hasButtonEnabled;
@property (nonatomic) char buttonEnabled;
@property (readonly, nonatomic) char hasTitleText;
@property (retain, nonatomic) NSString * titleText;
@property (readonly, nonatomic) char hasDescriptionText;
@property (retain, nonatomic) NSString * descriptionText;

+ (NSData *)businessClaimForPlaceData:(NSData *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDBusinessClaim *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setTitleText:(NSString *)arg0;
- (void)setButtonLabel:(NSString *)arg0;
- (void)setDescriptionText:(NSString *)arg0;
- (char)hasButtonLabel;
- (void)setButtonEnabled:(char)arg0;
- (void)setHasButtonEnabled:(char)arg0;
- (char)hasButtonEnabled;
- (char)hasTitleText;
- (char)hasDescriptionText;
- (NSString *)buttonLabel;
- (char)buttonEnabled;
- (NSString *)titleText;
- (NSString *)descriptionText;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
