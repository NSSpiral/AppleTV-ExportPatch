/* Runtime dump - BookmarkDAVGetAccountPropertiesTaskGroup
 * Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

@interface BookmarkDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup
{
    NSSet * _bookmarkHomes;
}

@property (readonly, nonatomic) NSSet * bookmarkHomes;

- (void)dealloc;
- (NSString *)description;
- (NSSet *)bookmarkHomes;
- (id)_copyAccountPropertiesPropFindElements;
- (void)_setPropertiesFromParsedResponses:(id)arg0;
- (NSSet *)homeSet;

@end
