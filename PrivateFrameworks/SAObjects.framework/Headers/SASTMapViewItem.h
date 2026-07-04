/* Runtime dump - SASTMapViewItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTMapViewItem : AceObject <SASTActionableTemplateItem>

@property (retain, nonatomic) <SASTTemplateAction> * action;
@property (retain, nonatomic) SALocation * location;
@property (copy, nonatomic) NSNumber * zoomLevel;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)mapViewItem;
+ (NSDictionary *)mapViewItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (<SASTTemplateAction> *)action;
- (void)setAction:(<SASTTemplateAction> *)arg0;
- (SALocation *)location;
- (void)setLocation:(SALocation *)arg0;
- (NSString *)encodedClassName;
- (void)setZoomLevel:(NSNumber *)arg0;
- (NSNumber *)zoomLevel;

@end
