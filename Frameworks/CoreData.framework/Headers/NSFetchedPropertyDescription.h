/* Runtime dump - NSFetchedPropertyDescription
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSFetchedPropertyDescription : NSPropertyDescription
{
    void * _reserved5;
    void * _reserved6;
    NSFetchRequest * _fetchRequest;
    NSString * _lazyFetchRequestEntityName;
}

@property (retain) NSFetchRequest * fetchRequest;

- (unsigned int)_propertyType;
- (void)_createCachesAndOptimizeState;
- (void)_writeIntoData:(NSData *)arg0 propertiesDict:(id)arg1 uniquedPropertyNames:(id)arg2 uniquedStrings:(id)arg3 uniquedData:(NSData *)arg4 entitiesSlots:(id)arg5 fetchRequests:(id)arg6;
- (void)dealloc;
- (NSFetchedPropertyDescription *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSFetchedPropertyDescription *)copyWithZone:(struct _NSZone *)arg0;
- (char)isTransient;
- (char)isReadOnly;
- (void)setFetchRequest:(NSFetchRequest *)arg0;
- (NSFetchRequest *)fetchRequest;

@end
