/* Runtime dump - AVMutableMetadataItem
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMutableMetadataItem : AVMetadataItem
{
    AVMutableMetadataItemInternal * _mutablePriv;
}

@property (copy) NSString * identifier;
@property (copy) NSString * extendedLanguageTag;
@property (copy) NSLocale * locale;
@property struct ? time;
@property struct ? duration;
@property (copy) NSString * dataType;
@property (copy) <NSObject><NSCopying> * value;
@property (copy) NSDictionary * extraAttributes;

+ (AVMetadataItem *)metadataItem;
+ (NSString *)keyPathsForValuesAffectingIdentifier;

- (NSString *)dataType;
- (void)setExtendedLanguageTag:(NSString *)arg0;
- (void)setDataType:(NSString *)arg0;
- (void)setExtraAttributes:(NSDictionary *)arg0;
- (struct ?)duration;
- (NSString *)key;
- (void)setDuration:(struct ?)arg0;
- (NSString *)identifier;
- (<NSObject><NSCopying> *)value;
- (void)setValue:(<NSObject><NSCopying> *)arg0;
- (AVMutableMetadataItem *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(NSString *)arg0;
- (void)setLocale:(NSLocale *)arg0;
- (void)setTime:(struct ?)arg0;
- (struct ?)time;
- (NSLocale *)locale;
- (void)setKey:(NSString *)arg0;
- (NSDictionary *)extraAttributes;
- (void)setKeySpace:(NSString *)arg0;
- (NSString *)extendedLanguageTag;
- (NSString *)keySpace;

@end
