/* Runtime dump - CardDAVGetAccountPropertiesTaskGroup
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup
{
    NSSet * _addressBookHomes;
    NSSet * _directoryGatewayURLs;
}

@property (readonly, nonatomic) NSSet * addressBookHomes;
@property (readonly, nonatomic) NSSet * directoryGatewayURLs;

- (void)dealloc;
- (NSString *)description;
- (id)_copyAccountPropertiesPropFindElements;
- (void)_setPropertiesFromParsedResponses:(id)arg0;
- (NSSet *)homeSet;
- (NSURL *)directoryGatewayURL;
- (NSSet *)addressBookHomes;
- (NSSet *)directoryGatewayURLs;

@end
