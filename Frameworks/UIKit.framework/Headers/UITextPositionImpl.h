/* Runtime dump - UITextPositionImpl
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextPositionImpl : UITextPosition
{
    WebVisiblePosition * _webVisiblePosition;
}

@property (retain, nonatomic) WebVisiblePosition * webVisiblePosition;

+ (NSObject *)wrapWebVisiblePosition:(NSObject *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (WebVisiblePosition *)webVisiblePosition;
- (void)setWebVisiblePosition:(WebVisiblePosition *)arg0;

@end
