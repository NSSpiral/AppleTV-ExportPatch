/* Runtime dump - MCAsset
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCAsset : MCObject
{
    NSMutableSet * mTexts;
    NSString * mPath;
}

@property (copy) NSString * path;
@property (readonly, nonatomic) char isInUse;

- (NSString *)path;
- (void)setPath:(NSString *)arg0;
- (void)demolish;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCAsset *)initWithImprint:(NSDictionary *)arg0 andMontage:(NSObject *)arg1;
- (void)learnText:(NSString *)arg0;
- (void)forgetText:(NSString *)arg0;
- (char)isInUse;
- (NSDictionary *)imprint;

@end
