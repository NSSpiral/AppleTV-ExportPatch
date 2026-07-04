/* Runtime dump - NoteResurrectionMergePolicy
 * Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NoteResurrectionMergePolicy : NSMergePolicy

+ (NoteResurrectionMergePolicy *)sharedNoteResurrectionMergePolicy;

- (NSObject *)snapshotFromRecord:(NSObject *)arg0;
- (id)localStoreForNote:(NSNotification *)arg0;
- (char)accountExists:(id)arg0;
- (char)resolveConflicts:(id)arg0 error:(id *)arg1;

@end
