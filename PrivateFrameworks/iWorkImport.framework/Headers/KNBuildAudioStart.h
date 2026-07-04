/* Runtime dump - KNBuildAudioStart
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNBuildAudioStart : KNBuildMovieStart <KNAnimationPluginArchiving>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)animationFilter;
+ (int)animationCategory;
+ (NSString *)localizedMenuString:(int)arg0;
+ (NSObject *)thumbnailImageNameForType:(int)arg0;
+ (void)upgradeAttributes:(id *)arg0 animationName:(NSString *)arg1 warning:(id *)arg2 type:(int)arg3 isFromClassic:(char)arg4 version:(unsigned long long)arg5;
+ (void)downgradeAttributes:(id *)arg0 animationName:(id *)arg1 warning:(id *)arg2 type:(int)arg3 isToClassic:(char)arg4 version:(unsigned long long)arg5;
+ (NSString *)animationName;

@end
