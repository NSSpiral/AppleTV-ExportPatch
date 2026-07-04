/* Runtime dump - DADisableableObject
 * Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DADisableableObject : NSObject
{
    char _isDisabled;
}

@property (nonatomic) char isDisabled;

- (void)setIsDisabled:(char)arg0;
- (char)isDisabled;
- (void)disable;

@end
