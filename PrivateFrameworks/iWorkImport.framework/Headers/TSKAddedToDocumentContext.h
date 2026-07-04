/* Runtime dump - TSKAddedToDocumentContext
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKAddedToDocumentContext : NSObject

@property (retain) <TSKMultiTableRemapping> * multiTableRemapper;

+ (NSString *)movingContext;
+ (NSString *)unhidingContext;
+ (NSString *)unarchivingContext;
+ (NSObject *)importingContextWithImporterID:(NSObject *)arg0;
+ (NSObject *)importingMasterTemplateContextWithImporterID:(NSObject *)arg0;
+ (NSString *)pastingContext;
+ (NSString *)pastingMatchStyleContext;
+ (NSString *)dragMoveContext;
+ (NSString *)moveSectionContext;
+ (NSString *)dragCopyContext;
+ (NSString *)insertingPrototypeContext;
+ (NSString *)undoDeleteContext;
+ (NSString *)exportFootnoteContext;
+ (NSString *)changeTrackingSubstorageForCopyContext;

- (char)wasUnarchived;
- (char)autoUpdateSmartFields;
- (NSObject *)importerID;
- (char)wasImportedFromMasterTemplate;
- (void)addDrawables:(TPFloatingDrawables *)arg0;
- (id)addedDrawables;
- (char)wasPasted;
- (char)uniqueBookmarks;
- (char)syncChanges;
- (<TSKMultiTableRemapping> *)multiTableRemapper;
- (void)setMultiTableRemapper:(<TSKMultiTableRemapping> *)arg0;
- (char)matchStyle;
- (char)wasDragOperation;
- (char)wasDragMoved;
- (char)preserveChangeTracking;
- (void)addInsertedTableInfo:(NSDictionary *)arg0;
- (id)insertedTableInfos;
- (char)wasMoved;
- (NSString *)undoContext;
- (char)wasUnhidden;
- (char)wasUndoDelete;
- (char)changeTrackingSubstorage;
- (char)wasImported;
- (char)invokeDOLC;
- (void)addDrawable:(GQHPagesFloatingDrawable *)arg0;

@end
