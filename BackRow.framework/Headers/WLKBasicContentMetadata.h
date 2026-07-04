/* Runtime dump - WLKBasicContentMetadata
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface WLKBasicContentMetadata : NSObject
{
    char _isEvod;
    unsigned int _contentType;
    NSString * _canonicalID;
    NSString * _title;
    NSString * _shortTitle;
    NSString * _descriptiveText;
    NSNumber * _commonSenseBeginsAge;
    NSArray * _categories;
}

@property (readonly, nonatomic) unsigned int contentType;
@property (readonly, copy, nonatomic) NSString * canonicalID;
@property (readonly, nonatomic) char isEvod;
@property (readonly, copy, nonatomic) NSString * title;
@property (readonly, copy, nonatomic) NSString * shortTitle;
@property (readonly, copy, nonatomic) NSString * descriptiveText;
@property (readonly, nonatomic) NSNumber * commonSenseBeginsAge;
@property (readonly, copy, nonatomic) NSArray * categories;

+ (unsigned int)contentTypeForString:(NSString *)arg0;
+ (Class)_classForContentType:(unsigned int)arg0;

- (NSString *)canonicalID;
- (char)isEvod;
- (NSString *)descriptiveText;
- (NSNumber *)commonSenseBeginsAge;
- (NSString *)shortTitle;
- (WLKBasicContentMetadata *)init;
- (WLKBasicContentMetadata *)initWithDictionary:(NSDictionary *)arg0;
- (NSString *)title;
- (NSArray *)categories;
- (void).cxx_destruct;
- (unsigned int)contentType;

@end
