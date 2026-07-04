/* Runtime dump - TDSchemaPartDefinition
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDSchemaPartDefinition : NSManagedObject
{
    CUIImage * previewImage;
    NSArray * renditions;
    NSArray * renditionGroups;
    unsigned int partFeatures;
}

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSString * widgetID;
@property (retain, nonatomic) TDSchemaDefinition * element;
@property (retain, nonatomic) NSSet * productions;
@property (retain, nonatomic) CUIImage * previewImage;
@property (copy, nonatomic) NSArray * renditions;
@property (retain, nonatomic) NSArray * renditionGroups;
@property (nonatomic) unsigned int partFeatures;

- (int)elementID;
- (NSString *)displayName;
- (struct _xmlSchema *)_schema;
- (struct ? *)cuiPartDefinition;
- (void)setRenditionGroups:(NSArray *)arg0;
- (void)setPartFeatures:(unsigned int)arg0;
- (void)updateDerivedRenditionData;
- (id)bestPreviewRendition;
- (NSObject *)validStatesWithDocument:(NSObject *)arg0;
- (int)_renditionKeyValueForTokenIdentifier:(unsigned short)arg0;
- (int)partID;
- (NSArray *)renditionGroups;
- (NSArray *)renditions;
- (void)setRenditions:(NSArray *)arg0;
- (unsigned int)partFeatures;
- (void)didTurnIntoFault;
- (CUIImage *)previewImage;
- (void)setPreviewImage:(CUIImage *)arg0;

@end
