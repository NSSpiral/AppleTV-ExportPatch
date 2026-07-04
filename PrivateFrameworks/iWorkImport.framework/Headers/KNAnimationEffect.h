/* Runtime dump - KNAnimationEffect
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationEffect : NSObject <KNAnimationPlugin>
{
    KNAnimationContext * mAnimationContext;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)animationFilter;
+ (int)animationCategory;
+ (NSSet *)supportedTypes;
+ (NSString *)localizedMenuString:(int)arg0;
+ (unsigned int)directionType;
+ (void)fillLocalizedDirectionMenu:(id)arg0 forType:(int)arg1;
+ (NSObject *)thumbnailImageNameForType:(int)arg0;
+ (KNAnimationEffect *)updateDirectionAttributeValue:(int)arg0 andCustomTextDirectionValue:(unsigned int)arg1 turnOffBounce:(char)arg2 turnOffMotionBlur:(char)arg3 forAttributes:(NSDictionary *)arg4;
+ (KNAnimationEffect *)defaultAttributes;
+ (NSString *)animationName;

- (KNAnimationEffect *)initWithAnimationContext:(NSObject *)arg0;

@end
