/* Runtime dump - FBDefaultLogger
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBDefaultLogger : FBFileLogger

- (NSString *)name;
- (char)isEnabled;
- (void)_setEnabled:(char)arg0;
- (int)maxLogSize;

@end
