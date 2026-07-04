/* Runtime dump - CMNatalimeter
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMNatalimeter : NSObject
{
    CMNatalimeterInternal * _internal;
}

@property (readonly, nonatomic) CMNatalimeterInternal * _internal;

+ (NSArray *)maxNatalieEntries;
+ (CMNatalimeter *)userProfile;
+ (CMNatalimeter *)defaultUserProfile;
+ (char)setUserProfile:(YTUserProfile *)arg0 error:(id *)arg1;
+ (char)isNatalimeterAvailable;

- (CMNatalimeterInternal *)_internal;
- (void)setSession:(int)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)queryAbsoluteNatalimetryDataSinceRecord:(int)arg0 withHandler:(id /* block */)arg1;
- (void)queryAbsoluteNatalimetryDataSinceDataRecord:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (void)startAbsoluteNatalimetryDataUpdatesWithHandler:(id /* block */)arg0;
- (void)stopAbsoluteNatalimetryDataUpdates;
- (unsigned int)getSupportedMetricsForSession:(int)arg0;
- (void)dealloc;
- (CMNatalimeter *)init;

@end
