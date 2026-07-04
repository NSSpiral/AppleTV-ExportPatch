/* Runtime dump - SBJsonStreamWriterState
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface SBJsonStreamWriterState : NSObject

+ (SBJsonStreamWriterState *)sharedInstance;

- (char)isInvalidState:(NSObject *)arg0;
- (char)expectingKey:(NSString *)arg0;
- (void)appendSeparator:(id)arg0;
- (void)appendWhitespace:(id)arg0;
- (void)transitionState:(NSObject *)arg0;

@end
