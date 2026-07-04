/* Runtime dump - CoreThemeAlignmentMigrationPolicy
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface CoreThemeAlignmentMigrationPolicy : NSEntityMigrationPolicy

- (char)beginEntityMapping:(id)arg0 manager:(NSObject *)arg1 error:(id *)arg2;
- (char)createDestinationInstancesForSourceInstance:(id)arg0 entityMapping:(NSEntityMapping *)arg1 manager:(NSObject *)arg2 error:(id *)arg3;
- (char)createRelationshipsForDestinationInstance:(id)arg0 entityMapping:(NSEntityMapping *)arg1 manager:(NSObject *)arg2 error:(id *)arg3;
- (char)performCustomValidationForEntityMapping:(id)arg0 manager:(NSObject *)arg1 error:(id *)arg2;

@end
