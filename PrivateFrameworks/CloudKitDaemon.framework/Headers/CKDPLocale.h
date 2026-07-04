/* Runtime dump - CKDPLocale
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPLocale : PBCodable <NSCopying>
{
    NSString * _activeKeyboard;
    NSMutableArray * _enabledKeyboards;
    NSString * _languageCode;
    NSString * _regionCode;
}

@property (readonly, nonatomic) char hasLanguageCode;
@property (retain, nonatomic) NSString * languageCode;
@property (readonly, nonatomic) char hasRegionCode;
@property (retain, nonatomic) NSString * regionCode;
@property (retain, nonatomic) NSMutableArray * enabledKeyboards;
@property (readonly, nonatomic) char hasActiveKeyboard;
@property (retain, nonatomic) NSString * activeKeyboard;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)activeKeyboard;
- (CKDPLocale *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSString *)languageCode;
- (void)setLanguageCode:(NSString *)arg0;
- (NSString *)regionCode;
- (void)setRegionCode:(NSString *)arg0;
- (NSMutableArray *)enabledKeyboards;
- (void)addEnabledKeyboards:(id)arg0;
- (unsigned int)enabledKeyboardsCount;
- (void)clearEnabledKeyboards;
- (NSObject *)enabledKeyboardsAtIndex:(unsigned int)arg0;
- (void)setActiveKeyboard:(NSString *)arg0;
- (char)hasLanguageCode;
- (char)hasRegionCode;
- (char)hasActiveKeyboard;
- (void)setEnabledKeyboards:(NSMutableArray *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
