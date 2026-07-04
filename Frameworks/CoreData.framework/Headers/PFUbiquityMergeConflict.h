/* Runtime dump - PFUbiquityMergeConflict
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityMergeConflict : NSMergeConflict
{
    NSDictionary * _ancestorSnapshot;
}

@property (retain) NSDictionary * ancestorSnapshot;

- (PFUbiquityMergeConflict *)initWithSource:(NSObject *)arg0 newVersion:(unsigned int)arg1 oldVersion:(unsigned int)arg2 cachedSnapshot:(NSDictionary *)arg3 persistedSnapshot:(NSDictionary *)arg4;
- (NSDictionary *)ancestorSnapshot;
- (void)setAncestorSnapshot:(NSDictionary *)arg0;
- (void)dealloc;

@end
