/* Runtime dump - KNBuildAppear
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNBuildAppear : KNAnimationEffect <KNChunkableBuildAnimator>

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
+ (unsigned int)maxChunkCountToAnimate;
+ (KNBuildAppear *)defaultAttributes;
+ (NSString *)animationName;

- (NSString *)animationsWithContext:(NSObject *)arg0;

@end
