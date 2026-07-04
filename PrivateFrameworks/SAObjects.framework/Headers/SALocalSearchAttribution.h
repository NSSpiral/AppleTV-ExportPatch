/* Runtime dump - SALocalSearchAttribution
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchAttribution : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * attributionId;
@property (copy, nonatomic) NSArray * urls;
@property (nonatomic) int version;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSAttributedString *)attribution;
+ (NSDictionary *)attributionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setVersion:(int)arg0;
- (int)version;
- (NSArray *)urls;
- (void)setUrls:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (NSString *)attributionId;
- (void)setAttributionId:(NSString *)arg0;

@end
