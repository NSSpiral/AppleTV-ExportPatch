/* Runtime dump - CoreDAVInvertItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVInvertItem : CoreDAVItem
{
    CoreDAVPrincipalItem * _principal;
}

@property (retain, nonatomic) CoreDAVPrincipalItem * principal;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (CoreDAVInvertItem *)init;
- (NSString *)description;
- (void)write:(char *)arg0;
- (CoreDAVPrincipalItem *)principal;
- (void)setPrincipal:(CoreDAVPrincipalItem *)arg0;

@end
