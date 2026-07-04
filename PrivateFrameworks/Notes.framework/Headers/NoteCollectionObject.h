/* Runtime dump - NoteCollectionObject
 * Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NoteCollectionObject : NSManagedObject

- (NSPredicate *)predicateForNotes;
- (NSDictionary *)collectionInfo;
- (NSString *)basicAccountIdentifier;

@end
