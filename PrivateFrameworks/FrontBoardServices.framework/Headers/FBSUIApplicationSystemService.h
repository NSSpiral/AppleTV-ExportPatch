/* Runtime dump - FBSUIApplicationSystemService
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSUIApplicationSystemService : NSObject
{
    NSObject<OS_dispatch_queue> * _delegateQueue;
    <FBSUIApplicationSystemServiceDelegate> * _delegate;
}

@property (nonatomic) <FBSUIApplicationSystemServiceDelegate> * delegate;
@property (nonatomic) int badgeNumber;
@property (copy, nonatomic) NSString * badgeString;
@property (readonly, nonatomic) double backgroundTimeRemaining;
@property (nonatomic) float currentBacklightLevel;

- (void)dealloc;
- (void)setDelegate:(<FBSUIApplicationSystemServiceDelegate> *)arg0;
- (FBSUIApplicationSystemService *)init;
- (<FBSUIApplicationSystemServiceDelegate> *)delegate;
- (FBSUIApplicationSystemService *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setBadgeString:(NSString *)arg0;
- (int)badgeNumber;
- (void)setBadgeNumber:(int)arg0;
- (double)backgroundTimeRemaining;
- (char)setNextWakeInterval:(double)arg0;
- (void)setCurrentBacklightLevel:(float)arg0;
- (float)currentBacklightLevel;
- (id)_getBadgeValue;
- (NSString *)badgeString;

@end
