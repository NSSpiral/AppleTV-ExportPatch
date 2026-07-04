/* Runtime dump - CoreDAVACEItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVACEItem : CoreDAVItem
{
    CoreDAVPrincipalItem * _principal;
    CoreDAVInvertItem * _invert;
    CoreDAVGrantItem * _grant;
    CoreDAVDenyItem * _deny;
    CoreDAVItemWithNoChildren * _protectedItem;
    CoreDAVItemWithHrefChildItem * _inherited;
}

@property (retain, nonatomic) CoreDAVPrincipalItem * principal;
@property (retain, nonatomic) CoreDAVInvertItem * invert;
@property (retain, nonatomic) CoreDAVGrantItem * grant;
@property (retain, nonatomic) CoreDAVDenyItem * deny;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * protectedItem;
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem * inherited;

+ (NSArray *)copyParseRules;
+ (NSObject *)privilegeItemWithNameSpace:(NSString *)arg0 andName:(id *)arg1;

- (CoreDAVInvertItem *)invert;
- (void)dealloc;
- (CoreDAVACEItem *)init;
- (NSString *)description;
- (CoreDAVDenyItem *)deny;
- (void)write:(char *)arg0;
- (CoreDAVPrincipalItem *)principal;
- (CoreDAVGrantItem *)grant;
- (CoreDAVItemWithHrefChildItem *)inherited;
- (CoreDAVItemWithNoChildren *)protectedItem;
- (void)setPrincipal:(CoreDAVPrincipalItem *)arg0;
- (void)setInvert:(CoreDAVInvertItem *)arg0;
- (void)setGrant:(CoreDAVGrantItem *)arg0;
- (void)setDeny:(CoreDAVDenyItem *)arg0;
- (void)setProtectedItem:(CoreDAVItemWithNoChildren *)arg0;
- (void)setInherited:(CoreDAVItemWithHrefChildItem *)arg0;
- (CoreDAVACEItem *)initWithPrincipal:(CoreDAVPrincipalItem *)arg0 shouldInvert:(char)arg1 action:(int)arg2 withPrivileges:(id)arg3;

@end
