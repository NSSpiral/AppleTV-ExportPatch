/* Runtime dump - NSPersistentStoreRequest
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentStoreRequest : NSObject <NSCopying>
{
    NSArray * _affectedStores;
}

@property (retain, nonatomic) NSArray * affectedStores;
@property (readonly) unsigned int requestType;

+ (void)initialize;

- (NSArray *)affectedStores;
- (void)setAffectedStores:(NSArray *)arg0;
- (void)dealloc;
- (NSPersistentStoreRequest *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)requestType;

@end
