/* Runtime dump - NotesMigrationMapping
 * Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NotesMigrationMapping : NSObject
{
    NSManagedObjectModel * _destinationModel;
    NSArray * _sourceModels;
    NSString * _descriptionString;
    int _type;
}

@property (retain) NSManagedObjectModel * destinationModel;
@property (copy) NSArray * sourceModels;
@property (copy) NSString * descriptionString;
@property int type;

+ (NSString *)customMappingFromSourceModelName:(NSString *)arg0 toDestinationModelName:(NSString *)arg1;
+ (NSArray *)inferredMappingFromSourceModelNames:(id)arg0 toDestinationModelName:(NSString *)arg1;
+ (NSString *)modelForModelName:(NSString *)arg0;
+ (NSArray *)descriptionStringFromSourceStoreNames:(id)arg0 destinationStoreName:(NSString *)arg1;
+ (NotesMigrationMapping *)mappings;

- (NSManagedObjectModel *)destinationModel;
- (NSString *)description;
- (void)setType:(int)arg0;
- (int)type;
- (void).cxx_destruct;
- (char)canMigrateStoreMetadata:(NSDictionary *)arg0;
- (NSDictionary *)sourceModelForStoreMetadata:(NSDictionary *)arg0;
- (NSDictionary *)mappingModelForStoreMetadata:(NSDictionary *)arg0;
- (void)setSourceModels:(NSArray *)arg0;
- (void)setDestinationModel:(NSManagedObjectModel *)arg0;
- (void)setDescriptionString:(NSString *)arg0;
- (NSArray *)sourceModels;
- (NSString *)descriptionString;

@end
