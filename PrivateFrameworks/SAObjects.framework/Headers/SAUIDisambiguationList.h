/* Runtime dump - SAUIDisambiguationList
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIDisambiguationList : SAAceView

@property (copy, nonatomic) NSString * disambiguationKey;
@property (retain, nonatomic) SAUIDomainObjectPicker * domainObjectPicker;
@property (copy, nonatomic) NSArray * items;
@property (copy, nonatomic) NSString * selectionResponse;
@property (copy, nonatomic) NSString * speakableDelimiter;
@property (copy, nonatomic) NSString * speakableFinalDelimiter;
@property (copy, nonatomic) NSString * speakableSelectionResponse;
@property (copy, nonatomic) NSString * speakableSuffix;
@property (copy, nonatomic) NSString * title;

+ (NSArray *)disambiguationList;
+ (NSDictionary *)disambiguationListWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSArray *)items;
- (void)setItems:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (NSString *)selectionResponse;
- (void)setSelectionResponse:(NSString *)arg0;
- (NSString *)speakableSelectionResponse;
- (void)setSpeakableSelectionResponse:(NSString *)arg0;
- (NSString *)disambiguationKey;
- (void)setDisambiguationKey:(NSString *)arg0;
- (SAUIDomainObjectPicker *)domainObjectPicker;
- (void)setDomainObjectPicker:(SAUIDomainObjectPicker *)arg0;
- (NSString *)speakableDelimiter;
- (void)setSpeakableDelimiter:(NSString *)arg0;
- (NSString *)speakableFinalDelimiter;
- (void)setSpeakableFinalDelimiter:(NSString *)arg0;
- (NSString *)speakableSuffix;
- (void)setSpeakableSuffix:(NSString *)arg0;

@end
