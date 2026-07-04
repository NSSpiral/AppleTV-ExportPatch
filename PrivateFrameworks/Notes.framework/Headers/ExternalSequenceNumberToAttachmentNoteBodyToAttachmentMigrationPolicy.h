/* Runtime dump - ExternalSequenceNumberToAttachmentNoteBodyToAttachmentMigrationPolicy
 * Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ExternalSequenceNumberToAttachmentNoteBodyToAttachmentMigrationPolicy : NSEntityMigrationPolicy

- (char)createDestinationInstancesForSourceInstance:(id)arg0 entityMapping:(NSEntityMapping *)arg1 manager:(NSObject *)arg2 error:(id *)arg3;
- (char)createRelationshipsForDestinationInstance:(id)arg0 entityMapping:(NSEntityMapping *)arg1 manager:(NSObject *)arg2 error:(id *)arg3;
- (char)endEntityMapping:(id)arg0 manager:(NSObject *)arg1 error:(id *)arg2;
- (NSDictionary *)unarchiveObjectWithExternalRepresentation:(NSData *)arg0;

@end
