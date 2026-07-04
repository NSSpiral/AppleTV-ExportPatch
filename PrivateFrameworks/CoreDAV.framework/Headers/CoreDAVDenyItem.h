/* Runtime dump - CoreDAVDenyItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVDenyItem : CoreDAVItem
{
    NSMutableSet * _privileges;
}

@property (retain, nonatomic) NSMutableSet * privileges;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (CoreDAVDenyItem *)init;
- (NSString *)description;
- (void)write:(char *)arg0;
- (NSMutableSet *)privileges;
- (void)setPrivileges:(NSMutableSet *)arg0;
- (void)addPrivilege:(id)arg0;

@end
