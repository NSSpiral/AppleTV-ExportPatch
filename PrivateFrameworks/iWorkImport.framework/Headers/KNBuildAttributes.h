/* Runtime dump - KNBuildAttributes
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNBuildAttributes : KNAnimationAttributes

+ (NSObject *)attributeValueForProperty:(NSString *)arg0 value:(NSObject *)arg1;
+ (NSDictionary *)supportedCustomAttributes;
+ (char)customAttributeKeyIsValid:(id)arg0;
+ (KNBuildAttributes *)defaultAttributesForEffect:(NSObject *)arg0 buildType:(int)arg1;

- (void)encodeToArchive:(struct BuildAttributesArchive *)arg0;
- (NSObject *)attributeValueForProperty:(NSString *)arg0;
- (void)p_readSharedAttributesForArchive:(struct AnimationAttributesArchive *)arg0 intoDictionary:(NSDictionary *)arg1;
- (void)p_readTEFAttributesForArchive:(struct BuildAttributesArchive *)arg0 intoDictionary:(struct BuildAttributesArchive)arg1;
- (void)p_readBuildAttributesForArchive:(struct BuildAttributesArchive *)arg0 intoDictionary:(struct BuildAttributesArchive)arg1;
- (void)p_writeSharedAttributesToArchive:(struct BuildAttributesArchive *)arg0;
- (void)p_writeBuildAttributesToArchive:(struct BuildAttributesArchive *)arg0;
- (KNBuildAttributes *)initFromBuildAttributesArchive:(struct BuildAttributesArchive *)arg0;

@end
