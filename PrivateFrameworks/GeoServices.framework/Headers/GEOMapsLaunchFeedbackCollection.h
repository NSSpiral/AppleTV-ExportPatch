/* Runtime dump - GEOMapsLaunchFeedbackCollection
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapsLaunchFeedbackCollection : PBCodable <NSCopying>
{
    struct ? _sessionId;
    NSString * _sourceAppBundleId;
    NSString * _uriScheme;
    struct ? _has;
}

@property (nonatomic) char hasSessionId;
@property (nonatomic) struct ? sessionId;
@property (readonly, nonatomic) char hasSourceAppBundleId;
@property (retain, nonatomic) NSString * sourceAppBundleId;
@property (readonly, nonatomic) char hasUriScheme;
@property (retain, nonatomic) NSString * uriScheme;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOMapsLaunchFeedbackCollection *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (struct ?)sessionId;
- (char)hasSessionId;
- (void)setSessionId:(struct ?)arg0;
- (void)setHasSessionId:(char)arg0;
- (void)setSourceAppBundleId:(NSString *)arg0;
- (void)setUriScheme:(NSString *)arg0;
- (char)hasSourceAppBundleId;
- (char)hasUriScheme;
- (NSString *)sourceAppBundleId;
- (NSString *)uriScheme;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
