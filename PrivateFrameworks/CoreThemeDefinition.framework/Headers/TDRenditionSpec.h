/* Runtime dump - TDRenditionSpec
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDRenditionSpec : NSManagedObject

@property (retain, nonatomic) TDRenditionKeySpec * keySpec;
@property (retain, nonatomic) NSDate * dateOfLastChange;
@property (retain, nonatomic) TDElementProduction * production;
@property (retain, nonatomic) TDRenditionType * renditionType;

- (void)resetToBaseKeySpec;
- (void)setRenditionType:(TDRenditionType *)arg0;
- (id)createCSIRepresentationWithCompression:(char)arg0 colorSpaceID:(unsigned int)arg1 document:(NSObject *)arg2;
- (TDRenditionType *)renditionType;
- (void)awakeFromInsert;

@end
