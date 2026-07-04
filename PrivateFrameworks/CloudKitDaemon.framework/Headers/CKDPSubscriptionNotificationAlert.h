/* Runtime dump - CKDPSubscriptionNotificationAlert
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPSubscriptionNotificationAlert : PBCodable <NSCopying>
{
    NSString * _actionLocKey;
    NSString * _launchImage;
    NSMutableArray * _localizedArguments;
    NSString * _localizedKey;
    NSString * _soundName;
    NSString * _text;
}

@property (readonly, nonatomic) char hasText;
@property (retain, nonatomic) NSString * text;
@property (readonly, nonatomic) char hasLocalizedKey;
@property (retain, nonatomic) NSString * localizedKey;
@property (retain, nonatomic) NSMutableArray * localizedArguments;
@property (readonly, nonatomic) char hasActionLocKey;
@property (retain, nonatomic) NSString * actionLocKey;
@property (readonly, nonatomic) char hasLaunchImage;
@property (retain, nonatomic) NSString * launchImage;
@property (readonly, nonatomic) char hasSoundName;
@property (retain, nonatomic) NSString * soundName;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)soundName;
- (CKDPSubscriptionNotificationAlert *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (char)hasText;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setSoundName:(NSString *)arg0;
- (void)addLocalizedArguments:(NSDictionary *)arg0;
- (void)setLocalizedKey:(NSString *)arg0;
- (unsigned int)localizedArgumentsCount;
- (void)clearLocalizedArguments;
- (NSObject *)localizedArgumentsAtIndex:(unsigned int)arg0;
- (void)setActionLocKey:(NSString *)arg0;
- (void)setLaunchImage:(NSString *)arg0;
- (char)hasLocalizedKey;
- (char)hasActionLocKey;
- (char)hasLaunchImage;
- (char)hasSoundName;
- (NSString *)localizedKey;
- (NSMutableArray *)localizedArguments;
- (void)setLocalizedArguments:(NSMutableArray *)arg0;
- (NSString *)actionLocKey;
- (NSString *)launchImage;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
