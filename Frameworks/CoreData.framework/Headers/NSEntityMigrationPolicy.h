/* Runtime dump - NSEntityMigrationPolicy
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSEntityMigrationPolicy : NSObject

- (char)beginEntityMapping:(id)arg0 manager:(NSObject *)arg1 error:(id *)arg2;
- (char)createDestinationInstancesForSourceInstance:(id)arg0 entityMapping:(NSEntityMapping *)arg1 manager:(NSObject *)arg2 error:(id *)arg3;
- (char)endInstanceCreationForEntityMapping:(id)arg0 manager:(NSObject *)arg1 error:(id *)arg2;
- (char)createRelationshipsForDestinationInstance:(id)arg0 entityMapping:(NSEntityMapping *)arg1 manager:(NSObject *)arg2 error:(id *)arg3;
- (char)endRelationshipCreationForEntityMapping:(id)arg0 manager:(NSObject *)arg1 error:(id *)arg2;
- (char)performCustomValidationForEntityMapping:(id)arg0 manager:(NSObject *)arg1 error:(id *)arg2;
- (char)endEntityMapping:(id)arg0 manager:(NSObject *)arg1 error:(id *)arg2;
- (NSObject *)_nonNilValueOrDefaultValueForAttribute:(NSObject *)arg0 source:(NSObject *)arg1 destination:(NSObject *)arg2;

@end
