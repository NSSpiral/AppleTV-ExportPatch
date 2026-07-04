/* Runtime dump - NoteStoreObject
 * Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NoteStoreObject : NoteCollectionObject

@property (retain, nonatomic) NSString * externalIdentifier;
@property (retain, nonatomic) NoteAccountObject * account;
@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSSet * changes;
@property (retain, nonatomic) NSString * syncAnchor;

- (id)notesForIntegerIds:(id)arg0;
- (NSPredicate *)predicateForNotes;
- (NSDictionary *)collectionInfo;
- (id)notesForServerIntIds:(id)arg0 ascending:(char)arg1 limit:(unsigned int)arg2;
- (NSObject *)notesForServerIntIdsInRange:(struct _NSRange)arg0 ascending:(char)arg1 limit:(unsigned int)arg2;
- (id)notesForServerIds:(id)arg0;
- (id)notesForGUIDs:(id)arg0;
- (id)notesForServerIntIds:(id)arg0;
- (NSObject *)notesForServerIntIdsInRange:(struct _NSRange)arg0;
- (unsigned int)maximumServerIntId;
- (unsigned long long)minimumSequenceNumberForServerIntIds:(id)arg0;
- (NSString *)basicAccountIdentifier;

@end
