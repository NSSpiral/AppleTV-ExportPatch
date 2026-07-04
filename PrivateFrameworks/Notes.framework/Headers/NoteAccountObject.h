/* Runtime dump - NoteAccountObject
 * Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NoteAccountObject : NoteCollectionObject
{
    NSDictionary * _constraints;
}

@property (retain, nonatomic) NSNumber * type;
@property (retain, nonatomic) NSString * constraintsPath;
@property (retain, nonatomic) NSString * accountIdentifier;
@property (retain, nonatomic) NSSet * stores;
@property (retain, nonatomic) NoteStoreObject * defaultStore;
@property (retain, nonatomic) NSString * name;
@property (nonatomic) int accountType;
@property (retain, nonatomic) NSString * pathToConstraintsPlist;
@property (retain, nonatomic) NSDictionary * constraints;

- (NSDictionary *)constraints;
- (void).cxx_destruct;
- (void)setAccountType:(int)arg0;
- (int)accountType;
- (void)setConstraints:(NSDictionary *)arg0;
- (NSPredicate *)predicateForNotes;
- (NSDictionary *)collectionInfo;
- (char)shouldMarkNotesAsDeleted;
- (NSObject *)storeForExternalId:(NSObject *)arg0;
- (NSString *)basicAccountIdentifier;
- (void)setPathToConstraintsPlist:(NSString *)arg0;
- (NSString *)pathToConstraintsPlist;
- (char)validateDefaultStore:(id *)arg0 error:(id *)arg1;
- (void)didTurnIntoFault;

@end
