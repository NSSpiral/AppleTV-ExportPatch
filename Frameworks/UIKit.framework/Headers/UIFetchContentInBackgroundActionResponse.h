/* Runtime dump - UIFetchContentInBackgroundActionResponse
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIFetchContentInBackgroundActionResponse : BSActionResponse

@property (readonly, nonatomic) unsigned int result;

+ (NSObject *)responseWithResult:(unsigned int)arg0;

- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;
- (UIFetchContentInBackgroundActionResponse *)initWithBackgroundFetchResult:(unsigned int)arg0;
- (UIFetchContentInBackgroundActionResponse *)initWithInfo:(NSDictionary *)arg0 error:(NSError *)arg1;
- (unsigned int)result;

@end
