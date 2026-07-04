/* Runtime dump - ATVFlickrParameters
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVFlickrParameters : NSObject
{
    NSString * _method;
    unsigned int _fetchLimit;
    NSArray * _extras;
    NSString * _username;
    NSString * _accountIdentifier;
    NSString * _searchTerm;
    NSString * _photoIdentifier;
    NSString * _photosetIdentifier;
}

@property (copy, nonatomic) NSString * method;
@property (nonatomic) unsigned int fetchLimit;
@property (copy, nonatomic) NSArray * extras;
@property (copy, nonatomic) NSString * username;
@property (copy, nonatomic) NSString * accountIdentifier;
@property (copy, nonatomic) NSString * searchTerm;
@property (copy, nonatomic) NSString * photoIdentifier;
@property (copy, nonatomic) NSString * photosetIdentifier;

+ (NSString *)parametersWithMethod:(NSString *)arg0;

- (NSDictionary *)_parameters;
- (ATVFlickrParameters *)initWithMethod:(NSString *)arg0;
- (NSString *)photosetIdentifier;
- (NSString *)photoIdentifier;
- (NSArray *)extras;
- (void)setExtras:(NSArray *)arg0;
- (void)setPhotoIdentifier:(NSString *)arg0;
- (void)setPhotosetIdentifier:(NSString *)arg0;
- (unsigned int)fetchLimit;
- (NSString *)searchTerm;
- (void)setSearchTerm:(NSString *)arg0;
- (void)setAccountIdentifier:(NSString *)arg0;
- (ATVFlickrParameters *)init;
- (NSString *)stringValue;
- (NSString *)method;
- (void).cxx_destruct;
- (NSString *)accountIdentifier;
- (void)setUsername:(NSString *)arg0;
- (void)setFetchLimit:(unsigned int)arg0;
- (NSString *)username;
- (void)setMethod:(NSString *)arg0;

@end
