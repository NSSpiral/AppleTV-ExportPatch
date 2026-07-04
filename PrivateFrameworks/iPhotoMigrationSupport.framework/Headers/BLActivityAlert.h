/* Runtime dump - BLActivityAlert
 * Image: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
 */

@interface BLActivityAlert : BLAlert
{
    UIProgressView * _progressView;
    UIActivityIndicatorView * _activityIndicatorView;
    int _type;
    float _progress;
    char _hasActivity;
}

- (void)setActivityType:(int)arg0;
- (void)setTitle:(NSString *)arg0;
- (void)setProgress:(float)arg0;
- (int)activityType;
- (void).cxx_destruct;
- (void)setHasActivity:(char)arg0;
- (BLActivityAlert *)initWithType:(int)arg0 title:(NSString *)arg1 options:(int)arg2 cancelAction:(NSObject *)arg3;
- (BLActivityAlert *)initWithType:(int)arg0 title:(NSString *)arg1 cancelAction:(NSObject *)arg2;

@end
