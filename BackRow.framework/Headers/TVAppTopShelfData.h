/* Runtime dump - TVAppTopShelfData
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface TVAppTopShelfData : NSObject
{
    int _latestProtocolVersion;
    NSString * _title;
    NSString * _version;
    NSString * _displayType;
    NSArray * _items;
}

@property (nonatomic) int latestProtocolVersion;
@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSString * version;
@property (retain, nonatomic) NSString * displayType;
@property (retain, nonatomic) NSArray * items;

- (char)_parseDictionary:(NSDictionary *)arg0;
- (TVAppTopShelfData *)initWithJSONData:(NSData *)arg0;
- (int)latestProtocolVersion;
- (void)setLatestProtocolVersion:(int)arg0;
- (void)setTitle:(NSString *)arg0;
- (TVAppTopShelfData *)initWithDictionary:(NSDictionary *)arg0;
- (void)setDisplayType:(NSString *)arg0;
- (NSString *)title;
- (NSArray *)items;
- (void)setItems:(NSArray *)arg0;
- (NSString *)displayType;
- (void)setVersion:(NSString *)arg0;
- (NSString *)version;
- (void).cxx_destruct;

@end
