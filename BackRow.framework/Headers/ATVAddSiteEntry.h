/* Runtime dump - ATVAddSiteEntry
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVAddSiteEntry : NSObject
{
    NSString * _name;
    NSString * _siteURL;
}

@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSString * siteURL;

+ (NSString *)entryWithName:(NSString *)arg0 andURL:(NSURL *)arg1;

- (void)setSiteURL:(NSString *)arg0;
- (NSString *)siteURL;
- (char)isEqual:(NSObject *)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;

@end
