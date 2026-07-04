/* Runtime dump - MCObject
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCObject : MCObjectBase
{
    MCMontage * mMontage;
    NSString * mObjectID;
}

@property (readonly, nonatomic) NSString * objectID;
@property (readonly, nonatomic) MCMontage * montage;

+ (NSDictionary *)objectWithImprint:(id)arg0 andMontage:(NSObject *)arg1;

- (void)dealloc;
- (UIView *)snapshot;
- (MCMontage *)montage;
- (void)demolish;
- (MCObject *)initFromScratchWithMontage:(MCMontage *)arg0;
- (char)isSnapshot;
- (MCObject *)initWithImprint:(NSDictionary *)arg0 andMontage:(NSObject *)arg1;
- (MCObject *)initSnapshot;
- (NSDictionary *)imprint;
- (NSString *)objectID;
- (void)finalize;

@end
