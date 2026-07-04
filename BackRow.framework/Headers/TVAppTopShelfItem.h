/* Runtime dump - TVAppTopShelfItem
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface TVAppTopShelfItem : NSObject
{
    NSString * _identifier;
    NSString * _title;
    NSString * _type;
    NSString * _descriptionText;
    NSURL * _URL;
    NSDictionary * _coverArt;
}

@property (retain, nonatomic) NSString * identifier;
@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSString * type;
@property (retain, nonatomic) NSString * descriptionText;
@property (retain, nonatomic) NSURL * URL;
@property (retain, nonatomic) NSDictionary * coverArt;

- (char)_parseDictionary:(NSDictionary *)arg0;
- (void)setCoverArt:(NSDictionary *)arg0;
- (id)imageProxyForImageHeight:(float)arg0;
- (NSDictionary *)coverArt;
- (void)setTitle:(NSString *)arg0;
- (TVAppTopShelfItem *)initWithDictionary:(NSDictionary *)arg0;
- (NSString *)identifier;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (NSString *)title;
- (void)setIdentifier:(NSString *)arg0;
- (NSURL *)URL;
- (void)setURL:(NSURL *)arg0;
- (void).cxx_destruct;
- (void)setDescriptionText:(NSString *)arg0;
- (NSString *)descriptionText;

@end
