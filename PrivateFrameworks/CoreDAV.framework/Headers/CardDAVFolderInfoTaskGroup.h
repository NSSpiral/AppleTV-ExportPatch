/* Runtime dump - CardDAVFolderInfoTaskGroup
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CardDAVFolderInfoTaskGroup : CoreDAVContainerInfoTaskGroup
{
    NSSet * _directoryGatewayURLs;
}

- (void)dealloc;
- (CardDAVFolderInfoTaskGroup *)initWithAccountInfoProvider:(NSDictionary *)arg0 containerURLs:(NSSet *)arg1 directoryGatewayURLs:(NSSet *)arg2 taskManager:(NSObject *)arg3;
- (int)containerInfoDepthForURL:(NSURL *)arg0;
- (NSURL *)_copyContainerWithURL:(NSString *)arg0 andProperties:(NSDictionary *)arg1;
- (id)_copyContainerParserMappings;

@end
