/* Runtime dump - TSPObjectInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPObjectInfo : NSObject
{
    NSHashTable * _referencedDataHashTable;
    NSHashTable * _referencedObjectsHashTable;
    NSArray * _referencedData;
    NSArray * _referencedObjects;
}

@property (readonly, nonatomic) NSArray * referencedData;
@property (readonly, nonatomic) NSArray * referencedObjects;

- (TSPObjectInfo *)initWithObject:(NSObject *)arg0 referenceDepth:(unsigned int)arg1;
- (NSArray *)referencedData;
- (NSArray *)referencedObjects;
- (void)visitObject:(NSObject *)arg0 rootObject:(NSObject *)arg1 referenceDepth:(unsigned int)arg2;
- (void)visitObjectReferences:(id)arg0 rootObject:(NSObject *)arg1 referenceDepth:(unsigned int)arg2;
- (TSPObjectInfo *)init;
- (void).cxx_destruct;

@end
