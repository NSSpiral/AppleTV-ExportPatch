/* Runtime dump - GKAchievementDescription
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKAchievementDescription : NSObject <NSCoding, NSSecureCoding>
{
    GKAchievementInternal * _internal;
    UIImage * _image;
}

@property (readonly, copy, nonatomic) NSString * identifier;
@property (readonly, retain, nonatomic) NSString * groupIdentifier;
@property (readonly, copy, nonatomic) NSString * title;
@property (readonly, copy, nonatomic) NSString * achievedDescription;
@property (readonly, copy, nonatomic) NSString * unachievedDescription;
@property (readonly, nonatomic) int maximumPoints;
@property (readonly, nonatomic) char hidden;
@property (readonly, nonatomic) char replayable;
@property (retain, nonatomic) UIImage * image;
@property (retain) GKAchievementInternal * internal;

+ (char)supportsSecureCoding;
+ (char)instancesRespondToSelector:(SEL)arg0;
+ (GKAchievementDescription *)instanceMethodSignatureForSelector:(SEL)arg0;
+ (void)loadAchievementDescriptionsForGame:(id)arg0 withCompletionHandler:(id /* block */)arg1;
+ (void)loadAchievementDescriptionsWithCompletionHandler:(id /* block */)arg0;

- (GKAchievementInternal *)internal;
- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (GKAchievementDescription *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)respondsToSelector:(SEL)arg0;
- (GKAchievementDescription *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (UIImage *)image;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (GKAchievementDescription *)initWithInternalRepresentation:(GKAchievementInternal *)arg0;
- (void)setInternal:(GKAchievementInternal *)arg0;
- (void)setValue:(NSObject *)arg0 forUndefinedKey:(NSString *)arg1;

@end
