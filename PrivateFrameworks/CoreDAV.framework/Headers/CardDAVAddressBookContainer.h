/* Runtime dump - CardDAVAddressBookContainer
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CardDAVAddressBookContainer : CoreDAVContainer
{
    NSString * _maxResourceSize;
    NSString * _maxImageSize;
    NSURL * _meCardURL;
}

@property (retain, nonatomic) NSString * maxResourceSize;
@property (retain, nonatomic) NSString * maxImageSize;
@property (retain, nonatomic) NSURL * meCardURL;
@property (readonly, nonatomic) char isAddressBook;
@property (readonly, nonatomic) char isSharedAddressBook;
@property (readonly, nonatomic) char isSearchAddressBook;

+ (NSObject *)copyPropertyMappingsForParser;

- (void)dealloc;
- (NSString *)description;
- (void)applyParsedProperties:(NSDictionary *)arg0;
- (NSString *)maxResourceSize;
- (NSString *)maxImageSize;
- (void)setMaxResourceSize:(NSString *)arg0;
- (void)setMaxImageSize:(NSString *)arg0;
- (void)setMeCardURL:(NSURL *)arg0;
- (char)isAddressBook;
- (char)isSearchAddressBook;
- (char)isSharedAddressBook;
- (NSURL *)meCardURL;

@end
