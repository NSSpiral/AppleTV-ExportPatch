/* Runtime dump - TDElementProduction
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDElementProduction : NSManagedObject

@property (retain, nonatomic) TDRenditionKeySpec * baseKeySpec;
@property (retain, nonatomic) TDRenditionType * renditionType;
@property (retain, nonatomic) TDThemeConstant * renditionSubtype;
@property (retain, nonatomic) TDThemeConstant * zeroCodeArtworkInfo;
@property (retain, nonatomic) NSString * comment;
@property (retain, nonatomic) NSDate * dateOfLastChange;
@property (retain, nonatomic) NSNumber * isExcludedFromFilter;
@property (retain, nonatomic) TDThemeConstant * artworkDraftType;
@property (retain, nonatomic) NSSet * renditions;
@property (retain, nonatomic) TDNamedElement * name;
@property (retain, nonatomic) TDSchemaPartDefinition * partDefinition;

- (NSObject *)associatedFileModificationDateWithDocument:(NSObject *)arg0;
- (NSObject *)associatedFileURLWithDocument:(NSObject *)arg0;
- (void)deleteRenditionsInDocument:(NSObject *)arg0 shouldDeleteAssetFiles:(char)arg1;
- (NSString *)relativePath;

@end
