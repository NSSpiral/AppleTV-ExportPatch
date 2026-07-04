/* Runtime dump - PFUbiquityToManyConflictDiff
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityToManyConflictDiff : NSObject
{
    NSMutableSet * _insertedObjectIDs;
    NSMutableSet * _deletedObjectIDs;
    NSString * _relationshipKey;
}

@property (readonly, nonatomic) NSMutableSet * insertedObjectIDs;
@property (readonly, nonatomic) NSMutableSet * deletedObjectIDs;
@property (readonly, nonatomic) NSString * relationshipKey;

- (NSMutableSet *)insertedObjectIDs;
- (NSMutableSet *)deletedObjectIDs;
- (PFUbiquityToManyConflictDiff *)initForRelationshipAtKey:(NSString *)arg0;
- (void)diffWithLogSnapshot:(NSDictionary *)arg0 andPreviousSnapshot:(NSObject *)arg1;
- (NSString *)relationshipKey;
- (void)dealloc;
- (PFUbiquityToManyConflictDiff *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;

@end
