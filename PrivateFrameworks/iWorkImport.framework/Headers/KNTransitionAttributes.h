/* Runtime dump - KNTransitionAttributes
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNTransitionAttributes : KNAnimationAttributes

+ (NSDictionary *)supportedCustomAttributes;
+ (char)customAttributeKeyIsValid:(id)arg0;
+ (void)p_readSharedAttributesForArchive:(struct AnimationAttributesArchive *)arg0 intoDictionary:(NSDictionary *)arg1;
+ (KNTransitionAttributes *)defaultAttributesForEffect:(NSObject *)arg0;
+ (KNTransitionAttributes *)p_readDeprecatedAttributesForArchive:(struct TransitionAttributesArchive *)arg0 intoDictionary:(struct TransitionAttributesArchive)arg1;
+ (void)p_readTransitionAttributesForArchive:(struct TransitionAttributesArchive *)arg0 intoDictionary:(struct TransitionAttributesArchive)arg1;

- (void)encodeToArchive:(struct TransitionAttributesArchive *)arg0;
- (void)p_writeSharedAttributesToArchive:(struct TransitionAttributesArchive *)arg0;
- (void)p_writeTransitionAttributesToArchive:(struct TransitionAttributesArchive *)arg0;
- (KNTransitionAttributes *)initFromTransitionAttributesArchive:(struct TransitionAttributesArchive *)arg0;

@end
