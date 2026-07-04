/* Runtime dump - CoreDAVACLItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVACLItem : CoreDAVItem
{
    NSMutableSet * _accessControlEntities;
}

@property (retain, nonatomic) NSMutableSet * accessControlEntities;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (CoreDAVACLItem *)init;
- (NSString *)description;
- (NSMutableSet *)accessControlEntities;
- (void)addACE:(id)arg0;
- (void)setAccessControlEntities:(NSMutableSet *)arg0;
- (id)notGrantedSubsetOfACEs:(id)arg0;
- (id)liveACEs;

@end
