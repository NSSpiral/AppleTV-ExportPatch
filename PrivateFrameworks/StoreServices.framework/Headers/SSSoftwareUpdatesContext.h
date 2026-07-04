/* Runtime dump - SSSoftwareUpdatesContext
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSoftwareUpdatesContext : NSObject <SSXPCCoding, NSCopying, NSMutableCopying>
{
    NSString * _clientIdentifierHeader;
    char _forced;
    NSArray * _softwareTypes;
}

@property (readonly, nonatomic) char forced;
@property (readonly, copy, nonatomic) NSArray * softwareTypes;
@property (readonly, copy, nonatomic) NSString * clientIdentifierHeader;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSSoftwareUpdatesContext *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (SSSoftwareUpdatesContext *)copyWithZone:(struct _NSZone *)arg0;
- (SSSoftwareUpdatesContext *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSString *)clientIdentifierHeader;
- (NSArray *)softwareTypes;
- (char)isForced;

@end
