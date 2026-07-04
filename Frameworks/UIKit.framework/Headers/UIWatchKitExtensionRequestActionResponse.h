/* Runtime dump - UIWatchKitExtensionRequestActionResponse
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWatchKitExtensionRequestActionResponse : BSActionResponse

@property (readonly, nonatomic) NSDictionary * result;

+ (NSObject *)responseWithWatchKitExtensionResult:(NSObject *)arg0;

- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;
- (NSDictionary *)result;
- (UIWatchKitExtensionRequestActionResponse *)initWithWatchKitExtensionResult:(NSObject *)arg0;

@end
