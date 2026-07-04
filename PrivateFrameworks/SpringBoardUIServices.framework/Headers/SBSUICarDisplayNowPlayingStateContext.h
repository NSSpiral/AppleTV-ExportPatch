/* Runtime dump - SBSUICarDisplayNowPlayingStateContext
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBSUICarDisplayNowPlayingStateContext : NSObject <NSSecureCoding>
{
    NSString * _stateName;
    NSString * _animationName;
    NSString * _associatedBundleID;
}

@property (copy, nonatomic) NSString * stateName;
@property (copy, nonatomic) NSString * animationName;
@property (copy, nonatomic) NSString * associatedBundleID;

+ (char)supportsSecureCoding;
+ (NSObject *)contextWithState:(NSObject *)arg0 animationName:(NSString *)arg1;

- (void)dealloc;
- (SBSUICarDisplayNowPlayingStateContext *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (SBSUICarDisplayNowPlayingStateContext *)initWithState:(NSObject *)arg0 animationName:(NSString *)arg1;
- (void)setStateName:(NSString *)arg0;
- (void)setAnimationName:(NSString *)arg0;
- (void)setAssociatedBundleID:(NSString *)arg0;
- (NSString *)stateName;
- (NSString *)associatedBundleID;
- (NSString *)animationName;

@end
