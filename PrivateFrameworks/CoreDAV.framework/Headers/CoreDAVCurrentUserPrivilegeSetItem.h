/* Runtime dump - CoreDAVCurrentUserPrivilegeSetItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVCurrentUserPrivilegeSetItem : CoreDAVItem
{
    NSMutableSet * _privileges;
}

@property (retain, nonatomic) NSMutableSet * privileges;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (CoreDAVCurrentUserPrivilegeSetItem *)init;
- (NSString *)description;
- (NSMutableSet *)privileges;
- (void)setPrivileges:(NSMutableSet *)arg0;
- (void)addPrivilege:(id)arg0;
- (char)hasPrivilegeWithNameSpace:(NSString *)arg0 andName:(id *)arg1;

@end
