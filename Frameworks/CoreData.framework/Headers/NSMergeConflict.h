/* Runtime dump - NSMergeConflict
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSMergeConflict : NSObject
{
    id _source;
    id _snapshot1;
    id _snapshot2;
    id _snapshot3;
    unsigned int _newVersion;
    unsigned int _oldVersion;
}

@property (readonly, retain) NSManagedObject * sourceObject;
@property (readonly, retain) NSDictionary * objectSnapshot;
@property (readonly, retain) NSDictionary * cachedSnapshot;
@property (readonly, retain) NSDictionary * persistedSnapshot;
@property (readonly) unsigned int newVersionNumber;
@property (readonly) unsigned int oldVersionNumber;

- (NSMergeConflict *)initWithSource:(NSObject *)arg0 newVersion:(unsigned int)arg1 oldVersion:(unsigned int)arg2 cachedSnapshot:(NSDictionary *)arg3 persistedSnapshot:(NSDictionary *)arg4;
- (NSMergeConflict *)initWithSource:(NSObject *)arg0 newVersion:(unsigned int)arg1 oldVersion:(unsigned int)arg2 snapshot1:(NSObject *)arg3 snapshot2:(NSObject *)arg4 snapshot3:(NSObject *)arg5;
- (NSDictionary *)ancestorSnapshot;
- (NSDictionary *)objectSnapshot;
- (NSDictionary *)cachedSnapshot;
- (NSDictionary *)persistedSnapshot;
- (unsigned int)oldVersionNumber;
- (NSString *)valueForKey:(NSMutableDictionary *)arg0;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)dealloc;
- (NSString *)description;
- (NSManagedObject *)sourceObject;
- (unsigned int)newVersionNumber;

@end
